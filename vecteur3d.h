#pragma once
class vecteur3d
{
	float x;
	float y; 
	float z;
public:
	//vecteur3d();//Constructeur 
	vecteur3d(float X = 0.0, float Y = 0.0, float Z = 0.0)//Asignation
	{
		x = X;
		y = Y;
		z = Z;
	}
	~vecteur3d();
};

