cmake_minimum_required(VERSION 3.20)

project(Compiler LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

include_directories(Source)

add_executable(Compiler
        Source/main.cpp
        Source/components/lexer.h
        Source/components/lexer.cpp
        Source/nodes/node.cpp
        Source/nodes/node.h
        Source/Memory/ptr.cpp
        Source/Memory/ptr.h
        Source/Nodes/Stmts/Stmt.cpp
        Source/Nodes/Stmts/Stmt.h
        Source/Nodes/Exprs/Expr.cpp
        Source/Nodes/Exprs/Expr.h
        Source/Nodes/Exprs/Ops/Op.cpp
        Source/Nodes/Exprs/Ops/Op.h
        Source/Nodes/Exprs/Ops/Enums/OpType.cpp
        Source/Nodes/Exprs/Ops/Enums/OpType.h
        Source/Nodes/Exprs/Values/Value.cpp
        Source/Nodes/Exprs/Values/Value.h
        Source/Nodes/Exprs/Values/Enums/ValueType.cpp
        Source/Nodes/Exprs/Values/Enums/ValueType.h
)
