#include <iostream>
#include "Account.h"
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

   cout << endl;
   cout << "Employee's Income Raise: " << flush;
   cin >> Income;
   em.setIncomeRaise(Income);

   cout << endl;
   cout << endl << "Employee's Personal Information" << endl;
   cout << em.getFName() << endl;
   cout << em.getLName() << endl;
   cout << em.getIncome() << endl;

   return (0);
}
