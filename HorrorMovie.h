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

	movieType getMovieType();
	hRate getHorrorRate();

	~HorrorMovie();

private:
	hRate horrorRate;
};

