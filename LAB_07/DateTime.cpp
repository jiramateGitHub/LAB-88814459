#include "DateTime.h"

DateTime::DateTime()
{
	day = 0;
	month = 0;
	year = 0;
	hour = 0;
	minute = 0;
	posLate = 0;
}
	
void DateTime::setData(int d,int m,int y){
	day = d;
	month = m;
	year = y;
}

void DateTime::setTime(int h,int m){
	hour = h;
	minute = m;
}

void DateTime::setLate(int l){
	posLate = l;
}


int DateTime::getDay(){
	return day;
}

int DateTime::getMonth(){
	return month;
}

int DateTime::getyear(){
	return year;

}

int DateTime::getHour(){
	return hour;
}

int DateTime::getMinute(){
	return minute;
}

int DateTime::getPosLate(){
	return posLate;
}
