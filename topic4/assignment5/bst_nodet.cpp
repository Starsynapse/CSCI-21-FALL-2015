/*
 * Name        : BST_node.cpp
 * Author      : Eduardo
 * Description : 
 */

#include "bst_nodet.h"

BSTNodeT<Type>::BSTNodeT()
{
    left_child_ = NULL;
    right_child_ = NULL;
    contents_ = 0;
}

BSTNodeT<Type>::BSTNodeT(Type contents)
{
    left_child_ = NULL;
    right_child_ = NULL; 
    contents_ = contents;
}

BSTNodeT<Type>::~BSTNodeT()
{
    left_child_ = NULL;
    right_child_ = NULL;
}

void BSTNodeT<Type>::set_contents(Type contents)
{
    contents_ = contents;
}

Type BSTNodeT<Type>::GetContents() const
{
    return contents_;
}

Type& BSTNodeT<Type>::GetContents()
{
    //Type& contents = contents_;
    return contents_;
}

void BSTNodeT<Type>::SetLeft(BSTNodeT* left_child)
{
    left_child_ = left_child;
}

void BSTNodeT<Type>::SetRight(BSTNodeT* right_child)
{
    right_child_ = right_child;
}

Type* BSTNodeT<Type>::GetLeft() const
{
    return left_child_;
}

Type*& BSTNodeT<Type>::GetLeft()
{
    return left_child_;
}

Type* BSTNodeT<Type>::GetRight() const
{
    return right_child_;
}

Type*& BSTNodeT<Type>::GetRight()
{
    return right_child_;
}