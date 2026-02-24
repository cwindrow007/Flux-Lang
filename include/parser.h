#pragma once
#include "token.h"
#include "AST.h"
#include <vector>
#include <memory>

class Parser {
public:
	Parser(const std::vector<SNX>& tokens);

	std::vector<std::unique_ptr<ASTNode>> parse_program();
	std::unique_ptr<ASTNode> parse_statement();

private:

	std::vector<SNX> tokens;
	size_t pos = 0;

	//Helper Functions
	const SNX& peek() const; //Inspects current Token
	SNX consume(); //Grabs token and moves forward
	bool match(SyntaxTypes type); //Matches current token to whats expected

	std::unique_ptr<ASTNode> parse_declaration();
};