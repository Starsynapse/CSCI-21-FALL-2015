/*
 * Name        : SavingsAccount.cpp
 * Author      : Eduardo Zamora
 * Description : class function definitions
 */
 
#include "SavingsAccount.h"

SavingsAccount::SavingsAccount(double minimum_money_, double percent_interest_)
{
  //nothing
}

SavingsAccount::~SavingsAccount()
{
  //probably nothing
}

void SavingsAccount::SetMinimumMoney(double minimum_money)
{
  minimum_money_ = minimum_money;
}

void SavingsAccount::SetPercentInterest(double percent_interest)
{
  percent_interest_ = percent_interest;
}

double SavingsAccount::GetMinimumMoney()
{
  return minimum_money_;
}

double SavingsAccount::GetPercentInterest()
{
  return percent_interest_;
}

bool SavingsAccount::CheckMinimumSavings()
{
  if(GetMoney() <= minimum_money_)
  {
    return true;
  }
  
  else
  {
    return false;
  }
}

void SavingsAccount::AddInterest()
{
  SetMoney(GetMoney() * percent_interest_);
}