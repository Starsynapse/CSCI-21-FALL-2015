/*
 * Name        : bs_node.h
 * Author      : Eduardo
 * Description : 
 */

#ifndef LAB_H2
#define LAB_H2

#include <iostream>
#include <sstream>
#include "bst_node.h"
using namespace std;

class BSTree
{
  private:
    bool Insert(int contents, BSTNode*& iterator_node);
    //creates a new BSTNode, inserts it into the tree, and returns true     
    //if the integer is already in the tree, does not insert, and returns false 
    
    void Clear(BSTNode*& iterator_node);
    //clears the entire contents of the tree,     
    //freeing all memory associated with all nodes 
    
    string InOrder(BSTNode* iterator_node);
    //creates a string of the data in all nodes in the tree, in ascending order  
    //separate by spaces (there should be a space after the last output value) 
    
    bool Remove(int contents, BSTNode*& iterator_node);
    //traverses the tree and removes the node containing the target      integer if present and returns true 
    //return false if target integer is not in tree (or the tree is empty)
    
    int FindMin(BSTNode* iterator_node) const;
    //returns the value of the smallest node in the tree 
    //helper function for private Remove() 
    
    BSTNode* root_;
    //points to the root node of a binary search tree   
    
    unsigned int size_;
    //holds the number of nodes in the tree 
    
  public:
    BSTree();
    //sets root_ to NULL     
    //sets size_ to 0 
    
    ~BSTree();
    //calls Clear();
    
    bool Insert(int);
    //calls private function Insert(int, root) 
    
    bool Remove(int);
    //returns value returned by private function Remove(int, root)
    
    int FindMin();
    //if the tree is empty return 0 
    //otherwise return the value returned by private function 
    //FindMin(root) 
    
    void Clear();
    //calls private function Clear(root) 
    
    unsigned int size() const;
    //Accessor for size_ 
    
    string InOrder();
    //calls private function InOrder(root) 
};

#endif