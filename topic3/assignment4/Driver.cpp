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
    SLList list;
    list.Insert(23);
    list.GetHead();
    //fine be that way!
}