#ifndef _INNERCODE_H_
#define _INNERCODE_H_

#include <iostream>
#include "tree.h"
#include "block.h"
#include<string>
extern struct gramTree* root;

using namespace std;

class InnerCode {
private:
	vector<string> codeList;

public:
	int tempNum = 0;
	int varNum = 0;

	InnerCode();
	void addCode(string);
	void printCode();
	string createCodeforVar(string tempname, string op, varNode node1, varNode node2);
	string createCodeforAssign(varNode node1,varNode node2);
	string createCodeforParameter(varNode node);
};

#endif // !_INNERCODE_H_