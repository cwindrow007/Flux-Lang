#pragma once
#include <string>
#include <unordered_map>

struct Symbol {
    std::string name;
    std::string type;
    int stackOffset; 
};

class SymbolTable {
public:
    
    void define(const std::string& name, const std::string& type) {
        currentOffset -= 4;
        symbols[name] = { name, type, currentOffset };
    }

    int getOffset(const std::string& name) {
        return symbols[name].stackOffset;
    }

private:
    std::unordered_map<std::string, Symbol> symbols;
    int currentOffset = 0; 
};