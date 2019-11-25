#pragma once
class vecteur3d { 
	float x, y, z;   
public:    
	vecteur3d(float c1 = 0.0, float c2 = 0.0, float c3 = 0.0) 
	{ 
		x = c1; 
		y = c2; 
		z = c3; 
	}
	//bool coincidance(vecteur3d &);

	vecteur3d &normax(vecteur3d vect, vecteur3d vect2);

};

