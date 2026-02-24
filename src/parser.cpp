#include "parser.h"
#include <iostream>

Parser::Parser(const std::vector<SNX>& tokens) : tokens(tokens), pos(0) {}

const SNX& Parser::peek() const { return tokens[pos]; }

SNX Parser::consume() { return tokens[pos++]; }

bool Parser::match(SyntaxTypes type) {
	if (peek().type == type) {
		consume();
		return true;
	}
	return false;
}

std::unique_ptr<ASTNode> Parser::parse_declaration() {
	std::string name = consume().value;
	std::string type = "AUTO";

	if (match(SyntaxTypes::Colon)) {
		type = consume().value;
	}

	if (match(SyntaxTypes::Equals)) {
		std::string val = consume().value;
		auto init = std::make_unique<LiteralNode>(val);

		match(SyntaxTypes::Semicolon);

		return std::make_unique<VariableDeclareNode>(name, type, std::move(init));
	}
	return nullptr;
}

std::unique_ptr<ASTNode> Parser::parse_statement() {
	if (pos >= tokens.size() || peek().type == SyntaxTypes::EOF_SNX) {
		return nullptr;
	}

	if (peek().type == SyntaxTypes::Let) {
		consume();
		return parse_declaration();
	}
	return nullptr;
}