#pragma once
#include "Movie.h"
class KidsMovie :
	public Movie
{
public:

	KidsMovie(string, int, int, float, float);

	movieType getMovieType() const;
	int getMaxAge() const;


	~KidsMovie();

private:
	int maxAge;

};

