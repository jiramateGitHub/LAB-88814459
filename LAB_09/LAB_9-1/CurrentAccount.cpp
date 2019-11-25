#include "CurrentAccount.h"

CurrentAccount::CurrentAccount()
{
	name = "";
}

int CurrentAccount::initial_value(string n,double m){
	name = n;
	if(m >= 2000){
		balance = m;
		cout << "Deposit " << balance << " Complete. " << endl;
		printInfo();
		return 1;
	}else{
		cout << "Can't Deposit " << m << endl;
	}
}

void CurrentAccount::withdraw(double m){
	if(m < balance && m < 500000){
		if(m >= 10000){
			balance -= m + (balance*0.012);
			cout << "Withdraw " << m << " | Fee " << (balance*0.012) << " Complete. " << endl;
		}else{
			balance -= m;
			cout << "Withdraw " << m << " Complete. " << endl;
		}
		
	}else{
		cout << "Can't Withdraw " << m << endl;
	}
	printInfo();
}
