#include "stdafx.h"
#include "Screening.h"


Screening::Screening()
{
}

Screening::Screening(Movie& movie, Screening_Room& screening_Room, int time)
{
	this->movie = &movie;
	this->screening_Room = &screening_Room;
	this->seatArr = screening_Room.creatSeats();
	this->time = time;
	this->available_seats = screening_Room.getSeats();
	code = count++;
}

int Screening::count = 0;

Screening::~Screening()
{
}

int Screening::getMovieCode() const
{
	return movie->getMovieCode();
}

float Screening::getPrice() const
{
	return movie->getPrice();
}

void Screening::addSeat(Client& client, int row, int col)
{
	
	if (available_seats==0)
		throw 3;//screening is full
	available_seats--;
	if (!seatArr[row][col])
		seatArr[row][col] = true;
	else
		throw 4;//the spot is taken
}

int Screening::getTime() const
{
	return time;
}

const bool** Screening::getSeatArr() const
{
	return (const bool**) seatArr;
}

const int Screening::getCol() const
{
	return screening_Room->getCols();
}

const int Screening::getRow() const
{
	return screening_Room->getRows();
}

int Screening::getCode() const
{
	return code;
}

bool  Screening::operator==(int code) const
{
	return (this->code == code);
}