cmake_minimum_required(VERSION 3.22)
project(langgg)

set(CMAKE_CXX_STANDARD 14)

add_executable(langgg main.cpp Lexer/Lexer.cpp Lexer/Lexer.h Token/Token.cpp Token/Token.h Parser/Parser.cpp Parser/Parser.h AST/ExpressionNode/ExpressionNode.cpp AST/ExpressionNode/ExpressionNode.h AST/StatementsNode/StatementsNode.cpp AST/StatementsNode/StatementsNode.h AST/VariableNode/VariableNode.cpp AST/VariableNode/VariableNode.h AST/NumberNode/NumberNode.cpp AST/NumberNode/NumberNode.h AST/BinOperationNode/BinOperationNode.cpp AST/BinOperationNode/BinOperationNode.h AST/PrintConsoleNode/PrintConsoleNode.cpp AST/PrintConsoleNode/PrintConsoleNode.h BaseClasses/RootClass/RootClass.cpp BaseClasses/RootClass/RootClass.h BaseClasses/IntClass/IntClass.cpp BaseClasses/IntClass/IntClass.h AST/IfNode/IfNode.cpp AST/IfNode/IfNode.h AST/PredicateNode/PredicateNode.cpp AST/PredicateNode/PredicateNode.h AST/BlockNode/BlockNode.cpp AST/BlockNode/BlockNode.h AST/ElseNode/ElseNode.cpp AST/ElseNode/ElseNode.h AST/WhileNode/While_Node.cpp AST/WhileNode/While_Node.h Token/Token.cpp Token/Token.h)
