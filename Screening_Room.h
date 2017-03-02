#pragma once
#include <math.h>

class Screening_Room
{
public:
	Screening_Room(int, int); // num of seats and num of rows
	~Screening_Room();

	int getRoomNum() const;
	int getSeats() const;
	int getRows() const;
	int getCols() const;
	bool ** creatSeats();
	bool operator==(int code) const;//check eqaulity by code.


private:
	int num_of_seats;
	int row;
	int col;
	int roomNum;
	static int count;
};

