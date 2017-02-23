#include "stdafx.h"
#include "KidsMovie.h"


KidsMovie::KidsMovie(string name, int minAge, int maxAge, float length, float price) : Movie(name, minAge, length, price)
{
	mType = kids;
	Movie::serial++;
	code = Movie::serial;
	this->maxAge = maxAge;
}

movieType KidsMovie::getMovieType()
{
	return mType;
}

int KidsMovie::getMaxAge()
{
	return maxAge;
}


KidsMovie::~KidsMovie()
{
}
