/*
 * Name        : CreditCardAccount.h
 * Author      : Eduardo Zamora
 * Description : Class Header File
 */

#ifndef CREDITCARDACCOUNT_H
#define CREDITCARDACCOUNT_H

#include "Bank.h"

class CreditCardAccount : public Bank
{
 public:
  CreditCardAccount(double money_borrowed_ = 0.0);
  //default constructor
  ~CreditCardAccount();
  //destructor
  
  void SetMoneyBorrowed(double money_borrowed);
  //mutator sets the ammount of money borrowed
  
  double GetMoneyBorrowed();
  //accessor gets the ammount borrowed
  
 private:
  double money_borrowed_;
};

#endif