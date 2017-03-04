#pragma once
#include "Movie_Interface.h"

class Movie: 
	public Movie_Interface
{
	/*Movie defines all the methods of the Movie_Interface and the fields for KidsMovie and HorrorMovie*/
public:
	Movie(string, int, float, float);//initialize movie with name, minimum age, length and price

	string getMovieName() const;//returns the movie name
	int getMovieCode() const;//returns the movie code
	int getMinAge() const;//returns the movie minimum age
	float getLength() const;//returns the movie length
	float getPrice() const;//returns the movie price
	virtual movieType getMovieType() const;//returns the movie type (kids horror or regular)
	bool operator==(int code) const;//check eqaulity by code.
	~Movie();

protected:
	static int serial;
	movieType mType;
	string name;
	int code;
	int minAge;
	float length;
	float price;

};

