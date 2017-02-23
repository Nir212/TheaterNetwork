#include "stdafx.h"
#include "HorrorMovie.h"


HorrorMovie::HorrorMovie(string name, int minAge, float length, float price, hRate horrorRate)
{
	mType = horror;
	Movie::serial++;
	code = Movie::serial;
	this->name = name;
	this->minAge = minAge;
	this->length = length;
	this->price = price;
	this->horrorRate = horrorRate;
}


HorrorMovie::~HorrorMovie()
{
}
