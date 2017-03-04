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
	/*defines horror movie, inherents from Movie class*/
public:
	HorrorMovie(string, int, float, float, hRate);//initializing the horror movie with name, minimum age, length, price and rating.

	movieType getMovieType() const;//returns the movie type (horror)
	hRate getHorrorRate() const;//returns the movie rate

	~HorrorMovie();

private:
	hRate horrorRate;
};

