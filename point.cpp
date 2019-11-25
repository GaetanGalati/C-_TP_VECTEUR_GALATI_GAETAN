#include "point.h"

point::point(int x, int y, int cpt)
{
	this->x = x;
	this->y = y;
	this->cpt++;//Auto incremntation a chaque creation de point 
}


point::~point()
{
}

