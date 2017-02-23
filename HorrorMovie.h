#pragma once
#include "Movie.h"

enum hRate{
	lite,
	scary,
	terrifying
};

class HorrorMovie :
	public Movie
{
public:
	HorrorMovie(string, int, float, float, hRate);

	hRate getHorrorRate();

	~HorrorMovie();

private:
	int horrorRate;
};

