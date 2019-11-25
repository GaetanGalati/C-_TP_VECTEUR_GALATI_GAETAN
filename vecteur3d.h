#pragma once
class vecteur3d { 
	float x, y, z;   
public:    
	vecteur3d(float X=0, float Y=0, float Z=0) {//Construct
		x = X; 
		y = Y; 
		z = Z;
	}
	vecteur3d somme(vecteur3d &Vect1);//Calcule somme
	int prodscal(vecteur3d &Vect1);//Prod scalaire
	void display();//Affiche 
};

