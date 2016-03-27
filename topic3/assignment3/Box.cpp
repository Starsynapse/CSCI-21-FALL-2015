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

Box::Box(unsigned int boxNumber, string boxColor, unsigned int prizeCapacity)
{
  boxNumber_ = boxNumber;
  boxColor_ = boxColor;
  prizeCapacity_ = prizeCapacity;
}

Box::~Box()
{
  delete prizes[];
}

unsigned int Box::getBoxNumber()
{
  return boxNumber_;
}

Box::setBoxNumber(unsigned int boxNumber)
{
  boxNumber_ = boxNumber;
}

string Box::getBoxColor()
{
  return boxColor_;
}

Box::setBoxColor(string boxColor)
{
  boxColor_ = boxColor;
}

Box::getPrizeCapacity()
{
  return prizeCapacity_;
}

Box::getPrizeCount()
{
  return prizeCount_;
}

bool Box::addPrize(Prize prize)
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

Box::getPrize(unsigned int index)
{
  if(index < 0 || index > prizeCapacity_)
  {
    return scratch_;
  }
  
  if(prize[index] != "EMPTY")
  {
    return Prize&;
  }
}

removePrize(unsigned int index)
{
  if(index < 0 || index > prizeCapacity_)
  {
    return scratch_;
  }
  
  if(prize[index] != "EMPTY")
  {
    Prize = prize[index];
    prize[index] = "EMPTY"
    return Prize;
  }
}