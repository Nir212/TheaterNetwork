#include "stdafx.h"
#include "KidsMovie.h"


KidsMovie::KidsMovie(string name, int minAge, int maxAge, float length, float price) : Movie(name, minAge, length, price)
{
	mType = kids;
	code = Movie::serial;
	Movie::serial++;
	this->maxAge = maxAge;
}

movieType KidsMovie::getMovieType() const
{
	return mType;
}

int KidsMovie::getMaxAge() const
{
	return maxAge;
}


KidsMovie::~KidsMovie()
{
}
