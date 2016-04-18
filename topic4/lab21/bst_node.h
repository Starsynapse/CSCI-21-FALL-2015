/*
 * Name        : bts_node.h
 * Author      : Eduardo
 * Description : 
 */

#ifndef LAB_H
#define LAB_H

class BSTNode
{
  private:
    BTSNode* left_child_;
    //points to a left child
    
    BTSNode* right_child_;
    //points to a right child
    
    int contents_;
    //used to store the data contents of a BSTNode
    
  public:
    BTSNode();
    //sets left_child to NULL
    //sets right_child to NULL
    //sets contents_ to 0
    
    BTSNode(int contents);
    //sets left_child_ to NULL
    //sets left_child_ to NULL
    //sets contents_ to the value of the parameter
    
    ~BTSNode();
    //sets left_child_ to NULL
    //sets right_child_ to NULL

    void set_contents(int);
    //
};

#endif