#include<iostream>
#include<string>
using namespace std;
int main()
{
 string fname,lname;
 char gender;
 float gpa;
 cout << "Input firstname :";
 cin >> fname;
 cout << "Input lastname :";
 cin >> lname;
 cout << "Input gender :";
 cin >> gender;
 cout << "Input GPA :";
 cin >> gpa;

 cout << "-------- Output --------" << endl;
 cout << "Name : " << fname << " " <<  lname << endl;
 cout << "Gender : " << gender << endl;
 cout << "GPA : " << gpa << endl;

 return 0;
}
