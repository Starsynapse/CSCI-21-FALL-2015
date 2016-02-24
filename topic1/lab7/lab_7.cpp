/*
 * Name        : lab_7.cpp
 * Author      : Eduardo Zamora
 * Description : Working with File I/O
 */
#include "lab_7.h"

// CODE HERE -- FUNCTION DEFINITION FOR ProcessFile()
bool ProcessFile(string filename)
{
  ifstream inStream;
  inStream.open(filename.c_str());
  
  if (inStream.fail())
  {
    return false;
  }
  
  int number = 0;
  
  while (!inStream.eof())
  {
    inStream >> number;
    
    if (number == 10)
    {
      OnTen();
    }
    
    else if (number == 20)
    {
      OnTwenty();
    }
    
    else if (number == 30)
    {
      OnThirty();
    }
    
    else if (number == 40)
    {
      OnForty();
    }
    
    else if (number == 50)
    {
      OnFifty();
    }
    
    else
    {
      OnError();
    }
  }
  
  inStream.close();
  return true;
}

void ProcessArguments(int argc, char* argv[])
{
  string number;
  for (int i = 1; i < argc; i++)
  {
    number = argv[i];
    if (number == "10")
    {
      OnTen();
    }
    
    else if (number == "20")
    {
      OnTwenty();
    }
    
    else if (number == "30")
    {
      OnThirty();
    }
    
    else if (number == "40")
    {
      OnForty();
    }
    
    else if (number == "50")
    {
      OnFifty();
    }
    
    else
    {
      cout << argv[i]<< endl;
      OnError();
    }
  }
}