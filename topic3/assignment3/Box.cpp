/*
 * Name        : Box.cpp
 * Author      : Eduardo
 * Description : 
 */
 
#include "Box.h"

Box::Box()
{
  boxNumber_ = 0;
  boxColor_ = "NO COLOR";
  prizeCapacity_ = 5;
  prizeCount_ = 0;
  
  for(int i = 0; i < prizeCapacity_; i++)
  {
    prizes[i] = "EMPTY";
  }
}

Box::Box(unsigned int boxNumber, string boxColor)
{
  boxNumber_ = boxNumber;
  boxColor_ = boxColor;
}

Box::~Box()
{
  delete prizes[];
}

unsigned int getBoxNumber()
{
  return boxNumber_;
}

setBoxNumber(unsigned int boxNumber)
{
  boxNumber_ = boxNumber;
}

string getBoxColor()
{
  return boxColor_;
}

setBoxColor(string boxColor)
{
  boxColor_ = boxColor;
}

getPrizeCapacity()
{
  return prizeCapacity_;
}

getPrizeCount()
{
  return prizeCount_;
}

bool addPrize(Prize prize)
{
  for(int i = 0; i < prizeCapacity_; i++)
  {
    if(prize[i] == "EMPTY")
    {
      prize[i] = prize;
      return true;
    }
  }
  
  else
  {
    return false;
  }
}

getPrize(unsigned int index)
{
  
}