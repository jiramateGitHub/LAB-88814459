#include <iostream>
#include "Date.h"
#include "Person.h"
#include "TeacherAssistance.h"
#include "Teacher.h"
#include "Student.h"
#include "Course.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	Date d;
	d.setDate(15,2,1992);
	TeacherAssistance ta("Mary","Jane",20,35);
	ta.setDate(d);
	ta.print();
	return 0;
}
