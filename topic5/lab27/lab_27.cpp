/*
 * Name        : lab_27.cpp
 * Author      : YOUR NAME
 * Description : Using the STL
 */

#include "lab_27.h"

// CLASS (and regular) FUNCTION DEFINITIONS GO HERE
//http://www.cplusplus.com/reference/vector/vector/

void TreasureChest::AddItem(const Item& item_to_add)
{
    chest_.push_back(item_to_add);
}

void TreasureChest::InsertItem(const Item& item_to_add, unsigned int position)
{
    chest_.insert(position, item_to_add);
}

const Item* TreasureChest::GetItem(unsigned int position)
{
    
}

Item TreasureChest::RemoveItem(unsigned int position)
{
    
}

void TreasureChest::Clear()
{
    
}

bool TreasureChest::Empty() const
{
    
}

unsigned int TreasureChest::GetSize() const
{
    
}

void TreasureChest::SortByName()
{
    
}

void TreasureChest::SortByValue()
{
    
}

void TreasureChest::SortByQuantity()
{
    
}

ostream& operator<<(ostream& outs, const TreasureChest& src)
{
    
}

string TreasureChest::ToString()
{
    
}