/*
 * Name        : lab_12.cpp
 * Author      : FILL IN
 * Description : Working with Pointers and Dynamic Variables / Arrays
 */
#include "lab_14.h"

// CODE HERE -- FUNCTION DEFINITIONS
int* MakeDynoIntArray(unsigned int size)
{
  int *a = new int[size];
  //create array
  
  for (int i = 0; i < size; i++)
  //fill up array
  {
    a[i] = i + 1;
  }
  
  return a;
}

int Sum(int* the_array, unsigned int array_size)
{
  if(array_size == 0 || the_array == NULL)
  {
    throw "NULL ARRAY REFERENCE";
  }
    
  int total = 0;
  //variable to store the total
  
  for(int i = 0; i < array_size; i++)
  //adds the array
  {
    total = total + the_array[i];
  }
  
  return total;
}

int Max(int* the_array, unsigned int array_size)
{
  if(array_size == 0 || the_array == NULL)
  {
    throw "NULL ARRAY REFERENCE";
  }  
      
  int max = the_array[0];
  //variable to store max value in array
  
  for(int i = 0; i < array_size; i++)
  //finds out the largest number by scanning array
  {
    if(max < the_array[i])
    //if the new number is larger
    {
      max = the_array[i];
    }
  }
  
  return max;
}

int Min(int* the_array, unsigned int array_size)
{
  if(array_size == 0 || the_array == NULL)
  {
    throw "NULL ARRAY REFERENCE";
  }
      
  int min = the_array[0];
  //variable to store min value in array
  
  for(int i = 0; i < array_size; i++)
  //finds out the largest number by scanning array
  {
    if(min > the_array[i])
    //if the new number is larger
    {
      min = the_array[i];
    }
  }
  
  return min;
}