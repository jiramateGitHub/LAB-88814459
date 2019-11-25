#include "Person.h"
#include "Student.h"
#include <iostream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Person p;
	Student s1,s2;
	
	s1.setId(60160157);
	s1.setName("Jiramate","Phuaphan");
	s1.print();
	
	s2.setId(12345678);
	s2.setName("test","test");
	s2.print();
	
	if(s1.checkEqual(s2) == 1){
		cout << "Equal";
	}else{
		cout << "Not Equal";
	}
	
	

	
	return 0;
}
