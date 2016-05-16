/*
 * Name        : BST_node.h
 * Author      : Eduardo
 * Description : 
 */

#ifndef LAB_H
#define LAB_H

#include <iostream>
using namespace std;

template<class Type>
class BSTNodeT
{
  private:
    Type* left_child_;
    //poTypes to a left child
    
    Type* right_child_;
    //poTypes to a right child
    
    Type contents_;
    //used to store the data contents of a BSTNodeT
    
  public:
    BSTNodeT();
    //sets left_child to NULL
    //sets right_child to NULL
    //sets contents_ to 0
    
    BSTNodeT(Type contents);
    //sets left_child_ to NULL
    //sets left_child_ to NULL
    //sets contents_ to the value of the parameter
    
    ~BSTNodeT();
    //sets left_child_ to NULL
    //sets right_child_ to NULL

    void set_contents(Type contents);
    //mutator for contents
    
    Type GetContents() const;
    Type& GetContents();
    //accessors for contents_
    
    void SetLeft(BSTNodeT* left_child);
    //mutator for left_child_
    void SetRight(BSTNodeT* right_child);
    //mutator for right_child_
    
    BSTNodeT* GetLeft() const;
    BSTNodeT*& GetLeft();
    //accessors for left_child_
    
    BSTNodeT* GetRight() const;
    BSTNodeT*& GetRight();
    //accessors for right_child_
};

#endif