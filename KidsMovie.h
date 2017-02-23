#pragma once
#include "Movie.h"
class KidsMovie :
	public Movie
{
public:

	KidsMovie(string, int, int, float, float);

	movieType getMovieType();
	int getMaxAge();


	~KidsMovie();

private:
	int maxAge;

};

