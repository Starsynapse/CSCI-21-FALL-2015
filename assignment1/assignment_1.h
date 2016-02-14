/*
 * Name        : Assignment 1
 * Author      : Eduardo Zamora
 * Description : declares functions and includes libraries
 * Sources     : ascii-code.com
 */

#ifndef ASSIGNMENT_1_H
#define ASSIGNMENT_1_H

// Add any includes and using statements Here
#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>
#include <streambuf>
#include <array>
#include <cctype>
using namespace std;

// Declare Function Prototypes Here (What goes above main)
bool CheckAlphabetic(const string&);
// Function 1

int CountWords(string words);
// Function 2

bool EncryptString(string&, int shift);
// Function 3

bool DecryptString(string&, int shift);
// Function 4

double ComputeAverage(double array[], unsigned int array_size);
// Function 5

double FindMinValue(double array[], unsigned int array_size);
// Function 6

double FindMaxValue(double array[], unsigned int array_size);
// Function 7

#endif /* ASSIGNMENT_1_H */
