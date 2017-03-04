#pragma once
#include <math.h>

class Screening_Room
{
	/*defines a screening room*/
public:
	Screening_Room(int, int); //initialize the screening room with num of seats and num of rows
	~Screening_Room();

	int getRoomNum() const;//returns the screening rooms code
	int getSeats() const;//returns the total number of seats in the screening room.
	int getRows() const;//return the number of rows.
	int getCols() const;//return the number of columns.
	bool ** creatSeats();//returns a boolean array representing each seat in the screening room.
	bool operator==(int code) const;//check eqaulity by code.


private:
	int num_of_seats;
	int row;
	int col;
	int roomNum;
	static int count;
};

