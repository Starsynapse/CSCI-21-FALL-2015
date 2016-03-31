/*
 * Name        : Prize.cpp
 * Author      : Eduardo Zamora
 * Description : 
 */

#include "Prize.h"

Prize::Prize()
{
  prizeName_ = "NO NAME";
  prizeValue_ = 0;
}

Prize::Prize(string prizeName, unsigned int prizeValue)
{
  prizeName_ = prizeName;
  prizeValue_ = prizeValue;
}

Prize::~Prize()
{
  //does nothing
}

bool operator ==(const Prize &name1, const Prize &name2)
{
  if(name1.prizeName_ == name2.prizeName_ && name1.prizeValue_ == name2.prizeValue_)
  {
    return true;
  }
  
  else
  {
    return false;
  }
}

string Prize::getPrizeName()
{
  return prizeName_;
}

void Prize::setPrizeName(string prizeName)
{
  prizeName_ = prizeName;
}

unsigned int Prize::getPrizeValue()
{
  return prizeValue_;
}

void Prize::setPrizeValue(unsigned int prizeValue)
{
  prizeValue_ = prizeValue;
}