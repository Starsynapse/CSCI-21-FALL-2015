/*
 * Name        : sl_list.h
 * Author      : Eduardo
 * Description : 
 */

#ifndef SL_LIST_H
#define SL_LIST_H

#include <iostream>
#include <sstream>
#include "sl_node.h"
using namespace std;

class SLList
{
 private:
  SLNode* head_;
  //points to the first node in a singly-linked list unsigned int size_
  
  SLNode* tail_;
	 //points to the last node in a singly-linked list
  
  unsigned int size_;
  //stores the count of the number of nodes in the list
 
 public:
  SLList();
  //Default constructor
  
  ~SLList();
  //Destructor
  
  void InsertHead(int new_head);
  //creates a new dynamic SLNode with the contents of the parameter and attaches as the new head of the list
  
  void RemoveHead();
  //removes the head node from the list, or does nothing if the list is empty
  
  void Clear();
  //clears the entire contents of the list, freeing all memory associated with all nodes
  
  unsigned int size() const;
  //accessor for size_
  
  string ToString() const;
  //returns a string representation of the contents of all nodes in the list, in the format
  //NUM1, NUM2, ..., LASTNUM
  //returns the empty string on an empty list (i.e. returns "")
  
};

#endif