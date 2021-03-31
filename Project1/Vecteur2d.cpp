#include "Vecteur2d.h"

//Constructeurs avec valeurs par défauts
CVect2D::CVect2D(float c1, float c2)
{
	this->f_x = c1;
	this->f_y = c2;
}

//destructeur
CVect2D::~CVect2D()
{

}

//Constructeur de copie
CVect2D::CVect2D(CVect2D& p)
{
	this->f_x = p.f_x;
	this->f_y = p.f_y;
}

//Accesseur
float CVect2D::getX()
{
	return f_x;
}

float CVect2D::getY()
{
	return f_y;
}

CVect2D CVect2D::additvect(CVect2D&v)
{
	CVect2D rslt;
	rslt.f_x = f_x + v.f_x;
	rslt.f_y = f_y + v.f_y;

	return rslt;
}

CVect2D CVect2D::soustvect(CVect2D&v)
{
	CVect2D rslt;
	rslt.f_x = f_x - v.f_x;
	rslt.f_y = f_y - v.f_y;

	return rslt;
}

float CVect2D::prodscal(CVect2D&v)
{
	return  (v.f_x * f_x + v.f_y + f_y );
}

