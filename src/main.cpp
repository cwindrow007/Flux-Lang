#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include "Lexer.h"
/*
* THIS IS THE FLUX LANGUAGE INJECTOR FOR TESTING MADE ON 02-18-2026
*/
int main(int argc, char* argv[]) {

    if (argc < 2) {
        std::cerr << "Error: No input file provided." << std::endl;
        std::cerr << "Usage: flux <filename.flux>" << std::endl;
        return 1;
    }

    std::string filePath = argv[1];
    std::ifstream file(filePath);


    if (!file.is_open()) {
        std::cerr << "Error: Could not open file " << filePath << std::endl;
        return 1;
    }


    std::stringstream buffer;
    buffer << file.rdbuf();
    std::string sourceCode = buffer.str();

    std::cout << "--- Flux Compiler v0.1 ---" << std::endl;
    std::cout << "Reading: " << filePath << "\n" << std::endl;


    Lexer lexer(sourceCode);
    std::vector<SNX> tokens = lexer.tokenize();

    
    for (const auto& token : tokens) {

        std::cout << "Token Found: [Value: " << token.value << "]" << std::endl;
    }

    std::cout << "\nLexical Analysis Complete." << std::endl;

    return 0;
}