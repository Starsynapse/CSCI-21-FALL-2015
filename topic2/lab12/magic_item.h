/*
 * Name        : magic_item.h
 * Author      : Eduardo Zamora
 * Description : Writing the derived class.
 */
 
#ifndef MAGIC_ITEM_H_
#define MAGIC_ITEM_H_

#include "item.h"

class MagicItem : public Item
{
 public:
  //constructor
  MagicItem(string name_ = "magicitem", unsigned int value_ = 0, string description_ = "no description", unsigned int mana_required_ = 0);
  
  //destructor
  virtual ~MagicItem();
  
  //mutators
  void set_description(string description);
  
  void set_mana_required(unsigned int mana_required);
  
  //accesssors
  string description();
  
  unsigned int mana_required();
  
  //returns a string containing name_, value_, description_, and mana_required_ mana
  string ToString();
  
 private:
  //holds a description of the magic item
  string description_;
  
  //holds the amount of mana required to use the magic item
  unsigned int mana_required_;
};

#endif /* MAGIC_ITEM_H_ */