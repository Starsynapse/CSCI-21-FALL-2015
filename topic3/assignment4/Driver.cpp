/*
 * Name        : sl_list.h
 * Author      : Eduardo
 * Description : 
 */

#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

#include "dl_list.h"
#include "dl_list.cpp"
#include "dl_node.h"
#include "dl_node.cpp"
using namespace std;

int main()
{
    int head;
    
    int number_of_kids;
    string kid;
    DLList list;
    ifstream inStream;
    inStream.open("a3input.txt");
    
    for(int i = 0; i < number_of_kids; i++)
    {
        inStream >> kid;
        list.Insert(kid);
    }
    
    head = list.GetHead();
    cout << head;
    //fine be that way!
    inStream.close();
    return 0;
}