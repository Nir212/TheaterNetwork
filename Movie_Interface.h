#pragma once
#include <iostream>
#include <string>
using namespace std;

enum movieType{
	kids,
	horror,
	regular
};


class Movie_Interface
{
public:
	/*interface for the movie subclasses*/
	~Movie_Interface();

	virtual string getMovieName() const = 0;//returns the movie name
	virtual int getMovieCode() const = 0;//returns the movie code
	virtual int getMinAge() const = 0;//returns the movie minimum age
	virtual float getLength() const = 0;//returns the movie length
	virtual float getPrice() const = 0;//returns the movie price
	virtual movieType getMovieType() const = 0;//returns the movie type (kids horror or regular)
	virtual bool operator==(int code) const = 0;//check eqaulity by code.

};

