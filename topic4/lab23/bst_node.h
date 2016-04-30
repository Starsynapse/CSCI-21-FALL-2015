/*
 * Name        : BST_node.h
 * Author      : Eduardo
 * Description : 
 */

#ifndef LAB_H
#define LAB_H

#include <iostream>
using namespace std;

class BSTNode
{
  private:
    BSTNode* left_child_;
    //points to a left child
    
    BSTNode* right_child_;
    //points to a right child
    
    int contents_;
    //used to store the data contents of a BSTNode
    
  public:
    BSTNode();
    //sets left_child to NULL
    //sets right_child to NULL
    //sets contents_ to 0
    
    BSTNode(int contents);
    //sets left_child_ to NULL
    //sets left_child_ to NULL
    //sets contents_ to the value of the parameter
    
    ~BSTNode();
    //sets left_child_ to NULL
    //sets right_child_ to NULL

    void set_contents(int contents);
    //mutator for contents
    
    int contents() const;
    int& contents();
    //accessors for contents_
    
    void set_left_child(BSTNode* left_child);
    //mutator for left_child_
    void set_right_child(BSTNode* right_child);
    //mutator for right_child_
    
    BSTNode* left_child() const;
    BSTNode*& left_child();
    //accessors for left_child_
    
    BSTNode* right_child() const;
    BSTNode*& right_child();
    //accessors for right_child_
};

#endif