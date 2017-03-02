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

	string getMovieName() const;
	int getMovieCode() const;
	int getMinAge() const;
	float getLength() const;
	float getPrice() const;
	virtual movieType getMovieType() const = 0;
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

