#pragma once
#include <math.h>

class Screening_Room
{
public:
	Screening_Room(int, int); // num of seats and num of rows
	~Screening_Room();

	int getRoomNum();
	int getSeats();
	int getRows();
	int getCols();
	bool ** creatSeats();
	bool operator==(int code);//check eqaulity by code.


private:
	int num_of_seats;
	int row;
	int col;
	int roomNum;
	static int count;
};

