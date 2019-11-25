//The user program that uses the class ClockType
#include <iostream>
#include "ClockType.h"
using namespace std;
int main()
{
	ClockType myClock;
	ClockType yourClock;
	int hours;
	int minutes;
	int seconds;
	myClock.setTime(5, 4, 30); 
	cout << "Line 2: myClock: "; 
	myClock.printTime();
	cout << endl; 
	cout << "Line 5: yourClock: "; 
	yourClock.printTime(); 
	cout << endl; 
	yourClock.setTime(5, 45, 16); 
	cout << "Line 9: After setting, yourClock: ";
	yourClock.printTime(); 
	cout << endl; 
	if (myClock.equalTime(yourClock)) 
		cout << "Line 13: Both times are equal." << endl; 
	else 
		cout << "Line 15: The two times are not equal." << endl; 
	cout << "Line 16: Enter the hours, minutes, and " << "seconds: ";
	cin >> hours >> minutes >> seconds; 
	cout << endl; 
	myClock.setTime(hours, minutes, seconds); 
	cout << "Line 20: New myClock: ";
	myClock.printTime(); 
	cout << endl; 
	myClock.incrementSeconds();
	cout << "Line 24: After incrementing myClock by " << "one second, myClock: "; 
	myClock.printTime(); 
	cout << endl; 
	myClock.getTime(hours, minutes, seconds); 
	cout << "Line 28: hours = " << hours
		<< ", minutes = " << minutes
		<< ", seconds = " << seconds << endl; 
	return 0;
}//end main
