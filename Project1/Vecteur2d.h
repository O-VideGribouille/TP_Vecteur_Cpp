#pragma once
#include <string>
#include <iostream>

using namespace std;


class CVect2D { //cr�ation d'une classe
private: //donn�es membres priv�es
	float f_x;
	float f_y;


public :

//Constructeur valeurs par d�fauts
	CVect2D();
//Cr�ation constructeur avec valeur par d�faut
//	CVect2D(float f_x, float f_y);

//Constructeur copie
	CVect2D(CVect2D& p);

//Destructeur
	~CVect2D();

	
};