/*
 * Name        : sl_list.cpp
 * Author      : Eduardo
 * Description : 
 */

#include "sl_list.h"

SLList::SLList()
{
    head_ = NULL;
    tail_ = NULL;
    size_ = 0;
}

SLList::~SLList()
{
    Clear();
}

void SLList::Insert(int new_node)
{
    SLNode *temp = new SLNode(new_node);
    //creates temp node and makes it point at the new_node information
    SLNode *iterator = head_;
    //creates an iterator and makes it point to head_
    SLNode *iterator2 = NULL;
    //second iterator to trail behind the first iterator
    unsigned int original_size = size_;
    
    if(iterator == NULL)
    //checks if the list is empty
    {
        InsertHead(new_node);
    }
    
    while(iterator != NULL && original_size == size_)
    {
        if((iterator -> contents()) >= (temp -> contents()))
        //checks if the iterator is larger than or equal to the new node
        {
            if(iterator2 == NULL)
            {
                InsertHead(new_node);
            }
            
            else
            {
                iterator2 -> set_next_node(temp);
                temp -> set_next_node(iterator);
                size_++;
            }
        }
        
        else if((iterator -> contents()) < (temp -> contents()))
        //checks if the iterator is smaller than the new node
        {
            if((iterator -> next_node()) == NULL)
            {
                InsertTail(new_node);
            }
            
            iterator2 = iterator;
            iterator = iterator -> next_node();
        }
    }
}

bool SLList::RemoveFirstOccurence(int remove_node)
{
    SLNode *temp = NULL;
    //creates a temp pointer to hold the node to be deleted
    SLNode *iterator = head_;
    //creates an iterator and makes it point to head_
    SLNode *iterator2 = NULL;
    //second iterator to trail behind the first iterator
    
    while(iterator != NULL)
    {
        if((iterator -> contents()) == remove_node)
        {
            if(iterator2 == NULL)
            {
                RemoveHead();
                return true;
            }
            
            else
            {
                if((iterator -> next_node()) == NULL)
                {
                    RemoveTail();
                    return true;
                }
                
                else
                {
                    temp = iterator;
                    //points to the node that will be deleted
                    iterator = iterator -> next_node();
                    //iterator points to the node after the one to be deleted
                    iterator2 -> set_next_node(iterator);
                    //iterator2's node sets the next node to iterator's node, skipping over the soon to be deleted node
                    delete temp;
                    //deletes the node
                    temp = NULL;
                    //sets temp to NULL
                    size_--;
                    //size of linked list decreases
                    return true;
                }
            }
        }
        
        else
        {
            iterator2 = iterator;
            iterator = iterator -> next_node();
        }
    }
    
    return false;
}

void SLList::InsertHead(int new_head)
{
    SLNode *temp = new SLNode(new_head);
    //creates temp node and makes it equal to the new_head information
    temp -> set_next_node(head_);
    //temp points to the next node "head_"
    head_ = temp;
    //head points to temp
    size_++;
    //increments the size of the list
    
    if(tail_ == NULL)
    {
        tail_ = head_;
        //sets tail equal to head_
    }
}

void SLList::InsertTail(int new_tail)//this or some function before it is broken
{
    if(tail_ != NULL)
    {
        SLNode *temp = new SLNode(new_tail);
        //creates temp node and makes it equal to the new_tail information
        tail_ -> set_next_node(temp);//this breaks it
        //temp -> set_next_node(tail_);//this works but doesn't pass it
        //makes the tail node point to the new node
        tail_ = temp;
        //the new node at the end of the list is saved as the new tail_
        tail_ -> set_next_node(NULL);
        //makes the tail point at null because that is what the tail does
        size_++;
        //the newly inserted tail increases the size of the list
    }
    
    else if(tail_ == NULL)
    {
        SLNode *temp = new SLNode(new_tail);
        //creates temp node and makes it equal to the new_tail information
        tail_ = temp;
        //makes tail_ point to the node temp is pointing to
        tail_ -> set_next_node(NULL);
        //makes the tail point at null because that is what the tail does
        head_ = tail_;
        //sets head equal to tail
        size_++;
        //the added tail increases the node count
    }
}

void SLList::RemoveHead()
{
    if(head_ != NULL)
    {
        SLNode *temp = head_;
        //creates temp node and makes it equal to the head_
        head_ = head_ -> next_node();
        //sets head_ equal to the next node
        delete temp;
        //delete what temp is pointing to
        temp = NULL;
        //makes temp point to NULL
        size_--;
        //decrements the size of the list
    }
    
    if(head_ == NULL)
    {
        tail_ = NULL;
    }
}

void SLList::RemoveTail()
{
    if (head_ != NULL)
    //checks if the list is null
    {
        if(head_ -> next_node() == NULL)
        //checks if head is the only node
        {
            RemoveHead();
        }
        
        else
        {
            SLNode *temp = NULL;
            //creates temp node and makes it equal to NULL
            SLNode *iterator = head_;
            //creates an iterator and makes it equal to head_
            
            while((iterator -> next_node()) != NULL)
            //makes sure iterator stops at tail_
            {
                temp = iterator;
                //temp is set to iterator before it moves on to the next node
                iterator = iterator -> next_node();
                //iterator moves on and points to the next node in the list
            }
            //iterator should now point at tail_ and temp points to the node before the tail_ node
            
            temp -> set_next_node(NULL);
            //temp is set to point at NULL
            tail_ = temp;
            //tail_ points at temp node
            delete iterator;
            //iterator node is deleted
            iterator = NULL;
            //iterator points at null
            size_--;
            //the size of the list decreases
        }
    }
}

int SLList::GetHead() const
{
    if(head_ == NULL)
    {
        return 0;
    }
    
    else
    {
        return (head_ -> contents());
    }
}

int SLList::GetTail() const
{
    if(tail_ == NULL)
    {
        return 0;
    }
    
    else
    {
        return (tail_ -> contents());
    }
}

void SLList::Clear()
{
    while(head_ != NULL)
    {
        RemoveHead();
    }
    
    tail_ = NULL;
}

unsigned int SLList::size() const
{
    return size_;
}

string SLList::ToString() const
{
    stringstream ss;
    ss.str();
    string to_string = "";
    SLNode *iterator = head_;
    //creates iterator node and makes it equal to the head_
    
    if(head_ == NULL)
    {
        return to_string;
    }
    
    while(iterator != NULL)
    {
        ss << iterator -> contents();
        //adds the contents of the current node to the string
        if((iterator -> next_node()) != NULL)
        {
            ss << ", ";
        }
        
        iterator = iterator -> next_node();
        //sets head_ equal to the next node
    }
    
    to_string = ss.str();
    return to_string;
}