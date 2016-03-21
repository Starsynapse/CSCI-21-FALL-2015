/*
 * Name        : SavingsAccount.h
 * Author      : Eduardo Zamora
 * Description : Class Header File
 */

#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H

#include "Bank.h"

class SavingsAccount : public Bank
{
 public:
  SavingsAccount(double minimum_money_ = 300.0, double percent_interest_ = 0.0);
  //default constructor
  ~SavingsAccount();
  //destructor
  
  void SetMinimumMoney(double minimum_money);
  //Mutator sets minimum money
  void SetPercentInterest(double percent_interest);
  //mutator sets the percent interest
  
  double GetMinimumMoney();
  //accessor returns the current minimum balance for an account
  double GetPercentInterest();
  //accessor returns the current percent interest
  
  bool CheckMinimumSavings();
  //checks if the minimum balance is available to not be charged a monthly fee
  void AddInterest();
  //Adds interest to the curent balance
  
 private:
  double minimum_money_;
  //the minimum balance for the savings account
  double percent_interest_;
  //the interest accrued
};

#endif