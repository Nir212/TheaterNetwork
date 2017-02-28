#pragma once
#include "Movie.h"
#include "Screening_Room.h"
#include "Client.h"
class Screening
{
public:
	Screening();
	Screening(Movie& movie, Screening_Room& screening_Room, int time);
	~Screening();
	int getMovieCode();
	float getPrice();
	void addSeat(Client& client);
	void addSeat(Client& client, int num);
	int getTime();

private:
	Movie* movie;
	Screening_Room* screening_Room;
	int time;
	int available_seats;
};

