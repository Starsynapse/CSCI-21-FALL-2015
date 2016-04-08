/*
 * Name        : lab_15.h
 * Author      : Eduardo Zamora
 * Description : Working with nodes
 */
 
#ifndef LAB_H
#define LAB_H

#include <iostream>
using namespace std;
 
class DLNode
{
 private:
  DLNode* next_node_;
  //points to the next node in a singly-linked list
  
  DLNode* previous_node_;
  //points to the previous node in a doubly linked list
  
  int contents_;
  //stores the data contents of a DLNode
  
 public:
  DLNode();
  //default constructor; sets contents_ to 0 and sets contents_ to 0
  
  DLNode(int parameter_assigned_to_contents);
  //sets nest_node to NULL
  
  ~DLNode();
  //does nothing; useless pos
  
  void set_contents(int);
  //mutator for contents
  
  int contents() const;
  //accessor for contents_
  
  void set_next_node(DLNode* nest_node);
  //mutator for nest_node_
  
  void set_previous_node(DLNode* previous_node);
  //mutator for previous_node_
  
  DLNode* next_node() const;
  //accessor for next_node_
};

#endif