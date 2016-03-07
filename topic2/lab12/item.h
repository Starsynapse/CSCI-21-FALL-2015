/*
 * Name        : item.h
 * Author      : Eduardo Zamora
 * Description : Writing the base class.
 */

#ifndef ITEM_H_
#define ITEM_H_

#include <string>
#include <iostream>
#include <sstream>
using namespace std;

//This class models an item
class Item
{
 public:
  //constructor
  Item(string name_ = "item", unsigned int value_ = 0);
  
  //destructor "does nothing"
  virtual ~Item();
  
  //Mutators
  void set_name(string name);
  
  void set_value(int value);
  
  //Accessors
  string name();
  
  unsigned int value();
  
  //returns a string containing name_ and value_
  string ToString();
  
 private:
  //holds the name of the item
  string name_;
  
  //holds the value of the item
  unsigned int value_;
};

#endif /* ITEM_H_ */