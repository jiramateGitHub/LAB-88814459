//*************************
// <Jiramate Phuaphan>
// Example: find function
//*************************
#include <iostream>
#include <string>
using namespace std;
int main() {
 string sentence = "Outside it is cloudy and warm."; 
 string str = "cloudy"; 
 string::size_type position; 
 cout << "Line 4: sentence = \"" << sentence << "\"" << endl; 
 cout << "Line 5: The position of \"is\" in sentence = "
 << static_cast<unsigned int> (sentence.find("is")) << endl;
 cout << "Line 6: The position of 's' in sentence = "
 << static_cast<unsigned int> (sentence.find('s')) << endl; 
 cout << "Line 7: The position of \"" << str << "\" in sentence = "
 << static_cast<unsigned int> (sentence.find(str)) << endl; 
 cout << "Line 8: The position of \"the\" in sentence = "
 << static_cast<unsigned int> (sentence.find("the")) << endl; 
 cout << "Line 9: The first occurrence of \'i\' in "
 << "sentence \n after position 6 = "
 << static_cast<unsigned int> (sentence.find('i', 6)) << endl; 
 position = sentence.find("warm"); 
 cout << "Line 11: " << "Position = " << position << endl; 
 return 0; 
}
