#include "stdafx.h"
#include "Screening_Room.h"

int Screening_Room::count = 0;


Screening_Room::Screening_Room(int num_of_seats, int row)
{
	this->num_of_seats = num_of_seats;
	this->row = row;
	this->col = num_of_seats / row;
	count++;
	roomNum = count;
}

int Screening_Room::getRoomNum()
{
	return roomNum;
}

int Screening_Room::getSeats()
{
	return num_of_seats;
}

bool ** Screening_Room::creatSeats()
{
	bool ** seatsArr;
	seatsArr = new bool*[row];
	for (int i = 0; i < row; i++)
		seatsArr[i] = new bool[col];
	
	for (int i = 0; i < row; i++)
	{
		for (int j = 0; i < col; i++)
		{
			seatsArr[i][j] = false;
		}

	}

	return seatsArr;
}

int Screening_Room::getRows()
{
	return row;
}

int Screening_Room::getCols()
{
	return col;
}

bool  Screening_Room::operator==(int code)
{
	return (this->roomNum == code);
}

Screening_Room::~Screening_Room()
{
}