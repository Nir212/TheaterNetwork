#include "stdafx.h"
#include "Screening_Room.h"


Screening_Room::Screening_Room()
{
}

Screening_Room::Screening_Room(int num_of_seats)
{
	this->num_of_seats = num_of_seats;
	count++;
	code = count;
}

Screening_Room::~Screening_Room()
{
}

int Screening_Room::count = 0;

int Screening_Room::getCode()
{
	return code;
}

int Screening_Room::getSeats()
{
	return num_of_seats;
}