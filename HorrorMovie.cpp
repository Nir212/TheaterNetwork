#include "stdafx.h"
#include "HorrorMovie.h"


HorrorMovie::HorrorMovie(string name, int minAge, float length, float price, hRate horrorRate): Movie(name, minAge, length, price)
{
	mType = horror;
	Movie::serial++;
	code = Movie::serial;
	this->horrorRate = horrorRate;
}

movieType HorrorMovie::getMovieType() const
{
	return mType;
}

hRate HorrorMovie::getHorrorRate() const
{
	return horrorRate;
}


HorrorMovie::~HorrorMovie() 
{
}
