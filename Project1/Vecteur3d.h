#pragma once
#include <string>
#include <iostream>
//Il faut inclure Vecteur2d.h pour pouvoir en h�riter;
#include "Vecteur2d.h"
using namespace std;

class CVect3D : public CVect2D {
private : 
	float f_z;

public :
	//Constructeur valeurs par d�fauts
	CVect3D(float c1 = 0.2, float c2 = 5.0, float c3 = 3.0);


	//Constructeur copie
	CVect3D(CVect3D& v);

	//Destructeur
	~CVect3D();

	//accesseur
	float getZ()const;


	//M�thode amie ind� coincide3D
	friend float coincide3d(const CVect3D&, const CVect3D&);


	//M�thode affiche - visualiser la valeur des vecteurs
	void affiche3d();

	//Surcharge op�rateur 
		// +
	CVect3D operator + (CVect3D& v)const;

	// -

	CVect3D operator - (CVect3D& v)const;

	// *

	CVect3D operator * (CVect3D& v)const;

};