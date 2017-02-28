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



private:
	int num_of_seats;
	int row;
	int col;
	int roomNum;
	static int count;

	// נדרש לכתוב פונקציה חדשה אשר תנהל את הקמת האולם
	// מחלקה זו תוכל להחזיר למחלקה של הצגה את הערכים הבאים:
	// מספר שורות, מספר עמודות ומצביע ** למערך דו מימדי המכיל מערך מאותחל
};

