#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
  char firstname[32];
  char surname[32];
  int socialinsurance;
  float fbalance;
  char accttype;
  int ttransactions;

public:
  Account(char *fname, char *sname, int SIN, char *accounttype, int transactions, float balance);
  char *getfirstname(void);
  char *getsurame(void);
  int getsocialinsurance(void);
  float DepositAmt(void);
  float WithdrawAmt(void);
  float getFinalBalance(void);
  int gettransactions(void);
  char *getaccttype(void);
  void PrintStatement(void);
};
#endif
