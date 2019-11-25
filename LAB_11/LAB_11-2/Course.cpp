#include "Course.h"

Course::Course()
{
	name = "";
	credit = 0;
	midterm = 0;
	final = 0;
	grade = 0;
}

void Course::setValue(string n,int c,int m,int f){
	name = n;
	credit = c;
	midterm = m;
	final = f;
}

void Course::calculateGrade(){
	double sum = midterm + final;
	if(sum >= 80){
		grade = 4;
	}else if(sum >= 70){
		grade = 3;
	}else if(sum >= 60){
		grade = 2;
	}else if(sum >= 50){
		grade = 1;
	}else{
		grade = 0;
	}
}

string Course::getGrade(){
	if(grade == 4){
		return "A";
	}else if(grade == 3){
		return "B";
	}else if(grade == 2){
		return "C";
	}else if(grade == 1){
		return "D";
	}else if(grade == 0){
		return "F";
	}
}

int Course::getCredit(){
	return credit;	
}

string Course::getName(){
	return name;
}
