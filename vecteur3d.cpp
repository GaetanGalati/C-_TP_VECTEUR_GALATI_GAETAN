#include "vecteur3d.h"



vecteur3d::vecteur3d(float X, float Y, float Z)
{
	x = X; 
	y = Y; 
	z = Z;
}

bool vecteur3d::coincidance(vecteur3d vect)
{
	if ((vect.x == x) && (vect.y == y) && (vect.z == z)) {
		return true;//Coincidance ! 
	}
	else {
		return false;//Pas de coincidance ! 
	}
	
}
