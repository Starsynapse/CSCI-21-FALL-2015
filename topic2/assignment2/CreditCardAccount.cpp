/*
 * Name        : CreditCardAccount.cpp
 * Author      : Eduardo Zamora
 * Description : class function definitions
 */
 
#include "CreditCardAccount.h"

CreditCardAccount::CreditCardAccount(double money_borrowed_)
{
  //empty
}

CreditCardAccount::~CreditCardAccount()
{
  //nope
}

void CreditCardAccount::SetMoneyBorrowed(double money_borrowed)
{
  SetMoney(GetMoney() + money_borrowed);
}

double CreditCardAccount::GetMoneyBorrowed()
{
  return money_borrowed_;
}