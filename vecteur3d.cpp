#include "vecteur3d.h"
#include <iostream>

using namespace std;


/*
vecteur3d::vecteur3d(float X, float Y, float Z)
{
	x = X; 
	y = Y; 
	z = Z;
}
*/
/*
bool vecteur3d::coincidance(vecteur3d & vect)
{
	if ((vect.x == x) && (vect.y == y) && (vect.z == z)) {
		return true;//Coincidance ! 
	}
	else {
		return false;//Pas de coincidance ! 
	}
}*/



vecteur3d * vecteur3d::normax(vecteur3d *vect, vecteur3d *vect2)
{
	float nVect1 = vect->x * vect->x + vect->y * vect->y + vect->z * vect->z;
	float nVect2 = vect2->x * vect2->x + vect2->y * vect2->y + vect2->z * vect2->z;
	if (nVect1 > nVect2) {
		std::cout << "Le premier est plus grand\n";
	}
	else {
		std::cout << "Le second est plus grand\n";
	}
}
