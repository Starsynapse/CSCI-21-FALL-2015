/*
 * Name        : ATM.cpp
 * Author      : Eduardo Zamora
 * Description : ATM function
 */

#include "Bank.cpp"//for some reason it wouldn't work with the .h files
#include "SavingsAccount.cpp"
#include "CreditCardAccount.cpp"
#include "CheckingAccount.cpp"
/*
#include "Bank.h"
#include "SavingsAccount.h"
#include "CreditCardAccount.h"
#include "CheckingAccount.h"
*/

int main()
{
  SavingsAccount Eduardo_SA;
  CreditCardAccount Eduardo_CR;
  CheckingAccount Eduardo_CH;
  
  string username;
  int pin = 99999;
  bool pin_check;
  double money_ammount;
  
  cout << "Welcome to Bank of Chase Fargo!" << endl;
  cout << "What is you name?" << endl;
  
  cin >> username;
  Eduardo_CH.SetName(username);
  
  cout << "Welcome, " << Eduardo_CH.GetName() << ", to Bank of Chase Fargo." << endl;
  cout << "According to our records you are new to this bank. Therefore we will start " << endl;
  cout << "by creating a pin number for your account. Please select a 4 digit pin number." << endl;
  
  while (pin > 9999 || pin < 0)
  {
    cin >> pin;
    Eduardo_CH.SetPin(pin);
    
    if (pin > 9999 || pin < 0)
    {
      cout << "Please select a positive 4 digit pin number." << endl;
    }
  }
  
  cout << "You have set your pin to " << Eduardo_CH.GetPin() << endl;
  cout << "To continue and access your account please enter your newly created pin number." << endl;
  
  while (pin_check == false)
  {
    cin >> pin;
    pin_check = Eduardo_CH.CheckPin(pin);
    
    if (pin_check == false)
    {
      cout << "That pin number is not correct." << endl;
    }
  }
  
  cout << "Now that you have access to your account you can now deposit and withdraw money." << endl;
  cout << "Checking Account balance is: $" << Eduardo_CH.GetMoney() << endl;//these were working before!
  cout << "Savings Account balance is: $" << Eduardo_SA.GetMoney() << endl;
  cout << "Credit Card Account balance is: $" << Eduardo_CR.GetMoney() << endl;
  
  cout << "Lets try depositing money first since your bank accounts are currently empty." << endl;
  cout << "Lets start with depositing money in the Savings Account. Enter the ammount you wish to deposit." << endl;
  cout << "I would suggest more than $300 so you do not have to pay a monthly $10 fee.";
  
  cin >> money_ammount;
  Eduardo_SA.SetMoney(money_ammount);
  
  cout << "Checking Account balance: $" << Eduardo_SA.GetMoney() << endl;
  /*
  if (Eduardo_SA.CheckMinimumSavings() == false);
  {
    cout << "Congradulations on depositing money to your Savings Account." << endl;
    cout << "Though the ammount you entered is less than $300 and so you will be charged a monthly fee." << endl;
  }
  */
  
  
  return 0;
}