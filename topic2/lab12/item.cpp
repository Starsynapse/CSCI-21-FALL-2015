/*
 * Name        : item.cpp
 * Author      : Eduardo Zamora
 * Description : Defining the base class functions.
 */

#include "item.h"

Item::Item(string name, unsigned int value)
{
  name_ = name;
  value_ = value;
}
  
Item::~Item ()
{
  //does nothing
}
  
void Item::set_name(string name)
{
  name_ = name;
}
  
void Item::set_value(int value)
{
  value_ = value;
}
  
string Item::name()
{
  return name_;
}

unsigned int Item::value()
{
  return value_;
}
  
string Item::ToString()
{
  stringstream ss;
  ss.str();
  string output;
    
  ss << name_ << ", $" << value_;
  output = ss.str();
  return output;
}