#include<string.h>
#include"Account.h"

Account::Account(char *fname, char *sname, int SIN, char *accounttype, int transactions, float balance)
{
   strcpy(szFName, FirstName);
   strcpy(szLName, LastName);
   nIncome = Income;
}

char *Employee::getFName(void)
{
   return szFName;
}

char *Employee::getLName(void)
{
   return szLName;
}

float Account::DepositAmt(void);
{

}
float Account::WithdrawAmt(void);
{

}
float Account::getFinalBalance(void);
void Account::PrintStatement(void);
