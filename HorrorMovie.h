#pragma once
#include "Movie.h"

enum hRate{
	lite = 1,
	scary = 2,
	terrifying = 3
};

class HorrorMovie :
	public Movie
{
public:
	HorrorMovie(string, int, float, float, hRate);

	movieType getMovieType() const;
	hRate getHorrorRate() const;

	~HorrorMovie();

private:
	hRate horrorRate;
};

