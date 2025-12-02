#include <vector>
#include <iostream>
#include "asTree.hpp"

using namespace std;



typedef struct Scope
{
	int scopenumber;
	vector<int>index;
	vector<vector<tuple<string,string>>>hashmap;
	
} Scope;

typedef struct ScopeChain
{
	int length;
	vector<Scope*> Scopes;
}ScopeChain;

class SymbolTable
{

public: 
void SymbolTableSelector(MasterNode* mastNode,BlockNode* currentNode);

void hash(BlockNode* currentNode, Scope* currentSymbolTable);

};


