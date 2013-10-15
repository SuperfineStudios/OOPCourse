#include <iostream>
#include "Account.h"
#include "account.cpp"
using namespace std;


int main()
{
   char fname[32];
   char sname[32];
   int SIN;
   
   cout << "Employee's First Name: ";
   cin >> fname;
   fflush(stdin);
   
   cout << endl << "Employee's Last ame: ";
   cin >> sname;
   fflush(stdin);
   
   cout << "Accountholder's SIN: " ;
   cin >> SIN;
   fflush(stdin);
   
   cout << acct.*getaccttype(); << endl;

   cout << endl;
   cout << "Deposit: " << flush;
   cin >> cashin;
   acct.DepositAmt(cashin);

   cout << endl;
   cout << "Withdraw: " << flush;
   cin >> cashout;
   cout << acct.WithdrawAmt(cashout);

   cout << endl;
   cout << endl << "Account Print Summary" << endl;
   cout << acct.getfirstname(fname) << endl;
   cout << acct.getsurname(sname) << endl;
   cout << acct.getsocialinsurance(SIN) << endl;
   cout << acct.getFinalBalance(casnhin, cashout) << endl;
   cout << acct.*getaccttype(); << endl;

   return (0);
}
