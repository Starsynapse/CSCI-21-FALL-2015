/*
 * Name        : lab_6.cpp
 * Author      : Eduardo Zamora
 * Description : Working with Arrays
 */

#include "lab_6.h"

// CODE HERE (FUNCTION DEFINITIONS)
string PrepareForDisplay(int values[], int size, char separator)
{
  stringstream ss;//create string stream
  ss.str();//something about string?
  string output_string;//creating string for output
  
  for (int i = 0; i < size; i++)//combines the parameters into a stringstream
  {
    ss << values[i];
    
    if (i < size - 1)//adds separator only in between numbers
    {
      ss << separator;
    }
  }
  
  output_string = ss.str();//saves the stringstream string as a normal string
  return output_string;
}

bool HasValue(int values[], int size, int value)
{
  for (int i = 0; i < size; i++)//checks all values for the number
  {
    if (values[i] == value)
    {
      return true;
    }
  }
  
  return false;
}

int ValueAt(int values[], int size, int index, bool &error)
{
  if (index < size && index >= 0)//checks if the index value is within the bounds of the array
  {
    error = false;
    
    return values[index];
  }
  
  else
  {
    error = true;
    return 0;
  }
}

int Sum(int values[], int size)
{
  int sum_values = 0;
  
  for (int i = 0; i < size; i++)//sums up all the values of the array
  {
    sum_values = sum_values + values[i];
  }
  
  return sum_values;
}

bool SwapValues(int values[], int size, int index1, int index2)
{
  int original_index1_value = values[index1];//creating copies of originals to check if they switched
  int original_index2_value = values[index2];
  int temp_value;//temporary value for switching
  
  if ((index1 < size && index1 >= 0) && (index2 < size && index2 >= 0))//checks to make sure the indexes are within the bounds of the array
  {
    temp_value = values[index1];//swaps the values
    values[index1] = values[index2];
    values[index2] = temp_value;
    
    if ((values[index1] == original_index2_value) && (values[index2] == original_index1_value))//checks if the values sucessfully swaped
    {
      return true;
    }
  }
  
  else
  {
    return false;
  }
}

/*
int main()//main for testing
{
  int values[] {1, 2, 3};
  int size = 3;
  int index1 = 3;
  int index2 = 6;
  bool hi;
  hi = SwapValues(values, size, index1, index2);
  std::cout << hi << std::endl;
}
*/