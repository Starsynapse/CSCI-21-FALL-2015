/*
 * Name        : lab_15.cpp
 * Author      : Eduardo Zamora
 * Description : Working with nodes
 */
#include "sl_node.h"

SLNode::SLNode()
{
  next_node_ = NULL;
  contents_ = 0;
}

SLNode::SLNode(int parameter_assigned_to_contents)
{
  contents_ = parameter_assigned_to_contents;
  next_node_ = NULL;
}

SLNode::~SLNode()
{
  //does nothing!
}

void SLNode::set_contents(int contents)
{
  contents_ = contents;
}

int SLNode::contents() const
{
  return contents_;
}

void SLNode::set_next_node(SLNode* next_node)
{
  next_node_ = next_node;
}

SLNode* SLNode::next_node() const
{
  return next_node_;
}