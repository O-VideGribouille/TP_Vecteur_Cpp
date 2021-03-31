#include "Vecteur2d.h"

//Constructeurs avec valeurs par défauts
CVect2D::CVect2D()
{
	this->f_x = 15;
	this->f_y = 5;


}

/*
CVect2D::CVect2D(float f_x, float f_y)
{
	this->f_x = 
}
*/

CVect2D::~CVect2D()
{
	cout << "Destructeur";

	//delete[] this->f_x;
//	delete[] this->f_y;


}

CVect2D::CVect2D(CVect2D& p)
{
	this->f_x = p.f_x;
	this->f_y = p.f_y;
}