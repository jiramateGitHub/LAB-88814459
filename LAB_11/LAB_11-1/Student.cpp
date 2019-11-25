#include "Student.h"

Student::Student()
{
	studentId = "";
	numOfCourse = 0;
	GPA = 0;
}

void Student::addCourse(Course c){
	myCourse[numOfCourse] = c;
	numOfCourse++;
}

void Student::print(){
	cout << "\t===========================================" << endl;
	cout << "\tID : " << studentId << endl;
	cout << "\tName : " << firstname << " " << lastname << endl;
	cout << "\t===========================================" << endl;
	cout << "\tName\t\tCredit\tGrade" << endl;
	cout << "\t-------------------------------------------" << endl;
	for(int i = 0;i < numOfCourse;i++){
		cout << "\t" << myCourse[i].getName() << "\t\t" << myCourse[i].getCredit() << "\t" << myCourse[i].getGrade();
		cout << endl;
	}
	cout << "\t===========================================" << endl;
	cout << "\tGPA : " << GPA << endl;
	cout << "\t===========================================" << endl;
}

void Student::calculateGPA(){
	double credit = 0;
	double grade[numOfCourse];
	
	for(int i = 0;i<numOfCourse;i++){
		if(myCourse[i].getGrade() == "A"){
			grade[i] = 4;
		}else if(myCourse[i].getGrade() == "B"){
			grade[i]  = 3;
		}else if(myCourse[i].getGrade() == "C"){
			grade[i]  = 2;
		}else if(myCourse[i].getGrade() == "D"){
			grade[i]  = 1;
		}else if(myCourse[i].getGrade() == "F"){
			grade[i]  = 0;
		}
		
		credit += myCourse[i].getCredit();
		GPA += myCourse[i].getCredit() * grade[i] ;
	}
	
	GPA = GPA / credit; 
}

void Student::setId(string id){
	studentId = id;
}
