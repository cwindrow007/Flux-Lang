#pragma once

#include <string>

enum class SyntaxTypes {
	
	//Allows the compiler to determine its type
	Let,

	//Type identifiers (Nums which are handled as strings)
	IntType, //Character Integer handled as number
	FloatType, //A floating Character which is stored as a number

	//User defined names (X or N)
	Identifier,

	//DataTypes
	ILiteral, //integer
	FLiteral, //float


	//Operators
	Equals,
	Colon,
	Semicolon,
	Plus,

	//META

	EOF_SNX,
	Unknown
};
struct SNX {
	SyntaxTypes type;
	std::string value;
};
