/*
 * Name        : sl_list.cpp
 * Author      : Eduardo
 * Description : 
 */

#include "dl_list.h"

DLList::DLList()
{
    head_ = NULL;
    tail_ = NULL;
    size_ = 0;
}

DLList::~DLList()
{
    Clear();
}

void DLList::Insert(int new_node)//this causes segmentation faults
{
    DLNode *temp = new DLNode(new_node);
    //creates temp node and makes it point at the new_node information
    DLNode *iterator = head_;
    //creates an iterator and makes it point to head_
    DLNode *iterator2 = tail_;
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
                //makes the previous node point at the new node
                temp -> set_next_node(iterator);
                //makes the new node point at the next node
                iterator -> set_previous_node(temp);
                //makes the next node point at the new node
                temp -> set_previous_node(iterator2);
                //makes the new node point the previous node
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
            
            else
            {
                iterator2 = iterator;
                iterator = iterator -> next_node();
            }
        }
    }
}

bool DLList::RemoveFirstOccurence(int remove_node)
{
    DLNode *temp = NULL;
    //creates a temp pointer to hold the node to be deleted
    DLNode *iterator = head_;
    //creates an iterator and makes it point to head_
    DLNode *iterator2 = NULL;
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
            
            else if((iterator -> next_node()) == NULL)
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
                iterator -> set_previous_node(iterator2);
                //iterator's node sets the previous node to iterator2's node
                delete temp;
                //deletes the node
                temp = NULL;
                //sets temp to NULL
                size_--;
                //size of linked list decreases
                return true;
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

bool DLList::RemoveAllOccurence(int remove_node)
{
    DLNode *temp = NULL;
    //creates a temp pointer to hold the node to be deleted
    DLNode *iterator = head_;
    //creates an iterator and makes it point to head_
    DLNode *iterator2 = tail_;
    //second iterator to trail behind the first iterator
    unsigned int original_size = size_;
    
    while(iterator != NULL)
    {
        if((iterator -> contents()) == remove_node)
        {
            if(iterator2 == NULL)
            {
                RemoveHead();
            }
            
            else if((iterator -> next_node()) == NULL)
            {
                RemoveTail();
            }
            
            else
            {
                temp = iterator;
                //points to the node that will be deleted
                iterator = iterator -> next_node();
                //iterator points to the node after the one to be deleted
                iterator2 -> set_next_node(iterator);
                //iterator2's node sets the next node to iterator's node, skipping over the soon to be deleted node
                iterator -> set_previous_node(iterator2);
                //iterator's node sets the previous node to iterator2's node
                delete temp;
                //deletes the node
                temp = NULL;
                //sets temp to NULL
                size_--;
                //size of linked list decreases
            }
        }
        
        else
        {
            iterator2 = iterator;
            iterator = iterator -> next_node();
        }
    }
    
    if(original_size != size_)
    //a change in size means at least one node was removed
    {
        return true;
    }
    
    else
    //specified node was not found
    {
        return false;
    }
}

void DLList::InsertHead(int new_head)
{
    if(head_ == NULL)
    {
        DLNode *temp = new DLNode(new_head);
        //creates temp node and makes it equal to the new_head information
        head_ = temp;
        //makes head point to temp node making it the head
        temp -> set_next_node(head_);
        //temp points to the next node "head_"
        head_ -> set_previous_node(temp);
        //head_ points to previous node temp
        size_++;
        //increments the size of the list
    }
    
    else
    {
        DLNode *temp = new DLNode(new_head);
        //creates temp node and makes it equal to the new_head information
        temp -> set_next_node(head_);
        //temp points to the next node "head_"
        head_ -> set_previous_node(temp);
        //head_ points to previous node temp
        head_ = temp;
        //head points to temp
        tail_ -> set_next_node(head_);
        //makes the head node the next node to the tail
        head_ -> set_previous_node(tail_);
        //makes the tail the previous node to the head
        size_++;
        //increments the size of the list
    }
    
    if(tail_ == NULL)
    {
        tail_ = head_;
        //sets tail equal to head_
    }
}

void DLList::InsertTail(int new_tail)//this or some function before it is broken
{
    if(tail_ != NULL)
    {
        DLNode *temp = new DLNode(new_tail);
        //creates temp node and makes it equal to the new_tail information
        tail_ -> set_next_node(temp);
        //makes the tail node point to the new node
        temp -> set_previous_node(tail_);
        //makes the temp node point to the previous node tail
        tail_ = temp;
        //the new node at the end of the list is saved as the new tail_
        tail_ -> set_next_node(head_);
        //makes the tail point at head_ because it is a circular linked list
        size_++;
        //the newly inserted tail increases the size of the list
    }
    
    else if(tail_ == NULL)
    {
        DLNode *temp = new DLNode(new_tail);
        //creates temp node and makes it equal to the new_tail information
        tail_ = temp;
        //makes tail point to the new head
        tail_ -> set_next_node(temp);
        //makes the tail node point to the new node
        temp -> set_previous_node(tail_);
        //makes the temp node point to the previous node tail
        size_++;
        //the added tail increases the node count
    }
}

void DLList::RemoveHead()
{
    if(head_ != NULL)
    {
        DLNode *temp = head_;
        //creates temp node and makes it equal to the head_
        head_ = head_ -> next_node();
        //sets head_ equal to the next node
        head_ -> set_previous_node(tail_);
        //the node before head_ is tail_
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

void DLList::RemoveTail()
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
            DLNode *temp = NULL;
            //creates temp node and makes it equal to NULL
            DLNode *iterator = head_;
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
            
            temp -> set_next_node(head_);
            //temp is set to point at head_
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

int DLList::GetHead() const
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

int DLList::GetTail() const
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

bool DLList::Get(int target) const
{
    DLNode *iterator = head_;
    //creates an iterator and makes it point to head_
    while(iterator != NULL)
    {
        if((iterator -> contents()) == target)
        {
            return true;
        }
        
        else
        {
            iterator = iterator -> next_node();
        }
    }
    
    return false;
}

void DLList::Clear()
{
    while(head_ != NULL)
    {
        RemoveHead();
    }
    
    tail_ = NULL;
}

unsigned int DLList::size() const
{
    return size_;
}

string DLList::ToString() const
{
    stringstream ss;
    ss.str();
    string to_string = "";
    DLNode *iterator = head_;
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