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
  inStream.open(filename);
  
  int number = 0;
  
  for (int i = 0; i < 101; i++)
  {
    inStream >> number;
    
    if (number == 10)
    {
      OnTen();
    }
    
    if (number == 20)
    {
      OnTwenty();
    }
    
    if (number == 30)
    {
      OnThirty();
    }
    
    if (number == 40)
    {
      OnForty();
    }
    
    if (number == 50)
    {
      OnFifty();
    }
    
    else
    {
      OnError();
    }
  }
  
  inStream.close();
}

void ProcessArguments(int argc, char* argv[])
{
  
}