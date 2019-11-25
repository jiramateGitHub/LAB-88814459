#ifndef NURSE_H
#define NURSE_H
#include "Person.h"
class Nurse : public Person
{
	public:
		Nurse();
		void setDailyFee(double s);
		double getDailyFree();
	protected:
		double dailyFee;
};

#endif
