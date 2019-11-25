//**************************************
//// <Jiramate Phuaphan>
//// Example: insert and replace functions
////**************************************
#include <iostream>
#include <string>
using namespace std;
int main() {
 string firstString = "Cloudy and warm."; 
 string secondString = "Hello there"; 
 string thirdString = "Henry is taking programming I."; 
 string str1 = " very "; 
 string str2 = "Lisa"; 
 cout << "Line 6: firstString = " << firstString << endl; //Line 6
 firstString.insert(10, str1); 
 cout << "Line 8: After insert; firstString = " << firstString
 << endl; 
 cout << "Line 9: secondString = " << secondString << endl; //Line 9
 secondString.insert(11, 5, '!'); 
 cout << "Line 11: After insert; secondString = " << secondString
 << endl; 
 cout << "Line 12: thirdString = " << thirdString << endl; //Line 12
 thirdString.replace(0, 5, str2); 
 cout << "Line 14: After replace, thirdString = "
 << thirdString << endl; 
 return 0; 
}