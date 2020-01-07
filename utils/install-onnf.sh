export LLVM_PROJ_SRC=$(pwd)/llvm-project/
export LLVM_PROJ_BUILD=$(pwd)/llvm-project/build

mkdir ONNF/build && cd ONNF/build
cmake ..
cmake --build . --target onnf check-mlir-lit