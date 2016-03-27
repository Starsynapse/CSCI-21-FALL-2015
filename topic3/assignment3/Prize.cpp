/*
 * Name        : Prize.cpp
 * Author      : Eduardo Zamora
 * Description : 
 */

#include "Prize.h"

Prize::prizeName()
{
  prizeName = "NO NAME";
  prizeValue = 0;
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
  if(name1.prizeName == name2.prizeName && name1.prizeValue == name2.prizeValue)
  {
    return true;
  }
  
  else
  {
    return false;
  }
}

Prize::string getPrizeName()
{
  return prizeName_;
}

Prize::setPrizeName(string prizeName)
{
  prizeName_ = prizeName;
}

Prize::unsigned int getPrizeValue()
{
  return prizeValue_;
}

Prize::setPrizeValue(unsigned int prizeValue)
{
  prizeValue_ = prizeValue;
}