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
  account(char *fname, char *sname, int SIN, char *accounttype, int transactions, float balance);
  float DepositAmt(void);
  float WithdrawAmt(void);
  float getFinalBalance(void);
  void PrintStatement(void);
};
#endif
