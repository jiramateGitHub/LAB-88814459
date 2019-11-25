#include <iostream>
#include <string>
#include "BankAccount.h"
#include "SavingAccount.h"
#include "CurrentAccount.h"
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	BankAccount ba1;
	cout << "-=== BankAccount ===-" << endl;
	if(ba1.initial_value("Jiramate Phuaphan",500) == 1){
		ba1.deposit(401);
		ba1.withdraw(100);
	}
	cout << endl;
	SavingAccount ba2;
	cout << "-=== SavingAccount ===-" << endl;
	if(ba2.initial_value("Jiramate Phuaphan",1000) == 1){
		ba2.postInterest(11);
		ba2.deposit(400001);
		ba2.withdraw(50001);
	}
	cout << endl;
	CurrentAccount ba3;
	cout << "-=== CurrentAccount ===-" << endl;
	if(ba3.initial_value("Jiramate Phuaphan",200001) == 1){
		ba3.deposit(10000);
		ba3.withdraw(1000);
	}
	return 0;
}
