#include <iostream>
#include <vector>
#include "ast.hpp"
#include "input.hpp"
#include "SymbolTable.hpp"
using namespace std;

//Class Objects:
input object;
ASTCreation obj;


int main()
{
	//######################################################################################
	vector<string>output = object.accept();
	ASTCreation obj;
	int streampointer = 0;
	
	BlockNode* FirstNode = CreateBlockNode(0,NULL,NULL);
	MasterNode* mastNode = CreateMasterNode();
	mastNode->subSegments.pb(FirstNode);
	obj.block(0,FirstNode,output,&streampointer);
	//AST can be referenced using mast node
	//######################################################################################
	
	

}
