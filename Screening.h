#pragma once
#include "Movie.h"
#include "Screening_Room.h"
#include "Client.h"

class Client;

class Screening
{
public:
	Screening();
	Screening(Movie& movie, Screening_Room& screening_Room, int time);
	~Screening();
	int getMovieCode();//get the movie code
	float getPrice();//get a single ticket price
	void addSeat(Client& client, int row, int col);//add a single seat to the screening
	int getTime();
	const bool** getSeatArr();//get the seat array.
private:
	bool ** seatArr;//seat managment array;
	Movie* movie;//the movie
	Screening_Room* screening_Room;//the scrrening room
	int time;//the screening hour
	int available_seats;//number of available seats
};

