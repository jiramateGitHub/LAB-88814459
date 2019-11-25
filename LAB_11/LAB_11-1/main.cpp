#include <iostream>
#include "Date.h"
#include "Person.h"
#include "TeacherAssistance.h"
#include "Teacher.h"
#include "Student.h"
#include "Course.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Student st;
	Course cs;
	st.setValue("David","Jame");
	st.setId("00001");
	
	cs.setValue("Math",3,40,45);
	cs.calculateGrade();
	st.addCourse(cs);
	
	cs.setValue("English",2,37,35);
	cs.calculateGrade();
	st.addCourse(cs);
	
	st.calculateGPA();
	st.print();
	return 0;
}
