/*
 * Name        : box.h
 * Author      : Eduardo Zamora
 * Description : Writing the base class.
 */

#ifndef BOX_H_
#define BOX_H_

#include <string>
#include <iostream>
#include <sstream>
#include <cstdlib>
#include <iomanip>
using namespace std;


template<class Type>
class Box
{
 public:
  //constructor
  Box()
  {
    //blank
  }
  
  Box(Type value)
  {
    value_ = value;
  }
  
  //Accessor
  Type getContents()
  {
    return value_;
  }
  
  //mutator
  void setContents(Type value)
  {
    value_ = value;
  }
  
  //friend overloaded operator<<
  friend ostream& operator <<(ostream &out, Box<Type> value)
  {
    out << value.value_;
    return out;
  }
 private:
  Type value_;
};


template<typename T>
T Sum(T values[] = T(), unsigned int size = 0)
{
  T total = T();// = values[0];
  for (int i = 0; i < size; i++)
  {
    total = total + values[i];
  }
  
  return total;
}


#endif /* BOX_H_ */