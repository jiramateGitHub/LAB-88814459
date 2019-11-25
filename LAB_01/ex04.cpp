#include<iostream>
using namespace std;
int main()
{
 int number,mod;
 cout << "Input Number (1000 - 9999) : ";
 cin >> number;
 cout << "Number Is : ";
 mod =  number%10;
 cout << mod;
 number = number - mod;
 number = number/10;
 mod =  number%10;
 cout << mod;
 number = number - mod;
 number = number/10;
 mod =  number%10;
 cout << mod ;
 number = number - mod;
 number = number/10;
 mod =  number%10;
 cout << mod << endl; 
 return 0;
}
