#include <iostream> 
#include <StudentTypes.h> 
using namespace std;
int main() {
	StudentType stdtype;
	string str,id,first,last;
	cout << "Input (ID firstname lastname): ";
	cin >> id >> first >> last;
	stdtype.SetStudentValueFromString(id,first,last);
	cout << "LongFormat  : " << stdtype.printLongFormat() << endl;
	cout << "ShortFormat : " << stdtype.printShortFormat();
}