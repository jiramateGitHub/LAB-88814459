//***********************************
// Author: <Jiramate Phuaphan>
// Example I/O Stream 1
//***********************************
using namespace std;
#include <iostream>
int main() {
 cout << "Start example 4" << endl
 << "Welcome to I/O example" << endl;
 int hours = 14;
 double rate = 80.25;
 cout << " Line 13-14: hours = " << hours
 << ", rate = " << rate; 
 cout << ", pay = " << hours * rate
 << endl << endl; 
 cout << "Line 15: Enter hours and rate "; 
 cin >> hours >> rate; 
 cout << "Line 17-18: hours = " << hours
 << ", rate = " << rate; 
 cout << ", pay = " << hours * rate
 << endl << endl; 
 return 0;
}