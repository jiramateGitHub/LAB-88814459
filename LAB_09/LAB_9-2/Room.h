#ifndef ROOM_H
#define ROOM_H
#include <iostream>
#include <string>
using namespace std;
class Room
{
	public:
		Room();
		void setRoom(int rn,double rf);
		void setDetail(string d);
		int getRoomNo();
		double getRoomFee();
		string getDetail();
	protected:
		int roomNo;
		double roomFee;
		string detail;
};

#endif
