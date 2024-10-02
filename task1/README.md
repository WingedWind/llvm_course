# Task 1: Simple graphical app
## Build and Run
Build requires:
```
$> sudo apt install libsdl2-dev
$> sudo apt install clang
$> sudo apt install cmake
```
Simple run:
```
$> mkdir build && cd build/
$> cmake ..
$> make
$> ./app
```
## optimized IR

In folder `LLVM_IR/` you can find `app.ll` - LLVM IR dumped for `app.c` file with `-O2` level of optimizations.
