/*
 * Name        : Bank.cpp
 * Author      : Eduardo Zamora
 * Description : class function definitions
 */
 
#include "Bank.h"

Bank::Bank(string name, int pin, int account_number, double money)
{
  //nothing!
}

Bank::~Bank()
{
  //nothing
}

void Bank::SetName(string name)
{
  name_ = name;
}

void Bank::SetPin(int pin)
{
  pin_ = pin;
}

void Bank::SetAccountNumber(int account_number)
{
  account_number_ = account_number;
}

void Bank::SetMoney(double money)
{
  money_ = money;
}

string Bank::GetName()
{
  return name_;
}

int Bank::GetPin()
{
  return pin_;
}

int Bank::GetAccountNumber()
{
  return account_number_;
}

double Bank::GetMoney()
{
  return money_;
}

bool Bank::CheckPin(int pin)
{
  if(pin == pin_)
  {
    return true;
  }
  
  else
  {
    return false;
  }
}

void Bank::Deposit(double money)
{
  money_ = money_ + money;
}

double Bank::Withdraw(double money)
{
  money_ = money_ - money;
  return money;
}