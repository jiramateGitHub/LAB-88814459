#ifndef SAVINGACCOUNT_H
#define SAVINGACCOUNT_H
#include "BankAccount.h"
class SavingAccount : public BankAccount
{
	public:
		SavingAccount();
		void postInterest(int month);
		void withdraw(double m);
};

#endif
