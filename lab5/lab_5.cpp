/*
 * Name        : lab_5.cpp
 * Author      : Eduardo Zamora
 * Description : Practicing Functions. Use this file to write your
 *               Function Definitions (what goes below main()).
 */

#include "lab_5.h"

// CODE HERE (FUNCTION DEFINITIONS)
void Hello()
{
    cout << "Hello world!";
}

void PrintMessage(const string& input)
{
    cout << input;
}

int GetAnswer()
{
    int integer = 42;
    return integer;
}

int FindLarger(int value_1, int value_2)
{
    if (value_1 > value_2 || value_1 == value_2)
    {
        return value_1;
    }
    
    else if (value_1 < value_2)
    {
        return value_2;
    }
}

string BuildMessage(string A_Message, bool upper_lower)
{
    string return_output;
    
    if (upper_lower == true)
    {
        for (int i = 0; i < A_Message.size(); i++)
        {
            A_Message[i] = toupper(A_Message[i]);
        }
        
        return_output = "Message: " + A_Message;
        return return_output;
    }
    
    if (A_Message == "")
    {
        return_output = "Message: empty";
        return return_output;
    }
    
    else
    {
        return_output = "Message: " + A_Message;
        return return_output;
    }
}