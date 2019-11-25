#ifndef BILL_H
#define BILL_H
#include "Room.h"
#include "Nurse.h"
class Bill
{
	public:
		Bill();
		void setDay(int d);
		void setRoom(Room r);
		void setNurse(Nurse n);
		void print();
	protected:
		int day;
		Room rm;
		Nurse ns;
};

#endif
