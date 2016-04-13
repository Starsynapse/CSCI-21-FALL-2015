/*
 * Name        : lab_22.cpp
 * Author      : Hunter Damon
 * Description : Recursive Functions
 */

#include "lab_20.h"

// CODE FUNCTION DEFINITIONS HERE
unsigned int Factorial(unsigned int value)
{
    if (value == 0)
    {
        return 1;
    }
    else if (value > 0)
    {
        return (value * Factorial(value - 1));
    }
}

unsigned int Fibonacci(unsigned int fib_value)
{
    if (fib_value == 0)
    {
        return 0;
    }
    else if (fib_value == 1)
    {
        return 1;
    }
    else
    {
        return (Fibonacci(fib_value - 1) + Fibonacci(fib_value - 2));
    }
}

bool WordIsPalindrome(string word)
{
    if (word == "")
    {
        return true;
    }
    else if (word[0] == word[word.length() - 1])
    {
        return WordIsPalindrome(word.substr(1, word.length() - 2));
    }
    else
    {
        return false;
    }
}

string ArrayForwardsAsString(int array[], unsigned int start, unsigned int size)
{
    stringstream out;
    if (start == size)
    {
        return "";
    }
    else if (start < size)
    { 
        out << array[start] << " " << ArrayForwardsAsString(array, start + 1, size);
    }

    return out.str();
}

string ArrayBackwardsAsString(int array[], int start, unsigned int size)
{
    stringstream out;
    if (start < 0)
    {
        return "";
    }
    else if (start >= 0)
    { 
        out << array[start] << " " << ArrayBackwardsAsString(array, start - 1, size);
    }

    return out.str();
}