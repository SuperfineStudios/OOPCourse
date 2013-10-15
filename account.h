#ifndef ACCOUNT_H
#define ACCOUNT_H

class Account
{
  char firstname[32];
  char surname[32];
  int sin;
  float balance;
  int accounttype;
  int transactions;

public:
  float DepositAmt(void);
  float WithdrawAmt(void);
  float getFinalBalance(void);
  void PrintStatement(void);
};
#endif
