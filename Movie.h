#pragma once
#include "Movie_Interface.h"

class Movie: 
	public Movie_Interface
{
public:
	Movie(string, int, float, float);

	string getMovieName() const;
	int getMovieCode() const;
	int getMinAge() const;
	float getLength() const;
	float getPrice() const;
	virtual movieType getMovieType() const;
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

