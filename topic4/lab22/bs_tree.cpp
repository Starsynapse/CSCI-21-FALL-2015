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
        //creates the new node to insert
        iterator_node = temp;
        //inserts the new node
        size_++;
        //the size increased from the new node
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
    if(iterator_node != NULL)
    {
        Clear(iterator_node -> left_child());
        Clear(iterator_node -> right_child());
        delete iterator_node;
        iterator_node = NULL;
        size_--;
    }

/*
    if((iterator_node -> left_child()) == NULL && (iterator_node -> right_child()) == NULL)
    {
        delete iterator_node;
        //deletes the node temp is pointing to
        iterator_node = NULL;
        //makes temp point to NULL
        size_--;
        //the size of the tree has decreased 
    }
    
    else if((iterator_node -> left_child()) != NULL)
    {
        Clear(iterator_node -> left_child());
    }
    
    else if((iterator_node -> right_child()) != NULL)
    {
        Clear(iterator_node -> right_child());
    }*/
}

string BSTree::InOrder(BSTNode* iterator_node)
{
    stringstream output;
    if(iterator_node == NULL)
    {
        output << "";
        return output.str();
    }
    
    else
    {
        output << InOrder(iterator_node -> left_child());
        output << iterator_node -> contents() << " ";
        output << InOrder(iterator_node -> right_child());
        return output.str();
    }
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
    return InOrder(root_);
}