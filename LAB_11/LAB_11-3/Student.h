#ifndef STUDENT_H
#define STUDENT_H

#include "Person.h"
#include "Course.h"
class Student : public Person
{
	public:
		Student();
		void addCourse(Course c);
		void print();
		void calculateGPA();
		void setId(string id);
	private:
		Course myCourse[10];
		string studentId;
		int numOfCourse;
		int index;
		double GPA;
		
};

#endif
