#pragma once
#include "AST.h"
#include "SymbolTable.h"
#include <vector>
#include <iostream>

class Emitter {
public:
    void generate(const std::vector<std::unique_ptr<ASTNode>>& program, SymbolTable& table) {
        
        std::cout << ".intel_syntax noprefix\n";
        std::cout << ".globl main\n\nmain:\n";

       
        std::cout << "  push rbp\n";
        std::cout << "  mov rbp, rsp\n";
        std::cout << "  sub rsp, 32\n"; 

        
        for (const auto& node : program) {
            emitNode(node.get(), table);
        }

       
        std::cout << "  leave\n";
        std::cout << "  ret\n";
    }

private:
    void emitNode(ASTNode* node, SymbolTable& table) {
        auto var = dynamic_cast<VariableDeclareNode*>(node);
        if (var) {
            table.define(var->name, var->type);
            int offset = table.getOffset(var->name);

            auto init = dynamic_cast<LiteralNode*>(var->initializer.get());
            if (init) {
                // Generate: mov DWORD PTR [rbp-4], 5
                std::cout << "  mov DWORD PTR [rbp" << offset << "], " << init->value << "\n";
            }
        }
    }
};