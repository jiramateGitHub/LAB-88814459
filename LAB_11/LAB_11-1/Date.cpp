#include "Date.h"

Date::Date()
{
	day = 0;
	month = 0;
	year = 0;
}

void Date::setDate(int d,int m,int y){
	if(d <= 30 && m >=12 && y >= 2018){
		d = day;
		m = month;
		y = year;
	}
}

int Date::getDay(){
	return day;
}

int Date::getMonth(){
	return month;
}

int Date::getYear(){
	return year;
}

