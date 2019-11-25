#ifndef CURRENTACCOUNT_H
#define CURRENTACCOUNT_H
#include "BankAccount.h"
class CurrentAccount : public BankAccount
{
	public:
		CurrentAccount();
		int initial_value(string n,double m);
		void withdraw(double m);
};

#endif
