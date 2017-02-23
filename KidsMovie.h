#pragma once
#include "Movie.h"
class KidsMovie :
	public Movie
{
public:

	KidsMovie(string, int, int, float, float);

	movieType getMovieType();
	string getMovieName();
	int getMovieCode();
	int getMinAge();
	float getLength();
	float getPrice();
	int getMaxAge();


	~KidsMovie();

private:
	int maxAge;

};

