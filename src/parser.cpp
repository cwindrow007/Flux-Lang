#include "parser.h"
#include <iostream>

Parser::Parser(const std::vector<SNX>& token) : tokens(tokens), pos(0) {}

const SNX& Parser::peek() const { return tokens[pos]; }

SNX Parser::consume() { return tokens[pos++]; }

bool Parser::match(SyntaxTypes type) {
	if (peek().type == type) {
		consume();
		return true;
	}
	return false;
}