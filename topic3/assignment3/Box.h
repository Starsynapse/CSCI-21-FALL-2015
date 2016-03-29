/*
 * Name        : Box.h
 * Author      : Eduardo
 * Description : 
 */

#ifndef BOX_H
#define BOX_H

#include <iostream>
#include "Prize.h"
using namespace std;

class Box
{
 private:
  unsigned int boxNumber_;
  //box number
  
  string boxColor_;
  //color of box
  
  Prize scratch_;
  //
  
  Prize* prizes;
  //dynamic array
  
  unsigned int prizeCapacity_;
  //capacity of prize
  
  unsigned int prizeCount_;
  //number of prizes
  
 public:
  Box();
  //default constructor
  
  Box(unsigned int boxNumber, string boxColor, unsigned int prizeCapacity);
  //overloaded constructor
  
  ~Box();
  //destructor
  
  unsigned int getBoxNumber();
  //accessor for boxNumber_
  
  void setBoxNumber(unsigned int boxNumber);
  //mutator for boxNumber_
  
  string getBoxColor();
  //accessor for boxColor_
  
  void setBoxColor(string boxColor);
  //mutator for boxColor_
  
  unsigned int getPrizeCapacity();
  //accessor for prizeCapacity_
  
  unsigned int getPrizeCount();
  //accessor for prizeCount_
  
  bool addPrize(Prize prize);
  //place prize in prizes array if there is space and return true, else return false
  
  Prize getPrize(unsigned int index);
  //return a Prize if index is valid, else return scratch (data member declared in class header)
  
  Prize removePrize(unsigned int index);
  //remove and return Prize if index is valid, else return scratch (data member declared in class header)
};

#endif