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


template<typename Type>
class Box
{
 public:
  //constructor
  Box(const Type &value = Type());
  
  //Accessor
  Type value();
  
  //mutator
  void set_value(const Type &value);
  
  //friend overloaded operator<<
  /*friend Type ostream& operator <<(ostream &out, const &value);
 private:*/
  Type value_;
};

/*
template<typename T>
T Sum(T &values = T(), unsigned int size = 0)
{
  T number_sum = T();
  
  for(int i = 0; i < size; i++)
  {
    number_sum = number_sum + values[i];
  }
  
  return number_sum;
}
*/

#endif /* BOX_H_ */