#include "Lexer.h"
#include <cctype>

Lexer::Lexer(const std::string& source) : src(source), pos(0) {}

char Lexer::current_char() {
    if (pos >= src.length()) return '\0';
    return src[pos];
}

void Lexer::advance() { pos++; }

//
std::vector<SNX> Lexer::tokenize() {
    std::vector<SNX> tokens;

    while (current_char() != '\0') {
        // Skip spaces
        if (isspace(current_char())) {
            advance();
            continue;
        }

        // Logic for Words (let, int, float, or variable names)
        if (isalpha(current_char())) {
            tokens.push_back(collect_identifier());
            continue;
        }

        // Logic for Numbers
        if (isdigit(current_char())) {
            tokens.push_back(collect_number());
            continue;
        }

        // Logic for Symbols
        if (current_char() == '=') {
            tokens.push_back({ SyntaxTypes::Equals, "=" });
            advance();
            continue;
        }
        if (current_char() == ':') {
            tokens.push_back({ SyntaxTypes::Colon, ":" });
            advance();
            continue;
        }
        if (current_char() == ';') {
            tokens.push_back({ SyntaxTypes::Semicolon, ";" });
            advance();
            continue;
        }

        advance();
    }

    tokens.push_back({ SyntaxTypes::EOF_SNX, "EOF" });
    return tokens;
}

// Helper to grab things 
SNX Lexer::collect_identifier() {
    std::string s;
    while (isalnum(current_char())) {
        s += current_char();
        advance();
    }

    if (s == "let")   return { SyntaxTypes::Let, s };
    if (s == "int")   return { SyntaxTypes::IntType, s };
    if (s == "float") return { SyntaxTypes::FloatType, s };

    return { SyntaxTypes::Identifier, s };
}

// Helper to grab things like 
SNX Lexer::collect_number() {
    std::string s;
    while (isdigit(current_char())) {
        s += current_char();
        advance();
    }
    return { SyntaxTypes::ILiteral, s };
}