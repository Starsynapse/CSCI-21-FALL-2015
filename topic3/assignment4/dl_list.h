/*
 * Name        : sl_list.h
 * Author      : Eduardo
 * Description : 
 */

#ifndef SL_LIST_H
#define SL_LIST_H

#include <iostream>
#include <sstream>
#include <string>
#include "dl_node.h"
using namespace std;

class DLList
{
 private:
  DLNode* head_;
  //points to the first node in a singly-linked list unsigned int size_
  
  DLNode* tail_;
	 //points to the last node in a singly-linked list
  
  unsigned int size_;
  //stores the count of the number of nodes in the list
 
  void InsertHead(int new_head);
  //creates a new dynamic DLNode with the contents of the parameter and attaches as the new head of the list
  
  void InsertTail(int new_tail);
  //creates a new dynamic DLNode with the contents of the parameter and attaches as the last node (tail) of the list
  
  void RemoveHead();
  //removes the head node from the list, or does nothing if the list is empty
  
  void RemoveTail();
  //removes the last node (tail) from the list, or does nothing if the list is empty
  
 public:
  DLList();
  //Default constructor
  
  ~DLList();
  //Destructor
  
  void Insert(int new_node);
  //creates a new DLNode with the contents of the parameter and inserts it into the correct position in the list. The list
  //will be sorted with the lowest values in the front (head) and the largest values in the back (tail).
  
  bool RemoveFirstOccurence(int remove_node);
  //remove the first occurence of the supplied parameter found as the data of a node. Return true on successful
  //removal or false if the list is empty or if the value is not found.
  
  int GetHead() const;
  //Returns the contents of the head node (The node head_ is pointing to). Returns 0 if the list is empty
  
  int GetTail() const;
  //Returns the contents of the tail node (The node tail_ is pointing to). Returns 0 if the list is empty
  
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