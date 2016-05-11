/*
 * Name        : sorting.cpp
 * Author      : FILL IN
 * Description : Working with Insertion and Shell Sort
 */
#include "sorting.h"

// CODE HERE -- FUNCTION DEFINITIONS

int BubbleSort(int the_array[], unsigned int size)
{
    int passes = -1;
    int swaps = 0;
    
    while (swaps != size)
    {
        
        for (int i = 0; i < (size - 1); i++)
        //goes through the array
        {
            if (the_array[i] > the_array[i + 1])
            //does the swapping
            {
                SwapValues(the_array[i], the_array[i + 1]);
            }
        }
        
        swaps = swaps + 1;
        passes = passes + 1;
    }
    
    return passes;
}

int OptimizedBubbleSort(int the_array[], unsigned int size)
{
    int passes = 0;
    int swaps = 1;
    
    while (swaps != 0 && (passes != (size - 1)))
    {
        swaps = 0;
        
        for (int i = 0; i < (size - 1); i++)
        //goes through the array
        {
            if (the_array[i] > the_array[i + 1])
            //does the swapping
            {
                SwapValues(the_array[i], the_array[i + 1]);
                
                swaps = swaps + 1;
            }
        }
        
        passes = passes + 1;
    }
    
    return passes;
}

int SelectionSort(int the_array[], unsigned int size)
{
    int passes = 1;
    int swaps = 0;
    int internal = 0;
    int iterator_i = 0;
    int low_i = 0;
    
    for (int i = 0; i < (size - 1); i++)
    {
        iterator_i = iterator_i + i;
        
        for (int i = internal; i < (size - 1); i++)
        {
            if (the_array[i] < the_array[iterator_i] && the_array[i] < the_array[low_i])
            {
                low_i = i;
                cout << the_array[low_i] << endl;
            }
        }
        
        SwapValues(the_array[iterator_i], the_array[low_i]);
        
        internal = internal + 1;
        passes = passes + 1;
    }
    
    return passes;
}

int InsertionSort(int the_array[], unsigned int size)
{
    
}

int ShellSort(int the_array[], unsigned int size)
{
    
}

void SwapValues(int &value_1, int &value_2) {
  // DO NOT ALTER THE NEXT 3 LINES!!!
  if (GRADER) {
    cout << value_1 << " " << value_2 << endl;
  }
  // Code SWAP Algorithm Here
  int temp = value_1;
  value_1 = value_2;
  value_2 = temp;
}