#include <iostream>
#include "vecteur3d.h"
using namespace std;
int main()
{
	vecteur3d vect1 (0,0,0);
	vecteur3d vect2 (1,1,1);
	vect1.display();
	system("Pause");
	vect2.display();
	system("Pause");
	return 0;
}