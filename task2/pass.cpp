#include "llvm/IR/Function.h"
#include "llvm/IR/Module.h"
#include "llvm/IR/Instructions.h"
#include "llvm/IR/PassManager.h"
#include "llvm/IR/IRBuilder.h"
#include "llvm/IR/Constants.h"
#include "llvm/IR/Type.h"
#include "llvm/Passes/PassBuilder.h"
#include "llvm/Passes/PassPlugin.h"
#include "llvm/Support/raw_ostream.h"
#include "llvm/Support/Compiler.h"
#include "llvm/IR/Verifier.h"

using namespace llvm;

// Define a new pass to trace instruction usage
struct TraceInstructionPass : public PassInfoMixin<TraceInstructionPass> {
  static unsigned Counter; // Static counter to track instructions

  // Main function that runs the pass over the given function
  PreservedAnalyses run(Function &Func, FunctionAnalysisManager &FAM) {
    Module *Mod = Func.getParent(); // Get the module containing the function
    LLVMContext &Context = Mod->getContext(); // Get the LLVM context

    // Get or create declarations for logging functions
    FunctionCallee LoggerForInstructions = Mod->getOrInsertFunction(
        "instructionLogger",
        FunctionType::get(Type::getVoidTy(Context),
                          {Type::getInt8Ty(Context)->getPointerTo(), Type::getInt64Ty(Context)},
                          false)); // Logger for instruction details

    FunctionCallee LoggerForUses = Mod->getOrInsertFunction(
        "usesLogger",
        FunctionType::get(Type::getVoidTy(Context),
                          {Type::getInt8Ty(Context)->getPointerTo(), Type::getInt8Ty(Context)->getPointerTo()},
                          false)); // Logger for instruction usage

    // Iterate over each basic block in the function
    for (auto &BasicBlock : Func) {
      // Iterate over each instruction in the basic block
      for (auto &Inst : BasicBlock) {
        // Skip PHI nodes as they are not regular instructions
        if (isa<PHINode>(&Inst))
          continue;

        IRBuilder<> Builder(&Inst); // Create an IR builder for inserting instructions

        std::string InstructionName = Inst.getOpcodeName(); // Get the opcode name of the instruction

        uint64_t InstructionID = Counter++; // Get a unique ID for the instruction

        // Create constants for the instruction name and ID
        Value *InstructionStrConst = Builder.CreateGlobalStringPtr(InstructionName);
        Value *InstructionIDConst = ConstantInt::get(Type::getInt64Ty(Context), InstructionID);

        // Call the instruction logger with the instruction name and ID
        Builder.CreateCall(LoggerForInstructions, {InstructionStrConst, InstructionIDConst});

        // Iterate over the uses of the instruction
        for (auto &Use : Inst.uses()) {
          User *UserEntity = Use.getUser(); // Get the user of the current instruction
          if (Instruction *UserInstruction = dyn_cast<Instruction>(UserEntity)) {
            // If the user is an instruction, log its usage

            std::string LeftHandName = Inst.getOpcodeName(); // Get the name of the left-hand instruction
            std::string RightHandName = UserInstruction->getOpcodeName(); // Get the name of the right-hand instruction

            // Create constants for both instruction names
            Value *LeftNameConst = Builder.CreateGlobalStringPtr(LeftHandName);
            Value *RightNameConst = Builder.CreateGlobalStringPtr(RightHandName);

            // Call the usage logger with both instruction names
            Builder.CreateCall(LoggerForUses, {LeftNameConst, RightNameConst});
          }
        }
      }
    }

    // Check if the function is valid after modifications
    bool IsBroken = verifyFunction(Func, &errs());
    if (IsBroken) {
      errs() << "Function " << Func.getName() << " is broken!\n"; // Log an error if the function is broken
      return PreservedAnalyses::none(); // Indicate that analyses are not preserved
    }

    return PreservedAnalyses::all(); // Indicate that all analyses are preserved
  }
};

// Initialize the static member variable
unsigned TraceInstructionPass::Counter = 0;

// Define plugin information for registering the pass
extern "C" PassPluginLibraryInfo LLVM_ATTRIBUTE_WEAK llvmGetPassPluginInfo() {
  return {LLVM_PLUGIN_API_VERSION, "TraceInstructionPass", LLVM_VERSION_STRING,
          [](PassBuilder &PB) {
            PB.registerPipelineParsingCallback(
                [](StringRef Name, FunctionPassManager &FPM,
                   ArrayRef<PassBuilder::PipelineElement>) {
                  if (Name == "trace-instruction") {
                    FPM.addPass(TraceInstructionPass()); // Register the instruction tracing pass
                    return true; // Indicate successful recognition of this pass
                  }
                  return false; // Indicate that this pass was not recognized
                });
          }};
}