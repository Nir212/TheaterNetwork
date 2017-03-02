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
	~Movie_Interface();

	virtual string getMovieName() const = 0;
	virtual int getMovieCode() const = 0;
	virtual int getMinAge() const = 0;
	virtual float getLength() const = 0;
	virtual float getPrice() const = 0;
	virtual movieType getMovieType() const = 0;
	virtual bool operator==(int code) const = 0;//check eqaulity by code.

};

