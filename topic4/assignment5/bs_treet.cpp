/*
 * Name        : bs_node.cpp
 * Author      : Eduardo
 * Description : 
 */
 
#include "bs_treet.h" 

bool BSTreeT<Type2>::Insert(Type contents, Type*& iterator_node)
{
    if(iterator_node == NULL)
    {
        Type *temp = new Type(contents);
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

void BSTreeT<Type2>::Clear(Type*& iterator_node)
{
    if(iterator_node != NULL)
    {
        Clear(iterator_node -> left_child());
        Clear(iterator_node -> right_child());
        delete iterator_node;
        iterator_node = NULL;
        size_--;
    }
}

string BSTreeT<Type2>::InOrder(Type* iterator_node)
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

string BSTreeT<Type2>::ReverseOrder(Type* iterator_node)
{
    stringstream output;
    if(iterator_node == NULL)
    {
        output << "";
        return output.str();
    }
    
    else
    {
        output << InOrder(iterator_node -> right_child());
        output << iterator_node -> contents() << " ";
        output << InOrder(iterator_node -> left_child());
        return output.str();
    }
}

bool BSTreeT<Type2>::Remove(Type contents, Type*& iterator_node)
{
    if(iterator_node == NULL)
    {
        return false;
    }
    
    else if(contents > (iterator_node -> contents()))
    //because contents are greater it will go to the right
    {
        return Remove(contents, iterator_node -> right_child());
    }
    
    else if(contents < (iterator_node -> contents()))
    //because contents are smaller it will go to the left
    {
        return Remove(contents, iterator_node -> left_child());
    }
    
    else if((iterator_node -> contents()) == contents)
    {

        iterator_node -> set_contents(FindMin(iterator_node -> right_child()));
        //returns the next smallest number, greater than the number we are deleting, in the tree
        
        Type min = FindMin(iterator_node -> right_child());
        
        if((iterator_node -> contents()) == 0 && (iterator_node -> right_child()) == NULL)
        {
            Type *temp = new Type();
            temp = iterator_node;
            iterator_node = iterator_node -> left_child();
            temp = NULL;
            size_--;
        }
        
        else if((iterator_node -> contents()) == 0)
        {
            iterator_node = NULL;
            size_--;
        }
        
        else if(min != 0)
        {
            Remove(min, iterator_node -> right_child());
        }
        
        return true;
    }
}

Type2 BSTreeT<Type2>::FindMin(Type* iterator_node) const
{
    if(iterator_node == NULL)
    {
        return 0;
    }
    
    else if((iterator_node -> left_child()) == NULL)
    {
        return iterator_node -> contents();
    }
    
    else
    //because left is smaller and we only want to go left
    {
        return FindMin(iterator_node -> left_child());
    }
}

Type2 BSTreeT<Type2>::Exists(Type2 contents, Type2* iterator_node)
{
    //
}

Type2 BSTreeT<Type2>::Get(Type2 contents, Type2* iterator_node)///////////////////////////////////////////
{
    if(iterator_node == NULL)
    {
        return NULL;
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
        return iterator_node;
    }
}

BSTreeT<Type2>::BSTree()
{
    root_ = NULL;
    size_ = 0;
}

BSTreeT<Type2>::~BSTree()
{
    Clear();
}

bool BSTreeT<Type2>::Insert(Type contents)
{
    return Insert(contents, root_);
}

bool BSTreeT<Type2>::Remove(Type contents)
{
    return Remove(contents, root_);
}

Type BSTreeT<Type2>::FindMin()
{
    return FindMin(root_);
}

void BSTreeT<Type2>::Clear()
{
    Clear(root_);
}

unsigned Type BSTreeT<Type2>::GetSize() const
{
    return size_;
}

string BSTreeT<Type2>::ToStringForwards()
{
    return InOrder(root_);
}

string BSTreeT<Type2>::ToStringBackwards()
{
    return ReverseOrder(root_);
}

Type2 BSTreeT<Type2>::Exists(Type2 contents)
{
    return Exists(contents, root_);
}
    
Type2 BSTreeT<Type2>::Get(Type2 contents)
{
    return Get(contents, root_);
}