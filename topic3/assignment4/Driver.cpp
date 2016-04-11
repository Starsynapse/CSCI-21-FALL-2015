/*
 * Name        : sl_list.h
 * Author      : Eduardo
 * Description : 
 */

#include <iostream>
#include <string>
#include <sstream>

#include "dl_list.h"
#include "dl_list.cpp"
#include "dl_node.h"
#include "dl_node.cpp"
using namespace std;

int main()
{
    int head;
    DLList list;
    list.Insert(5);
    head = list.GetHead();
    cout << head;
    //fine be that way!
}