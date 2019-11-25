#ifndef COURSE_H
#define COURSE_H
#include <iostream>
#include <string>
using namespace std;
class Course
{
	public:
		Course();
		void calculateGrade();
		void setValue(string n,int c,int m,int f);
		string getGrade();
		int getCredit();
		string getName();
	private:
		string name;
		int credit;
		int midterm;
		int final;
		int grade;
};

#endif
