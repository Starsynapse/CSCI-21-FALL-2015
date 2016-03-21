/*
 * Name        : Bank.h
 * Author      : Eduardo Zamora
 * Description : Class Header File
 */

#ifndef BANK_H
#define BANK_H

#include <string>
#include <sstream>
#include <iostream>
using namespace std;

class Bank
{
 public:
  Bank(string name_ = "Name", int pin_ = 0000, int account_number_ = 000000, double money_ = 0.0);
  //default constructor
  ~Bank();
  //destructor
  
  void SetName(string name);
  //mutator to set the name
  void SetPin(int pin);
  //mutator to set the pin number
  void SetAccountNumber(int account_number);
  //mutator to set the account number
  void SetMoney(double money);
  //mutator sets the ammount of money in the account
  
  string GetName();
  //accessor gets the name saved to the account
  int GetPin();
  //accessor gets the pin# saved to the account
  int GetAccountNumber();
  //accessor gets the account number designated to the account
  double GetMoney();
  //accessor gets the totol ammount of money
  
  bool CheckPin(int pin);
  //checks if the pin number is correct
  void Deposit(double money);
  //mutator
  double Withdraw(double money);
  //accessor
  
 private:
  string name_;
  //name of account
  int pin_;
  //account pin for account access
  int account_number_;
  //account number
  double money_;
  //account balance
};

#endif