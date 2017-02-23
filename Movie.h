#pragma once

#include <iostream>
#include <string>
using namespace std;

enum movieType{
	kids,
	horror
};

class Movie
{
public:
	Movie();

	virtual movieType getMovieType() = 0;
	virtual string getMovieName() = 0;
	virtual int getMovieCode() = 0;
	virtual int getMinAge() = 0;
	virtual float getLength() = 0;
	virtual float getPrice() = 0;

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

