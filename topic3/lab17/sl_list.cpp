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