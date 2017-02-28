#include "stdafx.h"
#include "Screening.h"


Screening::Screening()
{
}

Screening::Screening(Movie& movie, Screening_Room& screening_Room, int time)
{
	this->movie = &movie;
	this->screening_Room = &screening_Room;
	this->time = time;
	this->available_seats = screening_Room.getSeats();
}

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

void Screening::addSeat(Client& client)
{
	if (client.getAge < movie->getMinAge)
		throw 0;
	if (available_seats==0)
		throw 1;
	available_seats--;
}
void Screening::addSeat(Client& client, int num)
{
	if (client.getAge < movie->getMinAge)
		throw 0;
	if (available_seats == 0)
		throw 1;
	available_seats -= num;
}
int Screening::getTime()
{
	return time;
}