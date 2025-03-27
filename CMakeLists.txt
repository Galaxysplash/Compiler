cmake_minimum_required(VERSION 3.15)
project(Compiler)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Set LLVM directory
set(LLVM_DIR "C:/Program Files/LLVM/lib/cmake/llvm")

# Include LLVM directories
include_directories(${LLVM_INCLUDE_DIRS})
add_definitions(${LLVM_DEFINITIONS})

message(STATUS "Found LLVM ${LLVM_PACKAGE_VERSION}")
message(STATUS "Using LLVMConfig.cmake in: ${LLVM_DIR}")

add_executable(Compiler Source/Main.cpp
        Source/Token/TokenType.h
        Source/Token/Token.cpp
        Source/Token/Token.h
        Source/Error/Error.cpp
        Source/Error/Error.h
        Source/Components/Lexer/Lexer.cpp
        Source/Components/Lexer/Lexer.h
        Source/Components/Filesystem/Filesystem.cpp
        Source/Components/Filesystem/Filesystem.h
        Source/Components/ExecutionEngine/ExecutionEngine.cpp
        Source/Components/ExecutionEngine/ExecutionEngine.h
        Source/Components/Parser/Parser.cpp
        Source/Components/Parser/Parser.h
        Source/Components/Memory/Buffersize.h)


# Link against LLVM libraries
target_link_libraries(Compiler ${llvm_libs})