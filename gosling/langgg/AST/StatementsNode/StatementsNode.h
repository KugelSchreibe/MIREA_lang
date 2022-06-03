//
// Created by sergei on 28.05.22.
//

#ifndef STATEMENTSNODE_H
#define STATEMENTSNODE_H

#include "../ExpressionNode/ExpressionNode.h"
#include "../VariableNode/VariableNode.h"
#include "../NumberNode/NumberNode.h"
#include "../BinOperationNode/BinOperationNode.h"
#include "../PrintConsoleNode/PrintConsoleNode.h"
#include "../IfNode/IfNode.h"
#include "../WhileNode/While_Node.h"
#include <string>
#include <vector>

class StatementsNode : public ExpressionNode{
private:
	std::vector<ExpressionNode*> code_strings;
public:
	void addNode(ExpressionNode* node);
	ExpressionNode* get(int i);
	int size();
	~StatementsNode();
};

#endif
