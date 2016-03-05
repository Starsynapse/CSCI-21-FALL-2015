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
  Item (string name_ = "item", unsigned int value_ = 0);
  
  //destructor "does nothing"
  virtual ~Item ();
  
  //Mutator
  void SetName(string name);
  
  //Accessor
  string GetName();
  
  //Mutator
  void SetValue(int value);
  
  //Accessor
  unsigned int GetValue();
  
  //returns a string containing name_ and value_
  string ToString();
  
 private:
  string name_;
  unsigned int value_;
}


#endif /* ITEM_H_ */