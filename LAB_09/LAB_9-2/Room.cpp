#include "Room.h"

Room::Room()
{
}

void Room::setRoom(int rn,double rf){
	roomNo = rn;
	roomFee = rf;
}

void Room::setDetail(string d){
	detail = d;
}

int Room::getRoomNo(){
	return roomNo;
}

double Room::getRoomFee(){
	return roomFee;
}

string Room::getDetail(){
	return detail;
}
