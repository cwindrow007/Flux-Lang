#pragma once
#include <string>
#include <vector>
#include <memory>

class ASTNode {
public: 
	virtual ~ASTNode() = default;
};

//Literal Value declaration (EX: 24/3.14)
class LiteralNode : public ASTNode {
public:
	std::string value;
	LiteralNode(std::string val) : value(val) {}
};

//Represent variable (IE let x : int = 5)
class VariableDeclareNode : public ASTNode {
public:
	std::string name;
	std::string type; //Will "AUTO" decide if user leaves blank
	std::unique_ptr<ASTNode> initializer;

	VariableDeclareNode(std::string name, std::string type, std::unique_ptr<ASTNode> init) : name(name), type(type), initializer(std::move(init)) {}
};