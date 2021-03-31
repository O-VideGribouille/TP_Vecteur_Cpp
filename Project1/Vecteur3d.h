#pragma once
#include <string>
#include <iostream>
//Il faut inclure Vecteur2d.h pour pouvoir en hériter;
#include "Vecteur2d.h"
using namespace std;

class CVect3D : public CVect2D {
private : 
	float f_z;

public :
	//Constructeur valeurs par défauts
	CVect3D(float c3 = 3.0);
	CVect3D(float f_x, float f_y, float f_z);


	//Constructeur copie
	CVect3D(CVect3D& v);

	//Destructeur
	~CVect3D();

	//accesseur
	float getZ()const;


	//Méthode amie indé coincide3D
	friend float coincide3d(const CVect3D&, const CVect3D&);


	//Méthode affiche - visualiser la valeur des vecteurs
	void affiche3d();

	//Surcharge opérateur 
		// +
	CVect3D operator + (const CVect3D& v)const;

	// -

	CVect3D operator - (const CVect3D& v)const;

	// *

	CVect3D operator * (const CVect3D& v)const;

};