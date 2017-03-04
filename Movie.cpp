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

string Movie::getMovieName() const
{
	return name;
}

int Movie::getMovieCode() const
{
	return code;
}

int Movie::getMinAge() const
{
	return minAge;
}

movieType Movie::getMovieType() const 
{ 
	return regular; 
}

float Movie::getLength() const
{
	return length;
}

float Movie::getPrice() const
{
	return price;
}

bool  Movie::operator==(int code) const
{
	return (this->code == code);
}

Movie::~Movie()
{
}
