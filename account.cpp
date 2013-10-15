#include<string.h>
#include"Account.h"

Account::Account(char *fname, char *sname, int SIN, char[] *accounttype, int transactions, float balance, float cashin, float cashout)
{
   strcpy(firstname, fname);
   strcpy(surname, sname);
   socialinsurance = SIN;
   strcpy(accttype, accounttype);
   ttransactions = transactions;
   fbalance = balance;
}

char *Account::getFName(void)
{
   return firstame;
}

char *Employee::getLName(void)
{
   return surname;
}

int Account::getsocialinsurance(void)
{
   return socialinsurance;
}

float Account::DepositAmt(void);
{
   cout << "Enter deposit amount: ";
   cin >> cashin;
   return cashin;
}
float Account::WithdrawAmt(void);
{
   cout << "Enter withdrawal amount: ";
   cin >> cashout;
   return cashout;
}
float Account::getFinalBalance(void);
{
   balance = balance+cashin-cashout;
   return balance;
}
char[] Account:*getaccttype(void);
{
   cout << "What type of account do you use? Chequing or Savings?" << endl;
   cin >> accounttype;
   cout << accounttype;
}

void Account::PrintStatement(void);
{
   //Printout of accountholder summary
   Account  acct(fname, sname, SIN, accounttype, transactions, balance);
   cout << endl << "Account Print Summary" << endl;
   cout << acct.getfirstname() << endl;
   cout << acct.getsurname() << endl;
   cout << acct.getsocialinsurance() << endl;
   cout << acct.getFinalBalance() << endl;
   cout << acct.*getaccttype(void); << endl;
}
