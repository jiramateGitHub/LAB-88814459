//******************************
// <Jiramate Phuaphan>
//******************************
#include <iostream>
bool isVowel(char c);
using namespace std;
int main(){
	char c;
	cout << "Input : ";
	cin >> c;
	isVowel(c);
	if(isVowel(c)){
		cout << "Vowel";
	}else{
		cout << "No Vowel";
	}
	cout << endl;
}

bool isVowel(char c){
	if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c =='U'){
		return true;
	}else{
		return false;
	}
}
