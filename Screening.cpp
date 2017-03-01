#include "stdafx.h"
#include "Screening.h"


Screening::Screening()
{
	count++;
	code = count;
}

Screening::Screening(Movie& movie, Screening_Room& screening_Room, int time)
{
	this->movie = &movie;
	this->screening_Room = &screening_Room;
	this->seatArr = screening_Room.creatSeats();
	this->time = time;
	this->available_seats = screening_Room.getSeats();
	count++;
	code = count;
}

int Screening::count = 0;

Screening::~Screening()
{
}

int Screening::getMovieCode()
{
	return movie->getMovieCode();
}

float Screening::getPrice()
{
	return movie->getPrice();
}

void Screening::addSeat(Client& client, int row, int col)
{
	if (client.getAge() < movie->getMinAge())
		throw 0;//minimum age requirement
	if (available_seats==0)
		throw 1;//screening is full
	available_seats--;
	seatArr[row][col] = true;
}

int Screening::getTime()
{
	return time;
}

const bool** Screening::getSeatArr()
{
	return (const bool**) seatArr;
}

int Screening::getCode()
{
	return code;
}

bool  Screening::operator==(int code)
{
	return (this->code == code);
}