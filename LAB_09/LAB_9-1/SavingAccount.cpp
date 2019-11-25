#include "SavingAccount.h"

SavingAccount::SavingAccount()
{
	name = "";
}

void SavingAccount::postInterest(int month){
	balance += balance * (0.02/12) * month;
	cout << "postInterest = " << month << " month | +"<< (0.02/12) * month  << endl;
	printInfo();
}

void SavingAccount::withdraw(double m){
	if(m < balance && m <= 50000){
		balance -= m;
		cout << "Withdraw " << m << " Complete. " << endl;
	}else{
		cout << "Can't Withdraw " << m << endl;
	}
	printInfo();
}
