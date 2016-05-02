/*
 * Name        : BST_node.cpp
 * Author      : Eduardo
 * Description : 
 */

#include "bst_node.h"

BSTNode::BSTNode()
{
    left_child_ = NULL;
    right_child_ = NULL;
    contents_ = 0;
}

BSTNode::BSTNode(int contents)
{
    left_child_ = NULL;
    right_child_ = NULL; 
    contents_ = contents;
}

BSTNode::~BSTNode()
{
    left_child_ = NULL;
    right_child_ = NULL;
}

void BSTNode::set_contents(int contents)
{
    contents_ = contents;
}

int BSTNode::contents() const
{
    return contents_;
}

int& BSTNode::contents()
{
    //int& contents = contents_;
    return contents_;
}

void BSTNode::set_left_child(BSTNode* left_child)
{
    left_child_ = left_child;
}

void BSTNode::set_right_child(BSTNode* right_child)
{
    right_child_ = right_child;
}

BSTNode* BSTNode::left_child() const
{
    return left_child_;
}

BSTNode*& BSTNode::left_child()
{
    return left_child_;
}

BSTNode* BSTNode::right_child() const
{
    return right_child_;
}

BSTNode*& BSTNode::right_child()
{
    return right_child_;
}