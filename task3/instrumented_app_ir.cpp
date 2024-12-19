auto *type_0x00000000016F33A8 = Type::getVoidTy(Ctx);
auto *ret_type_0 = type_0x00000000016F33A8;
std::vector<Type*> args_0;
auto *type_0x00000000016F3540 = Type::getIntNTy(Ctx, 64);
args_0.push_back(type_0x00000000016F3540);
auto *type_0x00000000016F6D70 = PointerType::get(Ctx, 0);
args_0.push_back(type_0x00000000016F6D70);
auto *func_type_0 = FunctionType::get(ret_type_0, args_0, false);
auto *func_0 = Function::Create(func_type_0, Function::ExternalLinkage, "llvm.lifetime.start.p0", M);
auto *type_0x00000000016F3528 = Type::getIntNTy(Ctx, 32);
auto *ret_type_1 = type_0x00000000016F3528;
std::vector<Type*> args_1;
auto *func_type_1 = FunctionType::get(ret_type_1, args_1, false);
auto *func_1 = Function::Create(func_type_1, Function::ExternalLinkage, "simRand", M);
auto *ret_type_2 = type_0x00000000016F33A8;
std::vector<Type*> args_2;
auto *func_type_2 = FunctionType::get(ret_type_2, args_2, false);
auto *func_2 = Function::Create(func_type_2, Function::ExternalLinkage, "simFlush", M);
auto *ret_type_3 = type_0x00000000016F33A8;
std::vector<Type*> args_3;
auto *func_type_3 = FunctionType::get(ret_type_3, args_3, false);
auto *func_3 = Function::Create(func_type_3, Function::ExternalLinkage, "simClear", M);
auto *ret_type_4 = type_0x00000000016F33A8;
std::vector<Type*> args_4;
args_4.push_back(type_0x00000000016F3528);
args_4.push_back(type_0x00000000016F3528);
args_4.push_back(type_0x00000000016F3528);
auto *func_type_4 = FunctionType::get(ret_type_4, args_4, false);
auto *func_4 = Function::Create(func_type_4, Function::ExternalLinkage, "simPutPixel", M);
auto *ret_type_5 = type_0x00000000016F33A8;
std::vector<Type*> args_5;
auto *func_type_5 = FunctionType::get(ret_type_5, args_5, false);
auto *func_5 = Function::Create(func_type_5, Function::ExternalLinkage, "app", M);
auto *bb_6 = BasicBlock::Create(Ctx, "", func_5);
auto *bb_7 = BasicBlock::Create(Ctx, "", func_5);
auto *bb_8 = BasicBlock::Create(Ctx, "", func_5);
auto *bb_9 = BasicBlock::Create(Ctx, "", func_5);
auto *bb_10 = BasicBlock::Create(Ctx, "", func_5);
auto *bb_11 = BasicBlock::Create(Ctx, "", func_5);
auto *bb_12 = BasicBlock::Create(Ctx, "", func_5);
auto *bb_13 = BasicBlock::Create(Ctx, "", func_5);
auto *bb_14 = BasicBlock::Create(Ctx, "", func_5);
auto *bb_15 = BasicBlock::Create(Ctx, "", func_5);
auto *bb_16 = BasicBlock::Create(Ctx, "", func_5);
auto *bb_17 = BasicBlock::Create(Ctx, "", func_5);
auto *bb_18 = BasicBlock::Create(Ctx, "", func_5);
auto *bb_19 = BasicBlock::Create(Ctx, "", func_5);
auto *bb_20 = BasicBlock::Create(Ctx, "", func_5);
/*
  %1 = alloca [100 x i32], align 16
*/
builder.SetInsertPoint(bb_6);
auto *type_0x00000000016F6D90 = ArrayType::get(type_0x00000000016F3528, 100);
auto *add_arg_21 = type_0x00000000016F6D90;
auto *op_0_21 = ConstantInt::get(Ctx, APInt(32, 1));
auto *instr_21 = builder.CreateAlloca(add_arg_21, op_0_21);
/*
  %2 = alloca [100 x i32], align 16
*/
builder.SetInsertPoint(bb_6);
auto *add_arg_22 = type_0x00000000016F6D90;
auto *op_0_22 = ConstantInt::get(Ctx, APInt(32, 1));
auto *instr_22 = builder.CreateAlloca(add_arg_22, op_0_22);
/*
  %3 = alloca [100 x i32], align 16
*/
builder.SetInsertPoint(bb_6);
auto *add_arg_23 = type_0x00000000016F6D90;
auto *op_0_23 = ConstantInt::get(Ctx, APInt(32, 1));
auto *instr_23 = builder.CreateAlloca(add_arg_23, op_0_23);
/*
  %4 = alloca [100 x i32], align 16
*/
builder.SetInsertPoint(bb_6);
auto *add_arg_24 = type_0x00000000016F6D90;
auto *op_0_24 = ConstantInt::get(Ctx, APInt(32, 1));
auto *instr_24 = builder.CreateAlloca(add_arg_24, op_0_24);
/*
  %5 = bitcast ptr %1 to ptr
*/
builder.SetInsertPoint(bb_6);
auto *op_0_25 = instr_21;
auto *instr_25 = builder.CreateUNSUPPORTED(op_0_25);
/*
  call void @llvm.lifetime.start.p0(i64 400, ptr nonnull %5) #3
*/
builder.SetInsertPoint(bb_6);
auto *op_0_26 = func_type_0;
auto *op_1_26 = func_0;
std::vector<Value *> op_2_26;
auto *op_3_26 = ConstantInt::get(Ctx, APInt(64, 400));
auto *op_4_26 = instr_25;
op_2_26.push_back(op_3_26);
op_2_26.push_back(op_4_26);
auto *instr_26 = builder.CreateCall(op_0_26, op_1_26, op_2_26);
/*
  %6 = bitcast ptr %2 to ptr
*/
builder.SetInsertPoint(bb_6);
auto *op_0_27 = instr_22;
auto *instr_27 = builder.CreateUNSUPPORTED(op_0_27);
/*
  call void @llvm.lifetime.start.p0(i64 400, ptr nonnull %6) #3
*/
builder.SetInsertPoint(bb_6);
auto *op_0_28 = func_type_0;
auto *op_1_28 = func_0;
std::vector<Value *> op_2_28;
auto *op_3_28 = ConstantInt::get(Ctx, APInt(64, 400));
auto *op_4_28 = instr_27;
op_2_28.push_back(op_3_28);
op_2_28.push_back(op_4_28);
auto *instr_28 = builder.CreateCall(op_0_28, op_1_28, op_2_28);
/*
  %7 = bitcast ptr %3 to ptr
*/
builder.SetInsertPoint(bb_6);
auto *op_0_29 = instr_23;
auto *instr_29 = builder.CreateUNSUPPORTED(op_0_29);
/*
  call void @llvm.lifetime.start.p0(i64 400, ptr nonnull %7) #3
*/
builder.SetInsertPoint(bb_6);
auto *op_0_30 = func_type_0;
auto *op_1_30 = func_0;
std::vector<Value *> op_2_30;
auto *op_3_30 = ConstantInt::get(Ctx, APInt(64, 400));
auto *op_4_30 = instr_29;
op_2_30.push_back(op_3_30);
op_2_30.push_back(op_4_30);
auto *instr_30 = builder.CreateCall(op_0_30, op_1_30, op_2_30);
/*
  %8 = bitcast ptr %4 to ptr
*/
builder.SetInsertPoint(bb_6);
auto *op_0_31 = instr_24;
auto *instr_31 = builder.CreateUNSUPPORTED(op_0_31);
/*
  call void @llvm.lifetime.start.p0(i64 400, ptr nonnull %8) #3
*/
builder.SetInsertPoint(bb_6);
auto *op_0_32 = func_type_0;
auto *op_1_32 = func_0;
std::vector<Value *> op_2_32;
auto *op_3_32 = ConstantInt::get(Ctx, APInt(64, 400));
auto *op_4_32 = instr_31;
op_2_32.push_back(op_3_32);
op_2_32.push_back(op_4_32);
auto *instr_32 = builder.CreateCall(op_0_32, op_1_32, op_2_32);
/*
  br label %9
*/
builder.SetInsertPoint(bb_6);
auto *op_0_33 = bb_7;
auto *instr_33 = builder.CreateBr(op_0_33);
/*
  %10 = phi i64 [ 0, %0 ], [ %25, %9 ]
*/
builder.SetInsertPoint(bb_7);
auto *phi_ty_34 = type_0x00000000016F3540;
auto *phi_34 = builder.CreatePHI(phi_ty_34, 2, "");
auto *instr_34 = phi_34;
/*
  %11 = tail call i32 (...) @simRand() #3
*/
builder.SetInsertPoint(bb_7);
auto *op_0_35 = func_type_1;
auto *op_1_35 = func_1;
std::vector<Value *> op_2_35;
auto *instr_35 = builder.CreateCall(op_0_35, op_1_35, op_2_35);
/*
  %12 = srem i32 %11, 512
*/
builder.SetInsertPoint(bb_7);
auto *op_0_36 = instr_35;
auto *op_1_36 = ConstantInt::get(Ctx, APInt(32, 512));
auto *instr_36 = builder.CreateSRem(op_0_36, op_1_36);
/*
  %13 = getelementptr inbounds [100 x i32], ptr %1, i64 0, i64 %10
*/
builder.SetInsertPoint(bb_7);
auto *op_0_37 = type_0x00000000016F6D90;
auto *op_1_37 = instr_21;
std::vector<Value *> op_2_37;
auto *op_3_37 = ConstantInt::get(Ctx, APInt(64, 0));
auto *op_4_37 = instr_34;
op_2_37.push_back(op_3_37);
op_2_37.push_back(op_4_37);
auto *instr_37 = builder.CreateGEP(op_0_37, op_1_37, op_2_37);
dyn_cast<Instruction>(instr_37)->setHasNoUnsignedWrap();
/*
  store i32 %12, ptr %13, align 4, !tbaa !2
*/
builder.SetInsertPoint(bb_7);
auto *op_0_38 = instr_36;
auto *op_1_38 = instr_37;
auto *instr_38 = builder.CreateStore(op_0_38, op_1_38);
/*
  %14 = tail call i32 (...) @simRand() #3
*/
builder.SetInsertPoint(bb_7);
auto *op_0_39 = func_type_1;
auto *op_1_39 = func_1;
std::vector<Value *> op_2_39;
auto *instr_39 = builder.CreateCall(op_0_39, op_1_39, op_2_39);
/*
  %15 = srem i32 %14, 256
*/
builder.SetInsertPoint(bb_7);
auto *op_0_40 = instr_39;
auto *op_1_40 = ConstantInt::get(Ctx, APInt(32, 256));
auto *instr_40 = builder.CreateSRem(op_0_40, op_1_40);
/*
  %16 = getelementptr inbounds [100 x i32], ptr %2, i64 0, i64 %10
*/
builder.SetInsertPoint(bb_7);
auto *op_0_41 = type_0x00000000016F6D90;
auto *op_1_41 = instr_22;
std::vector<Value *> op_2_41;
auto *op_3_41 = ConstantInt::get(Ctx, APInt(64, 0));
auto *op_4_41 = instr_34;
op_2_41.push_back(op_3_41);
op_2_41.push_back(op_4_41);
auto *instr_41 = builder.CreateGEP(op_0_41, op_1_41, op_2_41);
dyn_cast<Instruction>(instr_41)->setHasNoUnsignedWrap();
/*
  store i32 %15, ptr %16, align 4, !tbaa !2
*/
builder.SetInsertPoint(bb_7);
auto *op_0_42 = instr_40;
auto *op_1_42 = instr_41;
auto *instr_42 = builder.CreateStore(op_0_42, op_1_42);
/*
  %17 = tail call i32 (...) @simRand() #3
*/
builder.SetInsertPoint(bb_7);
auto *op_0_43 = func_type_1;
auto *op_1_43 = func_1;
std::vector<Value *> op_2_43;
auto *instr_43 = builder.CreateCall(op_0_43, op_1_43, op_2_43);
/*
  %18 = srem i32 %17, 5
*/
builder.SetInsertPoint(bb_7);
auto *op_0_44 = instr_43;
auto *op_1_44 = ConstantInt::get(Ctx, APInt(32, 5));
auto *instr_44 = builder.CreateSRem(op_0_44, op_1_44);
/*
  %19 = add nsw i32 %18, 1
*/
builder.SetInsertPoint(bb_7);
auto *op_0_45 = instr_44;
auto *op_1_45 = ConstantInt::get(Ctx, APInt(32, 1));
auto *instr_45 = builder.CreateAdd(op_0_45, op_1_45);
dyn_cast<Instruction>(instr_45)->setHasNoSignedWrap();
/*
  %20 = getelementptr inbounds [100 x i32], ptr %3, i64 0, i64 %10
*/
builder.SetInsertPoint(bb_7);
auto *op_0_46 = type_0x00000000016F6D90;
auto *op_1_46 = instr_23;
std::vector<Value *> op_2_46;
auto *op_3_46 = ConstantInt::get(Ctx, APInt(64, 0));
auto *op_4_46 = instr_34;
op_2_46.push_back(op_3_46);
op_2_46.push_back(op_4_46);
auto *instr_46 = builder.CreateGEP(op_0_46, op_1_46, op_2_46);
dyn_cast<Instruction>(instr_46)->setHasNoUnsignedWrap();
/*
  store i32 %19, ptr %20, align 4, !tbaa !2
*/
builder.SetInsertPoint(bb_7);
auto *op_0_47 = instr_45;
auto *op_1_47 = instr_46;
auto *instr_47 = builder.CreateStore(op_0_47, op_1_47);
/*
  %21 = tail call i32 (...) @simRand() #3
*/
builder.SetInsertPoint(bb_7);
auto *op_0_48 = func_type_1;
auto *op_1_48 = func_1;
std::vector<Value *> op_2_48;
auto *instr_48 = builder.CreateCall(op_0_48, op_1_48, op_2_48);
/*
  %22 = srem i32 %21, 16777215
*/
builder.SetInsertPoint(bb_7);
auto *op_0_49 = instr_48;
auto *op_1_49 = ConstantInt::get(Ctx, APInt(32, 16777215));
auto *instr_49 = builder.CreateSRem(op_0_49, op_1_49);
/*
  %23 = add nsw i32 %22, -16777216
*/
builder.SetInsertPoint(bb_7);
auto *op_0_50 = instr_49;
auto *op_1_50 = ConstantInt::get(Ctx, APInt(32, 4278190080));
auto *instr_50 = builder.CreateAdd(op_0_50, op_1_50);
dyn_cast<Instruction>(instr_50)->setHasNoSignedWrap();
/*
  %24 = getelementptr inbounds [100 x i32], ptr %4, i64 0, i64 %10
*/
builder.SetInsertPoint(bb_7);
auto *op_0_51 = type_0x00000000016F6D90;
auto *op_1_51 = instr_24;
std::vector<Value *> op_2_51;
auto *op_3_51 = ConstantInt::get(Ctx, APInt(64, 0));
auto *op_4_51 = instr_34;
op_2_51.push_back(op_3_51);
op_2_51.push_back(op_4_51);
auto *instr_51 = builder.CreateGEP(op_0_51, op_1_51, op_2_51);
dyn_cast<Instruction>(instr_51)->setHasNoUnsignedWrap();
/*
  store i32 %23, ptr %24, align 4, !tbaa !2
*/
builder.SetInsertPoint(bb_7);
auto *op_0_52 = instr_50;
auto *op_1_52 = instr_51;
auto *instr_52 = builder.CreateStore(op_0_52, op_1_52);
/*
  %25 = add nuw nsw i64 %10, 1
*/
builder.SetInsertPoint(bb_7);
auto *op_0_53 = instr_34;
auto *op_1_53 = ConstantInt::get(Ctx, APInt(64, 1));
auto *instr_53 = builder.CreateAdd(op_0_53, op_1_53);
dyn_cast<Instruction>(instr_53)->setHasNoUnsignedWrap();
dyn_cast<Instruction>(instr_53)->setHasNoSignedWrap();
/*
  %26 = icmp eq i64 %25, 100
*/
builder.SetInsertPoint(bb_7);
auto op_0_54 = CmpInst::Predicate::ICMP_EQ;
auto *op_1_54 = instr_53;
auto *op_2_54 = ConstantInt::get(Ctx, APInt(64, 100));
auto *instr_54 = builder.CreateICmp(op_0_54, op_1_54, op_2_54);
/*
  br i1 %26, label %28, label %9
*/
builder.SetInsertPoint(bb_7);
auto *op_0_55 = instr_54;
auto *op_1_55 = bb_9;
auto *op_2_55 = bb_7;
auto *instr_55 = builder.CreateCondBr(op_0_55, op_1_55, op_2_55);
/*
  tail call void (...) @simFlush() #3
*/
builder.SetInsertPoint(bb_8);
auto *op_0_56 = func_type_2;
auto *op_1_56 = func_2;
std::vector<Value *> op_2_56;
auto *instr_56 = builder.CreateCall(op_0_56, op_1_56, op_2_56);
/*
  tail call void (...) @simClear() #3
*/
builder.SetInsertPoint(bb_8);
auto *op_0_57 = func_type_3;
auto *op_1_57 = func_3;
std::vector<Value *> op_2_57;
auto *instr_57 = builder.CreateCall(op_0_57, op_1_57, op_2_57);
/*
  br label %64
*/
builder.SetInsertPoint(bb_8);
auto *op_0_58 = bb_16;
auto *instr_58 = builder.CreateBr(op_0_58);
/*
  %29 = phi i64 [ %65, %64 ], [ 0, %9 ]
*/
builder.SetInsertPoint(bb_9);
auto *phi_ty_59 = type_0x00000000016F3540;
auto *phi_59 = builder.CreatePHI(phi_ty_59, 2, "");
auto *instr_59 = phi_59;
/*
  %30 = getelementptr inbounds [100 x i32], ptr %2, i64 0, i64 %29
*/
builder.SetInsertPoint(bb_9);
auto *op_0_60 = type_0x00000000016F6D90;
auto *op_1_60 = instr_22;
std::vector<Value *> op_2_60;
auto *op_3_60 = ConstantInt::get(Ctx, APInt(64, 0));
auto *op_4_60 = instr_59;
op_2_60.push_back(op_3_60);
op_2_60.push_back(op_4_60);
auto *instr_60 = builder.CreateGEP(op_0_60, op_1_60, op_2_60);
dyn_cast<Instruction>(instr_60)->setHasNoUnsignedWrap();
/*
  %31 = load i32, ptr %30, align 4, !tbaa !2
*/
builder.SetInsertPoint(bb_9);
auto *op_0_61 = type_0x00000000016F3528;
auto *op_1_61 = instr_60;
auto *instr_61 = builder.CreateLoad(op_0_61, op_1_61);
/*
  %32 = add nsw i32 %31, 1
*/
builder.SetInsertPoint(bb_9);
auto *op_0_62 = instr_61;
auto *op_1_62 = ConstantInt::get(Ctx, APInt(32, 1));
auto *instr_62 = builder.CreateAdd(op_0_62, op_1_62);
dyn_cast<Instruction>(instr_62)->setHasNoSignedWrap();
/*
  store i32 %32, ptr %30, align 4, !tbaa !2
*/
builder.SetInsertPoint(bb_9);
auto *op_0_63 = instr_62;
auto *op_1_63 = instr_60;
auto *instr_63 = builder.CreateStore(op_0_63, op_1_63);
/*
  %33 = icmp sgt i32 %31, 255
*/
builder.SetInsertPoint(bb_9);
auto op_0_64 = CmpInst::Predicate::ICMP_SGT;
auto *op_1_64 = instr_61;
auto *op_2_64 = ConstantInt::get(Ctx, APInt(32, 255));
auto *instr_64 = builder.CreateICmp(op_0_64, op_1_64, op_2_64);
/*
  br i1 %33, label %37, label %34
*/
builder.SetInsertPoint(bb_9);
auto *op_0_65 = instr_64;
auto *op_1_65 = bb_11;
auto *op_2_65 = bb_10;
auto *instr_65 = builder.CreateCondBr(op_0_65, op_1_65, op_2_65);
/*
  %35 = getelementptr inbounds [100 x i32], ptr %3, i64 0, i64 %29
*/
builder.SetInsertPoint(bb_10);
auto *op_0_66 = type_0x00000000016F6D90;
auto *op_1_66 = instr_23;
std::vector<Value *> op_2_66;
auto *op_3_66 = ConstantInt::get(Ctx, APInt(64, 0));
auto *op_4_66 = instr_59;
op_2_66.push_back(op_3_66);
op_2_66.push_back(op_4_66);
auto *instr_66 = builder.CreateGEP(op_0_66, op_1_66, op_2_66);
dyn_cast<Instruction>(instr_66)->setHasNoUnsignedWrap();
/*
  %36 = load i32, ptr %35, align 4, !tbaa !2
*/
builder.SetInsertPoint(bb_10);
auto *op_0_67 = type_0x00000000016F3528;
auto *op_1_67 = instr_66;
auto *instr_67 = builder.CreateLoad(op_0_67, op_1_67);
/*
  br label %49
*/
builder.SetInsertPoint(bb_10);
auto *op_0_68 = bb_12;
auto *instr_68 = builder.CreateBr(op_0_68);
/*
  store i32 0, ptr %30, align 4, !tbaa !2
*/
builder.SetInsertPoint(bb_11);
auto *op_0_69 = ConstantInt::get(Ctx, APInt(32, 0));
auto *op_1_69 = instr_60;
auto *instr_69 = builder.CreateStore(op_0_69, op_1_69);
/*
  %38 = tail call i32 (...) @simRand() #3
*/
builder.SetInsertPoint(bb_11);
auto *op_0_70 = func_type_1;
auto *op_1_70 = func_1;
std::vector<Value *> op_2_70;
auto *instr_70 = builder.CreateCall(op_0_70, op_1_70, op_2_70);
/*
  %39 = srem i32 %38, 512
*/
builder.SetInsertPoint(bb_11);
auto *op_0_71 = instr_70;
auto *op_1_71 = ConstantInt::get(Ctx, APInt(32, 512));
auto *instr_71 = builder.CreateSRem(op_0_71, op_1_71);
/*
  %40 = getelementptr inbounds [100 x i32], ptr %1, i64 0, i64 %29
*/
builder.SetInsertPoint(bb_11);
auto *op_0_72 = type_0x00000000016F6D90;
auto *op_1_72 = instr_21;
std::vector<Value *> op_2_72;
auto *op_3_72 = ConstantInt::get(Ctx, APInt(64, 0));
auto *op_4_72 = instr_59;
op_2_72.push_back(op_3_72);
op_2_72.push_back(op_4_72);
auto *instr_72 = builder.CreateGEP(op_0_72, op_1_72, op_2_72);
dyn_cast<Instruction>(instr_72)->setHasNoUnsignedWrap();
/*
  store i32 %39, ptr %40, align 4, !tbaa !2
*/
builder.SetInsertPoint(bb_11);
auto *op_0_73 = instr_71;
auto *op_1_73 = instr_72;
auto *instr_73 = builder.CreateStore(op_0_73, op_1_73);
/*
  %41 = tail call i32 (...) @simRand() #3
*/
builder.SetInsertPoint(bb_11);
auto *op_0_74 = func_type_1;
auto *op_1_74 = func_1;
std::vector<Value *> op_2_74;
auto *instr_74 = builder.CreateCall(op_0_74, op_1_74, op_2_74);
/*
  %42 = srem i32 %41, 5
*/
builder.SetInsertPoint(bb_11);
auto *op_0_75 = instr_74;
auto *op_1_75 = ConstantInt::get(Ctx, APInt(32, 5));
auto *instr_75 = builder.CreateSRem(op_0_75, op_1_75);
/*
  %43 = add nsw i32 %42, 1
*/
builder.SetInsertPoint(bb_11);
auto *op_0_76 = instr_75;
auto *op_1_76 = ConstantInt::get(Ctx, APInt(32, 1));
auto *instr_76 = builder.CreateAdd(op_0_76, op_1_76);
dyn_cast<Instruction>(instr_76)->setHasNoSignedWrap();
/*
  %44 = getelementptr inbounds [100 x i32], ptr %3, i64 0, i64 %29
*/
builder.SetInsertPoint(bb_11);
auto *op_0_77 = type_0x00000000016F6D90;
auto *op_1_77 = instr_23;
std::vector<Value *> op_2_77;
auto *op_3_77 = ConstantInt::get(Ctx, APInt(64, 0));
auto *op_4_77 = instr_59;
op_2_77.push_back(op_3_77);
op_2_77.push_back(op_4_77);
auto *instr_77 = builder.CreateGEP(op_0_77, op_1_77, op_2_77);
dyn_cast<Instruction>(instr_77)->setHasNoUnsignedWrap();
/*
  store i32 %43, ptr %44, align 4, !tbaa !2
*/
builder.SetInsertPoint(bb_11);
auto *op_0_78 = instr_76;
auto *op_1_78 = instr_77;
auto *instr_78 = builder.CreateStore(op_0_78, op_1_78);
/*
  %45 = tail call i32 (...) @simRand() #3
*/
builder.SetInsertPoint(bb_11);
auto *op_0_79 = func_type_1;
auto *op_1_79 = func_1;
std::vector<Value *> op_2_79;
auto *instr_79 = builder.CreateCall(op_0_79, op_1_79, op_2_79);
/*
  %46 = srem i32 %45, 16777215
*/
builder.SetInsertPoint(bb_11);
auto *op_0_80 = instr_79;
auto *op_1_80 = ConstantInt::get(Ctx, APInt(32, 16777215));
auto *instr_80 = builder.CreateSRem(op_0_80, op_1_80);
/*
  %47 = add nsw i32 %46, -16777216
*/
builder.SetInsertPoint(bb_11);
auto *op_0_81 = instr_80;
auto *op_1_81 = ConstantInt::get(Ctx, APInt(32, 4278190080));
auto *instr_81 = builder.CreateAdd(op_0_81, op_1_81);
dyn_cast<Instruction>(instr_81)->setHasNoSignedWrap();
/*
  %48 = getelementptr inbounds [100 x i32], ptr %4, i64 0, i64 %29
*/
builder.SetInsertPoint(bb_11);
auto *op_0_82 = type_0x00000000016F6D90;
auto *op_1_82 = instr_24;
std::vector<Value *> op_2_82;
auto *op_3_82 = ConstantInt::get(Ctx, APInt(64, 0));
auto *op_4_82 = instr_59;
op_2_82.push_back(op_3_82);
op_2_82.push_back(op_4_82);
auto *instr_82 = builder.CreateGEP(op_0_82, op_1_82, op_2_82);
dyn_cast<Instruction>(instr_82)->setHasNoUnsignedWrap();
/*
  store i32 %47, ptr %48, align 4, !tbaa !2
*/
builder.SetInsertPoint(bb_11);
auto *op_0_83 = instr_81;
auto *op_1_83 = instr_82;
auto *instr_83 = builder.CreateStore(op_0_83, op_1_83);
/*
  br label %49
*/
builder.SetInsertPoint(bb_11);
auto *op_0_84 = bb_12;
auto *instr_84 = builder.CreateBr(op_0_84);
/*
  %50 = phi i32 [ %32, %34 ], [ 0, %37 ]
*/
builder.SetInsertPoint(bb_12);
auto *phi_ty_85 = type_0x00000000016F3528;
auto *phi_85 = builder.CreatePHI(phi_ty_85, 2, "");
auto *instr_85 = phi_85;
/*
  %51 = phi i32 [ %36, %34 ], [ %43, %37 ]
*/
builder.SetInsertPoint(bb_12);
auto *phi_ty_86 = type_0x00000000016F3528;
auto *phi_86 = builder.CreatePHI(phi_ty_86, 2, "");
auto *instr_86 = phi_86;
/*
  %52 = icmp sgt i32 %51, 0
*/
builder.SetInsertPoint(bb_12);
auto op_0_87 = CmpInst::Predicate::ICMP_SGT;
auto *op_1_87 = instr_86;
auto *op_2_87 = ConstantInt::get(Ctx, APInt(32, 0));
auto *instr_87 = builder.CreateICmp(op_0_87, op_1_87, op_2_87);
/*
  br i1 %52, label %53, label %61
*/
builder.SetInsertPoint(bb_12);
auto *op_0_88 = instr_87;
auto *op_1_88 = bb_13;
auto *op_2_88 = bb_15;
auto *instr_88 = builder.CreateCondBr(op_0_88, op_1_88, op_2_88);
/*
  %54 = getelementptr inbounds [100 x i32], ptr %1, i64 0, i64 %29
*/
builder.SetInsertPoint(bb_13);
auto *op_0_89 = type_0x00000000016F6D90;
auto *op_1_89 = instr_21;
std::vector<Value *> op_2_89;
auto *op_3_89 = ConstantInt::get(Ctx, APInt(64, 0));
auto *op_4_89 = instr_59;
op_2_89.push_back(op_3_89);
op_2_89.push_back(op_4_89);
auto *instr_89 = builder.CreateGEP(op_0_89, op_1_89, op_2_89);
dyn_cast<Instruction>(instr_89)->setHasNoUnsignedWrap();
/*
  %55 = getelementptr inbounds [100 x i32], ptr %4, i64 0, i64 %29
*/
builder.SetInsertPoint(bb_13);
auto *op_0_90 = type_0x00000000016F6D90;
auto *op_1_90 = instr_24;
std::vector<Value *> op_2_90;
auto *op_3_90 = ConstantInt::get(Ctx, APInt(64, 0));
auto *op_4_90 = instr_59;
op_2_90.push_back(op_3_90);
op_2_90.push_back(op_4_90);
auto *instr_90 = builder.CreateGEP(op_0_90, op_1_90, op_2_90);
dyn_cast<Instruction>(instr_90)->setHasNoUnsignedWrap();
/*
  %56 = load i32, ptr %54, align 4, !tbaa !2
*/
builder.SetInsertPoint(bb_13);
auto *op_0_91 = type_0x00000000016F3528;
auto *op_1_91 = instr_89;
auto *instr_91 = builder.CreateLoad(op_0_91, op_1_91);
/*
  br label %57
*/
builder.SetInsertPoint(bb_13);
auto *op_0_92 = bb_14;
auto *instr_92 = builder.CreateBr(op_0_92);
/*
  %58 = phi i32 [ 0, %53 ], [ %67, %66 ]
*/
builder.SetInsertPoint(bb_14);
auto *phi_ty_93 = type_0x00000000016F3528;
auto *phi_93 = builder.CreatePHI(phi_ty_93, 2, "");
auto *instr_93 = phi_93;
/*
  %59 = add nsw i32 %56, %58
*/
builder.SetInsertPoint(bb_14);
auto *op_0_94 = instr_91;
auto *op_1_94 = instr_93;
auto *instr_94 = builder.CreateAdd(op_0_94, op_1_94);
dyn_cast<Instruction>(instr_94)->setHasNoSignedWrap();
/*
  %60 = icmp ult i32 %59, 512
*/
builder.SetInsertPoint(bb_14);
auto op_0_95 = CmpInst::Predicate::ICMP_ULT;
auto *op_1_95 = instr_94;
auto *op_2_95 = ConstantInt::get(Ctx, APInt(32, 512));
auto *instr_95 = builder.CreateICmp(op_0_95, op_1_95, op_2_95);
/*
  br label %69
*/
builder.SetInsertPoint(bb_14);
auto *op_0_96 = bb_18;
auto *instr_96 = builder.CreateBr(op_0_96);
/*
  %62 = add nuw nsw i64 %29, 1
*/
builder.SetInsertPoint(bb_15);
auto *op_0_97 = instr_59;
auto *op_1_97 = ConstantInt::get(Ctx, APInt(64, 1));
auto *instr_97 = builder.CreateAdd(op_0_97, op_1_97);
dyn_cast<Instruction>(instr_97)->setHasNoUnsignedWrap();
dyn_cast<Instruction>(instr_97)->setHasNoSignedWrap();
/*
  %63 = icmp eq i64 %62, 100
*/
builder.SetInsertPoint(bb_15);
auto op_0_98 = CmpInst::Predicate::ICMP_EQ;
auto *op_1_98 = instr_97;
auto *op_2_98 = ConstantInt::get(Ctx, APInt(64, 100));
auto *instr_98 = builder.CreateICmp(op_0_98, op_1_98, op_2_98);
/*
  br i1 %63, label %27, label %64
*/
builder.SetInsertPoint(bb_15);
auto *op_0_99 = instr_98;
auto *op_1_99 = bb_8;
auto *op_2_99 = bb_16;
auto *instr_99 = builder.CreateCondBr(op_0_99, op_1_99, op_2_99);
/*
  %65 = phi i64 [ %62, %61 ], [ 0, %27 ]
*/
builder.SetInsertPoint(bb_16);
auto *phi_ty_100 = type_0x00000000016F3540;
auto *phi_100 = builder.CreatePHI(phi_ty_100, 2, "");
auto *instr_100 = phi_100;
/*
  br label %28
*/
builder.SetInsertPoint(bb_16);
auto *op_0_101 = bb_9;
auto *instr_101 = builder.CreateBr(op_0_101);
/*
  %67 = add nuw nsw i32 %58, 1
*/
builder.SetInsertPoint(bb_17);
auto *op_0_102 = instr_93;
auto *op_1_102 = ConstantInt::get(Ctx, APInt(32, 1));
auto *instr_102 = builder.CreateAdd(op_0_102, op_1_102);
dyn_cast<Instruction>(instr_102)->setHasNoUnsignedWrap();
dyn_cast<Instruction>(instr_102)->setHasNoSignedWrap();
/*
  %68 = icmp slt i32 %67, %51
*/
builder.SetInsertPoint(bb_17);
auto op_0_103 = CmpInst::Predicate::ICMP_SLT;
auto *op_1_103 = instr_102;
auto *op_2_103 = instr_86;
auto *instr_103 = builder.CreateICmp(op_0_103, op_1_103, op_2_103);
/*
  br i1 %68, label %57, label %61
*/
builder.SetInsertPoint(bb_17);
auto *op_0_104 = instr_103;
auto *op_1_104 = bb_14;
auto *op_2_104 = bb_15;
auto *instr_104 = builder.CreateCondBr(op_0_104, op_1_104, op_2_104);
/*
  %70 = phi i32 [ 0, %57 ], [ %77, %76 ]
*/
builder.SetInsertPoint(bb_18);
auto *phi_ty_105 = type_0x00000000016F3528;
auto *phi_105 = builder.CreatePHI(phi_ty_105, 2, "");
auto *instr_105 = phi_105;
/*
  %71 = add nsw i32 %50, %70
*/
builder.SetInsertPoint(bb_18);
auto *op_0_106 = instr_85;
auto *op_1_106 = instr_105;
auto *instr_106 = builder.CreateAdd(op_0_106, op_1_106);
dyn_cast<Instruction>(instr_106)->setHasNoSignedWrap();
/*
  %72 = icmp ult i32 %71, 256
*/
builder.SetInsertPoint(bb_18);
auto op_0_107 = CmpInst::Predicate::ICMP_ULT;
auto *op_1_107 = instr_106;
auto *op_2_107 = ConstantInt::get(Ctx, APInt(32, 256));
auto *instr_107 = builder.CreateICmp(op_0_107, op_1_107, op_2_107);
/*
  %73 = and i1 %60, %72
*/
builder.SetInsertPoint(bb_18);
auto *op_0_108 = instr_95;
auto *op_1_108 = instr_107;
auto *instr_108 = builder.CreateAnd(op_0_108, op_1_108);
/*
  br i1 %73, label %74, label %76
*/
builder.SetInsertPoint(bb_18);
auto *op_0_109 = instr_108;
auto *op_1_109 = bb_19;
auto *op_2_109 = bb_20;
auto *instr_109 = builder.CreateCondBr(op_0_109, op_1_109, op_2_109);
/*
  %75 = load i32, ptr %55, align 4, !tbaa !2
*/
builder.SetInsertPoint(bb_19);
auto *op_0_110 = type_0x00000000016F3528;
auto *op_1_110 = instr_90;
auto *instr_110 = builder.CreateLoad(op_0_110, op_1_110);
/*
  tail call void @simPutPixel(i32 %59, i32 %71, i32 %75) #3
*/
builder.SetInsertPoint(bb_19);
auto *op_0_111 = func_type_4;
auto *op_1_111 = func_4;
std::vector<Value *> op_2_111;
auto *op_3_111 = instr_94;
auto *op_4_111 = instr_106;
auto *op_5_111 = instr_110;
op_2_111.push_back(op_3_111);
op_2_111.push_back(op_4_111);
op_2_111.push_back(op_5_111);
auto *instr_111 = builder.CreateCall(op_0_111, op_1_111, op_2_111);
/*
  br label %76
*/
builder.SetInsertPoint(bb_19);
auto *op_0_112 = bb_20;
auto *instr_112 = builder.CreateBr(op_0_112);
/*
  %77 = add nuw nsw i32 %70, 1
*/
builder.SetInsertPoint(bb_20);
auto *op_0_113 = instr_105;
auto *op_1_113 = ConstantInt::get(Ctx, APInt(32, 1));
auto *instr_113 = builder.CreateAdd(op_0_113, op_1_113);
dyn_cast<Instruction>(instr_113)->setHasNoUnsignedWrap();
dyn_cast<Instruction>(instr_113)->setHasNoSignedWrap();
/*
  %78 = icmp eq i32 %77, %51
*/
builder.SetInsertPoint(bb_20);
auto op_0_114 = CmpInst::Predicate::ICMP_EQ;
auto *op_1_114 = instr_113;
auto *op_2_114 = instr_86;
auto *instr_114 = builder.CreateICmp(op_0_114, op_1_114, op_2_114);
/*
  br i1 %78, label %66, label %69
*/
builder.SetInsertPoint(bb_20);
auto *op_0_115 = instr_114;
auto *op_1_115 = bb_17;
auto *op_2_115 = bb_18;
auto *instr_115 = builder.CreateCondBr(op_0_115, op_1_115, op_2_115);
builder.SetInsertPoint(dyn_cast<Instruction>(instr_106));
auto *op_0_105 = ConstantInt::get(Ctx, APInt(32, 0));
phi_105->addIncoming(op_0_105, bb_14);
auto *op_1_105 = instr_113;
phi_105->addIncoming(op_1_105, bb_20);
builder.SetInsertPoint(dyn_cast<Instruction>(instr_101));
auto *op_0_100 = instr_97;
phi_100->addIncoming(op_0_100, bb_15);
auto *op_1_100 = ConstantInt::get(Ctx, APInt(64, 0));
phi_100->addIncoming(op_1_100, bb_8);
builder.SetInsertPoint(dyn_cast<Instruction>(instr_94));
auto *op_0_93 = ConstantInt::get(Ctx, APInt(32, 0));
phi_93->addIncoming(op_0_93, bb_13);
auto *op_1_93 = instr_102;
phi_93->addIncoming(op_1_93, bb_17);
builder.SetInsertPoint(dyn_cast<Instruction>(instr_87));
auto *op_0_86 = instr_67;
phi_86->addIncoming(op_0_86, bb_10);
auto *op_1_86 = instr_76;
phi_86->addIncoming(op_1_86, bb_11);
builder.SetInsertPoint(dyn_cast<Instruction>(instr_86));
auto *op_0_85 = instr_62;
phi_85->addIncoming(op_0_85, bb_10);
auto *op_1_85 = ConstantInt::get(Ctx, APInt(32, 0));
phi_85->addIncoming(op_1_85, bb_11);
builder.SetInsertPoint(dyn_cast<Instruction>(instr_60));
auto *op_0_59 = instr_100;
phi_59->addIncoming(op_0_59, bb_16);
auto *op_1_59 = ConstantInt::get(Ctx, APInt(64, 0));
phi_59->addIncoming(op_1_59, bb_7);
builder.SetInsertPoint(dyn_cast<Instruction>(instr_35));
auto *op_0_34 = ConstantInt::get(Ctx, APInt(64, 0));
phi_34->addIncoming(op_0_34, bb_6);
auto *op_1_34 = instr_53;
phi_34->addIncoming(op_1_34, bb_7);
