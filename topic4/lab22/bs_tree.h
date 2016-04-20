/*
 * Name        : bs_node.h
 * Author      : Eduardo
 * Description : 
 */

#ifndef LAB_H
#define LAB_H

#include <iostream>
using namespace std;

class BSTree
{
  private:
    bool Insert(int, BSTNode*&);
    //creates a new BSTNode, inserts it into the tree, and returns true     
    //if the integer is already in the tree, does not insert, and returns false 
    
    void Clear(BSTNode*&);
    //clears the entire contents of the tree,     
    //freeing all memory associated with all nodes 
    
    string InOrder(BSTNode*);
    //creates a string of the data in all nodes in the tree, in ascending order  
    //separate by spaces (there should be a space after the last output value) 
    
    BSTNode* root_;
    //points to the root node of a binary search tree   unsigned int size_ 
    //holds the number of nodes in the tree 
    
  public:
    BSTree();
    //sets root_ to NULL     
    //sets size_ to 0 
    
    ~BSTree();
    //calls Clear();
    
    bool Insert(int);
    //calls private function Insert(int, root) 
    
    void Clear();
    //calls private function Clear(root) 
    
    unsigned int size() const;
    //Accessor for size_ 
    
    string InOrder();
    //calls private function InOrder(root) 
};

#endif