#include "BankAccount.h"

BankAccount::BankAccount()
{
	name = "";
}

int BankAccount::initial_value(string n,double m){
	name = n;
	if(m >= 500){
		balance = m;
		cout << "Deposit " << balance << " Complete. " << endl;
		printInfo();
		return 1;
	}else{
		cout << "Can't Deposit " << m << endl;
	}
}

void BankAccount::deposit(double m){
	balance += m;
	cout << "Deposit " << m << " Complete. " << endl;
	printInfo();
}

void BankAccount::withdraw(double m){
	if(m < balance){
		balance -= m;
		cout << "Withdraw " << m << " Complete. " << endl;
	}else{
		cout << "Can't Withdraw " << m << endl;
	}
	printInfo();
}

void BankAccount::printInfo(){
	cout << "Name : " << name << " | Balance : " << balance << endl;
}



