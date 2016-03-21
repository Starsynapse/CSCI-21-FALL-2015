/*
 * Name        : CheckingAccount.h
 * Author      : Eduardo Zamora
 * Description : Class Header File
 */

#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H

#include "Bank.h"

class CheckingAccount : public Bank
{
 public:
  CheckingAccount();
  //default constructor
  ~CheckingAccount();
  //deconstructor
  
 private:
  //nothing! :D
};


#endif