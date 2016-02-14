/*
 * Name        : Assignment 1
 * Author      : Eduardo Zamora
 * Description : Performs operations on strings, also array stuff
 * Sources     : ascii-code.com
 */

#include "assignment_1.h"

// Write Function Definitions Here (What goes below main)
// Function 1
bool CheckAlphabetic(const string& input)
{
  if (input == "")//checks if there is no input
  {
    return false;
  }
  
  for (int i = 0; i < input.size(); i++)
  {
    if (!isalpha(input[i]))//checks if characters in the string are not alphanumeric
    {
      return false;
    }
  }
  
  return true;
}

// Function 2
int CountWords(string words)
{
  int number_words = 1;
  
  if (words == "")//checks if the string is empty
  {
    return 0;
  }
  
  for (int i = 0; i < words.size(); i++)
  {
    if (words[i] == ' ')//checks for spaces in the string
    {
      number_words = number_words + 1;
    }
  }
  
  return number_words;
}

// Function 3
bool EncryptString(string& input, int shift)
{
  for (int i = 0; i < input.size(); i++)
  {
    if (!isalpha(input[i]))//checks if characters in the string are not alphanumeric
    {
      return false;
    }
  }
  
  int convert_toupper = 0;
  int remaining_shift = shift;
  for (int i = 0; i < input.size(); i++)//magical for loop of magic
  {
    int convert_toupper = 0;//keeps track if the value was originally uppercase
    remaining_shift = shift;
    
    if (isupper(input[i]))//checks if character is uppercase
    {
      input[i] = tolower(input[i]);//converts to lower because i didn't want to double the length of the code
      convert_toupper = 1;//marks the character as originally uppercase
    }
    
    if (islower(input[i]))//checks if character is lowercase, kinda redundant but whatever
    {
      while (remaining_shift > 26)//reduces any oversized shift to a managable shift of 0 to 26
      {
        remaining_shift = remaining_shift - 26;
      }
      
      while (remaining_shift < 0)//increases any undersized shift to a managable shift of 0 to 26
      {
        remaining_shift = remaining_shift + 26;
      }
      
      while (remaining_shift != 0)//if there is a shift value remaining greater than zero
      {
        input[i] = int(input[i]) + 1;//shifts the value by 1
        remaining_shift = remaining_shift - 1;//subtracts one from the shift value
        
        if (int(input[i]) > 122)//checks if the character shifted too much and is no longer alphanumeric
        {
          input[i] = int(input[i]) - 26;//corrects for shifting too much
        }
      }
      
      if (convert_toupper == 1)//checks if the original character was uppercase
      {
        input[i] = toupper(input[i]);//converts the lowercase character to uppercase
      }
    }
  }
  
  return true;//returns true since the encryption was performed
}

// Function 4
bool DecryptString(string& input, int shift)
{
  for (int i = 0; i < input.size(); i++)
  {
    if (!isalpha(input[i]))
    {
      return false;
    }
  }
  
  int convert_toupper = 0;
  int remaining_shift = shift;
  for (int i = 0; i < input.size(); i++)//magical for loop of magic
  {
    convert_toupper = 0;//keeps track if the value was originally uppercase
    remaining_shift = shift;
    
    if (isupper(input[i]))//checks if character is uppercase
    {
      input[i] = tolower(input[i]);//converts to lower because i didn't want to double the length of the code
      convert_toupper = 1;//marks the character as originally uppercase
    }
    
    if (islower(input[i]))//checks if character is lowercase, kinda redundant but whatever
    {
      while (remaining_shift > 26)//reduces any oversized shift to a managable shift of 0 to 26
      {
        remaining_shift = remaining_shift - 26;
      }
      
      while (remaining_shift < 0)//increases any undersized shift to a managable shift of 0 to 26
      {
        remaining_shift = remaining_shift + 26;
      }
      
      while (remaining_shift != 0)//if there is a shift value remaining greater than zero
      {
        input[i] = int(input[i]) - 1;//shifts the value by 1
        remaining_shift = remaining_shift - 1;//subtracts one from the shift value
        
        if (int(input[i]) < 97)//checks if the character shifted too much and is no longer alphanumeric
        {
          input[i] = int(input[i]) + 26;//corrects for shifting too much
        }
      }
      
      if (convert_toupper == 1)//checks if the original character was uppercase
      {
        input[i] = toupper(input[i]);//converts the lowercase character to uppercase
      }
    }
  }
  
  return true;
}

//Function 5
double ComputeAverage(double array[], unsigned int array_size)
{
  double total = 0.0;
  double mean = 0.0;
  
  for (int i = 0; i < array_size; i++)//adds up the array values
  {
    total = total + array[i];
  }
  
  mean = (total / array_size);//calculates the mean
  return mean;
}

//Function 6
double FindMinValue(double array[], unsigned int array_size)
{
  double smallest = array[0];
  
  for (int i = 0; i < array_size; i++)
  {
    if (array[i] < smallest)
    {
      smallest = array[i];
    }
  }
  
  return smallest;
}

//Function 7
double FindMaxValue(double array[], unsigned int array_size)
{
  double largest = array[0];
  
  for (int i = 0; i < array_size; i++)
  {
    if (array[i] > largest)
    {
      largest = array[i];
    }
  }
  
  return largest;
}