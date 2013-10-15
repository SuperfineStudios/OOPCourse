#include<string.h>
#include"Account.h"

Account::Account(char *fname, char *sname, int SIN, char *accounttype, int transactions, float balance)
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

}
float Account::WithdrawAmt(void);
{

}
float Account::getFinalBalance(void);
void Account::PrintStatement(void);
{
   //Printout of accountholder summary
   Account  acct(fname, sname, SIN, accounttype, transactions, balance);
   cout << endl << "Account Print Summary" << endl;
   cout << acct.getfirstname() << endl;
   cout << acct.getsurname() << endl;
   cout << acct.getsocialinsurance() << endl;
}
