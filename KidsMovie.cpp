#include "stdafx.h"
#include "KidsMovie.h"


KidsMovie::KidsMovie(string name, int minAge, int maxAge, float length, float price) : Movie()
{
	mType = kids;
	Movie::serial++;
	code = Movie::serial;
	this->name = name;
	this->minAge = minAge;
	this->maxAge = maxAge;
	this->length = length;
	this->price = price;
}

movieType KidsMovie::getMovieType()
{

}

string KidsMovie::getMovieName()
{

}

int KidsMovie::getMovieCode()
{

}

int KidsMovie::getMinAge()
{

}

float KidsMovie::getLength()
{

}

float KidsMovie::getPrice()
{

}

int KidsMovie::getMaxAge()
{

}


KidsMovie::~KidsMovie()
{
}
