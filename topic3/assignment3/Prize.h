/*
 * Name        : Prize.h
 * Author      : Eduardo Zamora
 * Description : 
 */

#ifndef PRIZE_H
#define PRIZE_H

#include <iostream>
using namespace std;

class Prize
{
 private:
  string prizeName_;
  //name of prize
  
  unsigned int prizeValue_;
  //value of prize
  
 public:
  Prize();
  //default constructor
  
  Prize(string prizeName, unsigned int prizeValue);
  //overloaded constructor
  
  ~Prize();
  //destructor
  
  friend bool operator ==(const Prize &name1, const Prize &name2);
  //returns true if the prizeName and prizeValue of the two Prizes being compared are equivalent, else return false
  
  string getPrizeName();
  //accessor for prizeName
  
  setPrizeName(string prizeName);
  //mutator for prizeName
  
  unsigned int getPrizeValue();
  //accessor for prizeValue
  
  setPrizeValue(unsigned int prizeValue);
  //mutator for prizeValue
}

#endif