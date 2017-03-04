#pragma once
#include "Movie.h"
class KidsMovie :
	public Movie
{
	/*defines kids movie, inherents from Movie class*/
public:

	KidsMovie(string, int, int, float, float);//initialize the kids movie with name, minimum and maximum age, length and price.

	movieType getMovieType() const;//returns the movie type (kids)
	int getMaxAge() const;//return the maximum age


	~KidsMovie();

private:
	int maxAge;

};

