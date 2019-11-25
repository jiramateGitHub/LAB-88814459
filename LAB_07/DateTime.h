#ifndef DATETIME_H
#define DATETIME_H
#include <iostream>
#include <string>
using namespace std;
class DateTime
{
	private:
		int day;
		int month;
		int year;
		int hour;
		int minute;
		int posLate;
	public:
		DateTime();
		void setData(int d,int m,int y);
		void setTime(int h,int m);
		void setLate(int l);
		int getDay();
		int getMonth();
		int getyear();
		int getHour();
		int getMinute();
		int getPosLate();
};

#endif
