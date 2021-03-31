#include "Vecteur2d.h"
#include <string>
#include <iostream>

using namespace std;

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
CVect2D::CVect2D(CVect2D& v)
{
	this->f_x = v.f_x;
	this->f_y = v.f_y;
}

//Accesseur
float CVect2D::getX()const
{
	return f_x;
}

float CVect2D::getY()const
{
	return f_y;
}
//addition vectorielle

/*CVect2D CVect2D::additvect(CVect2D&v)
{
	CVect2D rslt;
	rslt.f_x = f_x + v.f_x;
	rslt.f_y = f_y + v.f_y;

	return rslt;
}
//sousttraction vectorielle
CVect2D CVect2D::soustvect(CVect2D&v)
{
	CVect2D rslt;
	rslt.f_x = f_x - v.f_x;
	rslt.f_y = f_y - v.f_y;

	return rslt;
}*/

// produit scalaire de deux vecteurs
float CVect2D::prodscal(CVect2D&v)
{
	return  (v.f_x * f_x + v.f_y + f_y );
}

//méthode amie indé teste 2 vecteurs sont identique
float coincide2d(const CVect2D& v1, const CVect2D& v2)
{
	if ((v1.f_x == v2.f_x) && (v1.f_y == v2.f_y))
		return 1;
	else return 0;
}


void CVect2D::affiche()
{
	cout << "< " << f_x << ", " << f_y << " > ";
}


CVect2D CVect2D::operator+(CVect2D& v) const
{
	CVect2D v_tmp;
	v_tmp.f_x = this->f_x + v.f_x;
	v_tmp.f_y = this->f_y + v.f_y;

	return v_tmp;
}

CVect2D CVect2D::operator-(CVect2D& v) const
{
	CVect2D v_tmp;
	v_tmp.f_x = this->f_x - v.f_x;
	v_tmp.f_y = this->f_y - v.f_y;

	return v_tmp;
}

CVect2D CVect2D::operator*(CVect2D& v) const
{
	CVect2D v_tmp;
	v_tmp.f_x = this->f_x * v.f_x;
	v_tmp.f_y = this->f_y * v.f_y;

	return v_tmp;
}
