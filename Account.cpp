#include<iostream>
#include <string>
using namespace std;

class Account
{
 public:
  Account( int);
  void credit(int );
  void debit(int );
  int getAccountBalance();
 private:
  int accountBalance;
};
Account::Account( int balance)
{
 if(balance>=0)
  accountBalance=balance;
 else
 {
  accountBalance=0;
  cout<<"Initial balance was invalid."<<endl;
 }
}
void Account::credit( int balance)
{
 accountBalance = accountBalance + balance;
}
void Account::debit( int balance)
{
 if(accountBalance>=balance)
 {
  accountBalance = accountBalance - balance;
 }
 else
 {
  cout<<"Debit amount exceeded account balance."<<endl;
 }
}
int Account::getAccountBalance()
{
 return accountBalance;
}
int main()
{
 Account Account1(125);
 Account Account2(75);
 cout << "Account's Novan:"<< Account1.getAccountBalance()<< "\nAccount2's Novan: "<< Account2.getAccountBalance() << endl;
 Account1.credit(150);
 Account2.credit(70);
 cout << "Account's Fafa: "<< Account1.getAccountBalance()<< "\nAccount2's Fafa: "<< Account2.getAccountBalance() << endl;
 Account1.debit(100);
 Account2.debit(60);
 cout << "Account's Yusuf:"<< Account1.getAccountBalance()<< "\nAccount2's Yusuf: "<< Account2.getAccountBalance() << endl;
}


