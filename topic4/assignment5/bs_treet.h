/*
 * Name        : bs_node.h
 * Author      : Eduardo
 * Description : 
 */

#ifndef LAB_H2
#define LAB_H2

#include <iostream>
#include <sstream>
#include "bst_nodet.h"
using namespace std;

template<class Type2>
class BSTreeT
{
  private:
    bool Insert(Type2 contents, Type2*& iterator_node);
    //creates a new BSTNodeT, inserts it into the tree, and returns true     
    //if the integer is already in the tree, does not insert, and returns false 
    
    void Clear(Type2*& iterator_node);
    //clears the entire contents of the tree,     
    //freeing all memory associated with all nodes 
    
    string InOrder(Type2* iterator_node);
    //creates a string of the data in all nodes in the tree, in ascending order  
    //separate by spaces (there should be a space after the last output value) 
    
    string ReverseOrder(Type2* iterator_node);
    
    bool Remove(Type2 contents, Type2*& iterator_node);
    //traverses the tree and removes the node containing the target      integer if present and returns true 
    //return false if target integer is not in tree (or the tree is empty)
    
    Type2 FindMin(Type2* iterator_node) const;
    //returns the value of the smallest node in the tree 
    //helper function for private Remove() 
    
    Type2 Exists(Type2 contents, Type2* iterator_node);
    
    Type2 Get(Type2 contents, Type2* iterator_node);
    
    Type2* root_;
    //points to the root node of a binary search tree   
    
    unsigned int size_;
    //holds the number of nodes in the tree 
    
  public:
    BSTreeT();
    //sets root_ to NULL     
    //sets size_ to 0 
    
    ~BSTreeT();
    //calls Clear();
    
    bool Insert(Type2);
    //calls private function Insert(int, root) 
    
    bool Remove(Type2);
    //returns value returned by private function Remove(int, root)
    
    Type2 FindMin();
    //if the tree is empty return 0 
    //otherwise return the value returned by private function 
    //FindMin(root) 
    
    void Clear();
    //calls private function Clear(root) 
    
    unsigned int GetSize() const;
    //Accessor for size_ 
    
    string ToStringForwards();
    //calls private function InOrder(root) 
    
    string ToStringBackwards();
    
    Type2 Exists(Type2 contents);
    
    Type2 Get(Type2 contents);
};

#endif