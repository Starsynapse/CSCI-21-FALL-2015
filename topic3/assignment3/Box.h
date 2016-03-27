/*
 * Name        : Box.h
 * Author      : Eduardo
 * Description : 
 */

#ifndef BOX_H
#define BOX_H

class Box
{
 private:
  unsigned int boxNumber_;
  //box number
  
  string boxColor_;
  //color of box
  
  Prize scratch_;
  //
  
  Prize* prizes[];
  //dynamic array
  
  unsigned int prizeCapacity_;
  //capacity of prize
  
  unsigned int prizeCount_;
  //number of prizes
  
 public:
  Box();
  //default constructor
  
  Box(unsigned int boxNumber, string boxColor);
  //overloaded constructor
  
  ~Box();
  //destructor
  
  unsigned int getBoxNumber();
  //accessor for boxNumber_
  
  setBoxNumber(unsigned int boxNumber);
  //mutator for boxNumber_
  
  string getBoxColor();
  //accessor for boxColor_
  
  setBoxColor(string boxColor);
  //mutator for boxColor_
  
  getPrizeCapacity();
  //accessor for prizeCapacity_
  
  getPrizeCount();
  //accessor for prizeCount_
  
  bool addPrize(Prize prize);
  //place prize in prizes array if there is space and return true, else return false
  
  getPrize(unsigned int index);
  //return a Prize if index is valid, else return scratch (data member declared in class header)
  
  removePrize(unsigned int index);
  //remove and return Prize if index is valid, else return scratch (data member declared in class header)
}

#endif