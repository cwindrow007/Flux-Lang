#pragma once
#include "token.h"
#include <vector>
#include <string>

class Lexer {
public:
	Lexer(const std::string& source);
	std::vector<SNX> tokenize();

private:
	std::string src;
	size_t pos;

	char current_char();
	void advance();

	SNX collect_identifier();
	SNX collect_number();
};