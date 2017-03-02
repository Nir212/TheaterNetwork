#pragma once
#include "Movie_Interface.h"
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
	int getMovieCode() const;//get the movie code
	float getPrice() const;//get a single ticket price
	void addSeat(Client& client, int row, int col);//add a single seat to the screening
	int getTime() const;
	const bool** getSeatArr() const;//get the seat array.
	const int getCol() const;//get the number of columns in the screening room.
	const int getRow() const;//get the number of rows in the screening room.
	int getCode() const;//get the screening code.
	bool operator==(int code) const;//check eqaulity by code.
private:
	bool ** seatArr;//seat managment array;
	Movie* movie;//the movie
	Screening_Room* screening_Room;//the scrrening room
	int time;//the screening hour
	int available_seats;//number of available seats
	int code;//the screening code.
	static int count;//counts how many screenings so far.
};

