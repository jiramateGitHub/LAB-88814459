#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H
#include <iostream>
#include <string>
using namespace std;
class BankAccount
{
	public:
		BankAccount();
		int initial_value(string n,double m);
		void deposit(double m);
		void withdraw(double m);
		void printInfo();
	protected:
		string name;
		double balance;
};

#endif
