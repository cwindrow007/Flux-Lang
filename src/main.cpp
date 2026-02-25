#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include "Lexer.h"
#include "parser.h"
#include "emitter.h"
#include "symbolTable.h"

void printAST(const std::vector<std::unique_ptr<ASTNode>>& nodes) {
    std::cout << "\n--- Flux AST Analysis ---" << std::endl;

    if (nodes.empty()) {
        std::cout << "No valid statements found." << std::endl;
        return;
    }

    for (const auto& node : nodes) {
        auto varDecl = dynamic_cast<VariableDeclareNode*>(node.get());
        if (varDecl) {
            std::cout << "[Variable Declaration]" << std::endl;
            std::cout << "  Name:  " << varDecl->name << std::endl;
            std::cout << "  Type:  " << varDecl->type;

            if (varDecl->type == "AUTO") {
                std::cout << " (Pending Inference)";
            }
            std::cout << std::endl;

            auto init = dynamic_cast<LiteralNode*>(varDecl->initializer.get());
            if (init) {
                std::cout << "  Value: " << init->value << std::endl;
            }
            std::cout << "------------------------" << std::endl;
        }
    }
}

int main(int argc, char* argv[]) {
    if (argc < 2) {
        std::cerr << "Usage: flux <filename.flux>" << std::endl;
        return 1;
    }

    // 1. Read File
    std::ifstream file(argv[1]);
    if (!file.is_open()) {
        std::cerr << "Error: Could not open file " << argv[1] << std::endl;
        return 1;
    }

    std::stringstream buffer;
    buffer << file.rdbuf();
    std::string source = buffer.str();

    // 2. Lexical Analysis
    Lexer lexer(source);
    std::vector<SNX> tokens = lexer.tokenize();

    // 3. Parsing
    Parser parser(tokens);
    std::vector<std::unique_ptr<ASTNode>> program;

    while (true) {
        auto node = parser.parse_statement();
        if (!node) break;
        program.push_back(std::move(node));
    }

    // 4. Output Results & Backend Generation
    std::cout << "--- Flux Compiler v0.1 ---" << std::endl;
    std::cout << "Processing: " << argv[1] << std::endl;

    
    printAST(program);

    // Pass the AST to the Backend
    SymbolTable table;
    Emitter emitter;

    // This will print Assembly to the terminal
    std::cout << "\n--- Generated Assembly ---" << std::endl;
    emitter.generate(program, table);

    return 0;
}