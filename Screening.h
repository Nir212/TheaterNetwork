#pragma once
#include "Movie_Interface.h"
#include "Movie.h"
#include "Screening_Room.h"
#include "Client.h"

class Client;

class Screening
{
	/*the Screening class holds all the parameters for a specific screening.
	including the movie, screening room, seats availability and hour*/
public:
	Screening();
	Screening(Movie& movie, Screening_Room& screening_Room, int time);//initialize screening with a movie, screening room and hour.
	~Screening();
	int getMovieCode() const;//get the movie code
	float getPrice() const;//get a single ticket price
	void addSeat(Client& client, int row, int col);//add a single seat to the screening
	int getTime() const;//get the movie hour.
	const bool** getSeatArr() const;//get the seat placement.
	const int getCol() const;//get the number of columns in the screening room.
	const int getRow() const;//get the number of rows in the screening room.
	int getCode() const;//get the screening code.
	bool operator==(int code) const;//check eqaulity by code.
private:
	bool ** seatArr;//a boolean array representing each seat in the screening room with true for taken or false for available.;
	Movie* movie;//the movie
	Screening_Room* screening_Room;//the scrrening room
	int time;//the screening hour
	int available_seats;//number of available seats
	int code;//the screening code.
	static int count;//counts how many screenings so far.
};

