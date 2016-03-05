/*
 * Name        : money.cpp
 * Author      : Eduardo Zamora
 * Description : class function definitions
 */
 
#include "money.h"

// The Constructor, Accessors and Mutators have been defined for you
Money::Money(int dollars, int cents)
      : dollars_(dollars),
        cents_(cents) {
}

int Money::dollars() const {
    return dollars_;
}

int Money::cents() const {
    return cents_;
}

void Money::set_dollars(int dollars) {
  dollars_ = dollars;
}

void Money::set_cents(int cents) {
  cents_ = cents;
}

// This function definition provided as an example and is FULLY COMPLETE
const Money operator +(const Money& amount1, const Money& amount2) {
  // Get all the cents of object 1
  int all_cents1 = amount1.cents_ + amount1.dollars_ * 100;
  // Get all the cents of object 2
  int all_cents2 = amount2.cents_ + amount2.dollars_ * 100;
  // Add all the cents together
  int sum_all_cents = all_cents1 + all_cents2;
  // Handle the fact that money can be negative
  int abs_all_cents = abs(sum_all_cents);
  int final_dollars = abs_all_cents / 100;
  int final_cents = abs_all_cents % 100;
  // If the result of the operation was negative, negate final dollars and cents
  if (sum_all_cents < 0) {
    final_dollars = -final_dollars;
    final_cents = -final_cents;
  }
  return Money(final_dollars, final_cents);
}

// REST OF CLASS FUNCTION DEFINITIONS GO HERE
const Money operator -(const Money& amount1, const Money& amount2)
{
  // Get all the cents of object 1
  int all_cents1 = amount1.cents_ + amount1.dollars_ * 100;
  // Get all the cents of object 2
  int all_cents2 = amount2.cents_ + amount2.dollars_ * 100;
  // Subtract cents of object 2 from object 1
  int dif_all_cents = all_cents1 - all_cents2;
  // Handle the fact that money can be negative
  int abs_all_cents = abs(dif_all_cents);
  int final_dollars = abs_all_cents / 100;
  int final_cents = abs_all_cents % 100;
  // If the result of the operation was negative, negative final dollars and cents
  if (dif_all_cents < 0)
  {
    final_dollars = -final_dollars;
    final_cents = -final_cents;
  }
  return Money(final_dollars, final_cents);
}

bool operator ==(const Money &amount1, const Money &amount2)
{
  // Get all the cents of object 1
  int all_cents1 = amount1.cents_ + amount1.dollars_ * 100;
  // Get all the cents of object 2
  int all_cents2 = amount2.cents_ + amount2.dollars_ * 100;
  // Compares cents of both objects
  if (all_cents1 == all_cents2)
  {
    return true;
  }
  // Returns false if not equal
  else
  {
    return false;
  }
}

const Money operator -(const Money &amount)
{
  // Sets cents and dollars equal to negative cents and dollars respectively
  return Money (-amount.dollars(), -amount.cents());
}

ostream& operator <<(ostream &out, const Money &amount)
{
  // Create local variables for easy alterations
  int loc_cents = amount.cents_;
  int loc_dollars = amount.dollars_;
  
  //Checks if cents is negative and dollars exists
  if (loc_cents < 0 && loc_dollars != 0)
  {
    loc_cents = -loc_cents;
    out << "$" << loc_dollars << "." <<setw(2) << setfill('0') <<  loc_cents;
  }
  
  // Checks if cents is negative and dollars is zero
  else if (loc_cents < 0 && loc_dollars == 0)
  {
    loc_cents = -loc_cents;
    out << "$"  << "-" << loc_dollars << "." << setw(2) << setfill('0') <<  loc_cents;
  }
  
  // Any other combination
  else
  {
    out << "$" << loc_dollars << "." <<setw(2) << setfill('0') <<  loc_cents;
  }
  return out;
}