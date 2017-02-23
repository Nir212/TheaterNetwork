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
	Movie(string, int, float, float);

	string getMovieName();
	int getMovieCode();
	int getMinAge();
	float getLength();
	float getPrice();
	virtual movieType getMovieType() = 0;

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

