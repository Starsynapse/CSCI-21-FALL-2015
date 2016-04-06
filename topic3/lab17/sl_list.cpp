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
    
    tail_ = head_;
    while(tail_ != NULL)
    {
        tail_ = tail_ -> next_node();
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
}

void SLList::Clear()
{
    while(head_ != NULL)
    {
        RemoveHead();
    }
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