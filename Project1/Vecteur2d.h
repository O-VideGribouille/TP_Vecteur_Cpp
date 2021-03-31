#pragma once
#include <string>
#include <iostream>

using namespace std;


class CVect2D { //création d'une classe
private: //données membres privées
	float f_x;
	float f_y;


public :

//Constructeur valeurs par défauts
	CVect2D();
//Création constructeur avec valeur par défaut
//	CVect2D(float f_x, float f_y);

//Constructeur copie
	CVect2D(CVect2D& p);

//Destructeur
	~CVect2D();

	
};