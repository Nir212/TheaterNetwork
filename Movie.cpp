#include "stdafx.h"
#include "Movie.h"

int Movie::serial = 0;

Movie::Movie(string name, int minAge, float length, float price)
{
	this->name = name;
	this->minAge = minAge;
	this->length = length;
	this->price = price;
}

string Movie::getMovieName()
{
	return name;
}

int Movie::getMovieCode()
{
	return code;
}

int Movie::getMinAge()
{
	return minAge;
}

float Movie::getLength()
{
	return length;
}

float Movie::getPrice()
{
	return price;
}

bool  Movie::operator==(int code)
{
	return (this->code == code);
}

Movie::~Movie()
{
}
