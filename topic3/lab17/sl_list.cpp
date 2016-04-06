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
        while((tail_ -> next_node()) != NULL)
        //while tail's node is not pointing to NULL it will go down the list until it does point to NULL
        {
            tail_ = tail_ -> next_node();
        }
    }
}

void SLList::InsertTail(int new_tail)
{
    SLNode *temp = new SLNode(new_tail);
    //creates temp node and makes it equal to the new_tail information
    /*
    tail_ = head_;
    while(tail_ != NULL)
    {
        tail_ = tail_ -> next_node();
    }
    */
    tail_ -> set_next_node(temp);
    //makes the tail node point to the new node
    tail_ = temp;
    //the new node at the end of the list is saved as the new tail_
    //tail_ = NULL;
    //makes the tail point at null because that is what the tail does
    size_++;
    //the newly inserted tail increases the size of the list
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
    
    else if(head_ == NULL)
    {
        tail_ = NULL;
    }
}

void SLList::RemoveTail()
{
    if(head_ == NULL)
    {
        //nope
    }
    
    else if(head_ != NULL)
    {
        SLNode *temp = head_;
        //creates temp node and makes it equal to the head_
        while((temp -> next_node()) != tail_)
        {
            temp = temp -> next_node();
        }
        
        tail_ = temp;
        //make tail equal to the temp which should be the node before the original tail
        temp = temp -> next_node();
        //makes the temp the original tail
        tail_ == NULL;//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
        //tail points to null because that is what a tail should do
        delete temp;
        //deletes the node temp is pointing at
        temp = NULL;
        //makes temp point to null
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