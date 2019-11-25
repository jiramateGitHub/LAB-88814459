#ifndef DATE_H
#define DATE_H

class Date
{
	public:
		Date();
		void setDate(int d,int m,int y);
		int getDay();
		int getMonth();
		int getYear();
	private:
		int day;
		int month;
		int year;
};

#endif
