//***********************************
// Author: <Jiramate Phuaphan>
// Example block of statement
//***********************************
using namespace std;
#include <iostream>
int main() {
 double a; 
 cout << "Enter double number ";
 cin >> a; 
 cout << "Line 12: Your variable a = " << a << endl;
 { 
 int a = 10; 
 cout << "Line 15: Local a = " << a << endl; 
 } 
 cout << "Line 17: Your variable a = " << a << endl; 
 { 
 cout << "Line 19: Local second block a = " << a << endl; 
 } 
}
