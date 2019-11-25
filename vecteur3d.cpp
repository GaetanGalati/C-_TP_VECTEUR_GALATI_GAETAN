#include "vecteur3d.h"
#include <iostream>

using namespace std;


vecteur3d vecteur3d::somme(vecteur3d & Vect1)
{
	vecteur3d total;
	total.x = Vect1.x;
	total.y = Vect1.y;
	total.z = Vect1.z;
	//Ajout a la somme des coordonés X,Y et Z
	return total;
}

int vecteur3d::prodscal(vecteur3d & Vect1)
{
	int total;
	total = (Vect1.x * x) + (Vect1.y * y) + (Vect1.z * z);//Calcule de produit scalaire
	return  total;
}

void vecteur3d::display()
{
	cout << "< " << x << ", " << y << ", " << z <<" ";//Affichage
}


