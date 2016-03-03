/*
 * Name        : item.cpp
 * Author      : Eduardo Zamora
 * Description : Defining the class functions.
 */

#include "item.h"

Item::Item (string name, unsigned int value)
  {
    //empty on purpose
  }
  
virtual Item::~Item ()
  {
    //does nothing
  }
  
string Item::SetName(string name)
  {
    name_ = name;
  }
  
string Item::GetName()
  {
    return name_;
  }
  
unsigned int Item::SetValue(int value)
  {
    value_ = value;
  }
  
unsigned int Item::GetValue()
  {
    return value_;
  }
  
string Item::ToString()
  {
    stringstream = ss;
    ss.str()
    string output;
    
    ss << name_ << ", $" << value_;
    output = ss.str();
    return output;
  }