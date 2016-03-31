/*
 * Name        : sl_list.cpp
 * Author      : Eduardo
 * Description : 
 */

#include "sl_list.h"

SLList::SLList()
{
    head_ = NULL;
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
    
}

string SLList::ToString() const
{
    
}