/*
 * Name        : bs_node.cpp
 * Author      : Eduardo
 * Description : 
 */
 
#include "bs_tree.h" 

bool BSTree::Insert(int contents, BSTNode*& iterator_node)
{
    if(iterator_node == NULL)
    {
        BSTNode *temp = new BSTNode(contents);
        iterator_node = temp;
        size_++;
        return true;
    }
    
    else if(contents < (iterator_node -> contents()))
    //because contents are smaller it will go to the left
    {
        return Insert(contents, iterator_node -> left_child());
    }
    
    else if(contents > (iterator_node -> contents()))
    //because contents are greater it will go to the right
    {
        return Insert(contents, iterator_node -> right_child());
    }
    
    else if((iterator_node -> contents()) == contents)
    {
        return false;
    }
}

void BSTree::Clear(BSTNode*& iterator_node)
{
    
}

string BSTree::InOrder(BSTNode* iterator_node)
{
    return "";
}

BSTree::BSTree()
{
    root_ = NULL;
    size_ = 0;
}

BSTree::~BSTree()
{
    Clear();
}

bool BSTree::Insert(int contents)
{
    return Insert(contents, root_);
}

void BSTree::Clear()
{
    Clear(root_);
}

unsigned int BSTree::size() const
{
    return size_;
}

string BSTree::InOrder()
{
    InOrder(root_);
}