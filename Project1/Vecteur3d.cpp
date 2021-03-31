#include "Vecteur3d.h"
#include <string>
#include <iostream>

using namespace std;

CVect3D::CVect3D(float c3)
{
	this->f_z = c3;
}

//Constructeurs avec valeurs par défauts
CVect3D::CVect3D(float c1, float c2, float c3):CVect2D(f_x,f_y)
{
	this->f_z = c3;
}

//Constructeur de copie
CVect3D::CVect3D(CVect3D& v):CVect2D(v)
{
	this->f_z = v.f_z;
}

//Destructeur
CVect3D::~CVect3D()
{
}

// accesseur
float CVect3D::getZ()const
{
	return f_z;
}

//méthode amie indé teste 2 vecteurs sont identique
float coincide3d(const CVect3D& v3, const CVect3D& v4)
{
	if ((v3.f_x == v4.f_x) && (v3.f_y == v4.f_y) && (v3.f_z == v4.f_z))
		return 1;
	else return 0;
}


void CVect3D::affiche3d()
{
	cout << "< " << f_x << ", " << f_y << ", " << f_z << " > ";
}

CVect3D CVect3D::operator+(const CVect3D& v) const
{
	CVect3D v_tmp;
	v_tmp.f_x = this->f_x + v.f_x;
	v_tmp.f_y = this->f_y + v.f_y;
	v_tmp.f_z = this->f_z + v.f_z;

	return v_tmp;
}

CVect3D CVect3D::operator-(const CVect3D& v) const
{
	CVect3D v_tmp;
	v_tmp.f_x = this->f_x - v.f_x;
	v_tmp.f_y = this->f_y - v.f_y;
	v_tmp.f_z = this->f_z - v.f_z;

	return v_tmp;
}

CVect3D CVect3D::operator*(const CVect3D& v) const
{
	CVect3D v_tmp;
	v_tmp.f_x = this->f_x * v.f_x;
	v_tmp.f_y = this->f_y * v.f_y;
	v_tmp.f_z = this->f_z * v.f_z;

	return v_tmp;
}
