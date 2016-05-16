/*
 * Name        : sorting.cpp
 * Author      : FILL IN
 * Description : Working with Insertion and Shell Sort
 */
#include "sorting.h"

// CODE HERE -- FUNCTION DEFINITIONS

void DisplayArray(int values[]) {
  if (GRADER) {
    for (unsigned int i = 0; i < 5; i++)
      cout << values[i] << ' ';
    cout << endl;
  }
}

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
    //goes through the array
    {
        iterator_i = i;
        low_i = i;
        
        for (int i = internal; i < (size); i++)
        //goes through the rest of the unsorted array
        {
            if (the_array[i] < the_array[iterator_i] && the_array[i] < the_array[low_i])
            //finds the lowest number in the unsorted section of the array
            {
                low_i = i;
            }
        }
        
        if(the_array[iterator_i] != the_array[low_i])
        //checks if the numbers are different so it doesn't sort itself
        {
            SwapValues(the_array[iterator_i], the_array[low_i]);
        }
        
        internal = internal + 1;
        
        passes = passes + 1;
    }
    
    return passes;
}

int InsertionSort(int the_array[], unsigned int size)
{
    int passes = 1;
    int i_swap;
    
    for(int i = 1; i < size; i++)
    //goes through the array
    {
        if(the_array[i] < the_array[i - 1])
        //checks if a number is out of order
        {
            i_swap = i;
            for(int e = i_swap; e > 0; e--)
            //goes backward into the array
            {
                if(the_array[e] < the_array[e - 1])
                //checks if numbers are out of order
                {
                    SwapValues(the_array[e], the_array[e - 1]);
                }
            }
        }
        
        passes = passes + 1;
    }
    
    return passes;
}

int ShellSort(int the_array[], unsigned int size)
{
    int passes = 0;
    int gap = size / 2;
    int array_i;
    
    while (gap > 0)
    {
        passes++;
        
        for(int i = gap; i < size; i++)
        {
            int temp = the_array[i];
            array_i = i;
            
            cout << "gap " << gap << endl;
            cout << "temp " << gap << endl;
            cout << "array_i " << gap << endl;
            
            while((array_i >= gap) && (the_array[array_i - gap] > temp))
            {
                cout << "1one " << the_array[array_i] << endl;///////
                cout << "1two " << the_array[array_i - gap] << endl;///////
                the_array[array_i] = the_array[array_i - gap];
                //cout << "2one " << the_array[array_i] << endl;///////
                //cout << "2two " << the_array[array_i - gap] << endl;///////
                array_i = array_i - gap;
            }
            
            the_array[array_i] = temp;
            cout << "2one " << the_array[array_i] << endl;//////
            cout << "2two " << the_array[array_i + gap] << endl;///////
            DisplayArray(the_array);
        }
        
        gap = gap / 2;
    }
    
    return passes;
    
    /*
    int passes = 0;
    int h = size - 1;
    int iterator = 0;
    int increment = 0;
    int smaller = 0;
    
    while (h != 1)
    {
        h = h / 2;
        iterator = 0;
        increment = 0;
        //cout << "h " << h << endl;
        
        while(increment < h)
        {
            iterator = increment;
            while(iterator + h < size)
            {
                if(the_array[iterator] > the_array[iterator + h])
                {
                    //cout << "before " << the_array[iterator] << the_array[iterator + h] << endl;////
                    SwapValues(the_array[iterator], the_array[iterator + h]);
                    //cout << "after " << the_array[iterator] << the_array[iterator + h] << endl;////
                    
                    
                    smaller = iterator;
                    
                    //cout << "s " << smaller - h << endl;
                    
                    while(smaller - h >= 0)
                    {
                        if(the_array[smaller - h] > the_array[smaller])
                        {
                            SwapValues(the_array[smaller], the_array[smaller - h]);
                            //DisplayArray(the_array);
                        }
                        smaller = smaller - h;
                        //cout << "smaller " << smaller << endl;/////
                    }
                }
                
                iterator = iterator + h;
                cout << iterator << endl;////
            }
            
            increment = increment + 1;
            //cout << "increment " << increment << endl;////
        }    
        
        passes = passes + 1;
        //cout << "passes " << passes << endl;////
    }
    
    return passes;*/
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
