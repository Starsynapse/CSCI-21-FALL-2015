/*
 * Name        : lab_15.cpp
 * Author      : Eduardo Zamora
 * Description : Working with nodes
 */
#include "dl_node.h"

DLNode::DLNode()
{
  next_node_ = NULL;
  previous_node_ = NULL;
  contents_ = 0;
}

DLNode::DLNode(int parameter_assigned_to_contents)
//creates a new node not connected to the rest of the list
{
  contents_ = parameter_assigned_to_contents;
  next_node_ = NULL;
  previous_node_ = NULL;
}

DLNode::~DLNode()
{
  //does nothing!
}

void DLNode::set_contents(int contents)
//sets the contents of the node
{
  contents_ = contents;
}

int DLNode::contents() const
//returns the contents of the node
{
  return contents_;
}

void DLNode::set_next_node(DLNode* next_node)
//saves the node point to the next node
{
  next_node_ = next_node;
}

void DLNode::set_previous_node(DLNode* previous_node)
{
  previous_node_ = previous_node;
}

DLNode* DLNode::next_node() const
{
  return next_node_;
}

DLNode* DLNode::previous_node() const
{
  return previous_node_;
}