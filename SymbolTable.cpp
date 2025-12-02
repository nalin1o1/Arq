#include "asTree.hpp"
#include "Error.hpp"
#include "SymbolTable.hpp"
#include <iostream>
#include <vector>

using namespace std;
ScopeChain SChain;


void SymbolTable::SymbolTableSelector(MasterNode* mastNode, BlockNode* currentNode)
{
	//Selecting/Creating the Symbol Table.
	
	if(mastNode != NULL)
	{
	
		int size = mastNode->subSegments.size();
		for(int i = 0; i < size;i++)
		{
			BlockNode* currentNode = mastNode->subSegments[i];	//BlockNode (Scope specific)
			if(currentNode->id > SChain.length)
			{	
				Scope* newScope = new Scope;
				SChain.Scopes.push_back(newScope);
				SChain.length +=1;
				newScope->scopenumber = currentNode->id;
				SymbolTable::hash(currentNode,newScope);	
			}
			else
			{
				for(int j = 0; j < SChain.length;j++)
				{
					Scope* currentScope;
					currentScope = SChain.Scopes[j];
					if(currentScope->scopenumber == currentNode->id)
					{
						SymbolTable::hash(currentNode,currentScope);
					}
				}	
			}
		}
	
	}
	
	
}


void SymbolTable::hash(BlockNode* currentNode, Scope* currentSymbolTable)
{
	

	
	
	for(int j = 0; j < )
	
	//Symbol Table Operations.
	int ind = -1;
	for(int i = 0;i < index.size();i++)
	{
	if(index[i] == key)
	{
		ind = i;
		break;
	}
	}
	if(ind == -1)
	{
		ind = index.size();
		vector<string> quant;
		index.push_back(key);
		hashmap.push_back(quant);
		hashmap[ind].push_back({type,value});
	}
	else
	{
		hashmap[ind].push_back({type,value});
	}
	
	}
	
}






