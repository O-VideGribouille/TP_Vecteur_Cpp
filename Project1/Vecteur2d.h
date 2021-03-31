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
	CVect2D(float c1 = 0.2, float c2 = 5.0);

//Constructeur copie
	CVect2D(CVect2D& p);

//Destructeur
	~CVect2D();

//Accesseur
	float getX();
	float getY();
	
	
	


//Opérations usuelles 
	//addition vectorielle
	CVect2D additvect(CVect2D&);

	//sousttraction vectorielle
	CVect2D soustvect(CVect2D&);

	// produit scalaire de deux vecteurs
	float prodscal(CVect2D&);

	// produit vectoriel de deux vecteurs


	//Méthode indé coincide2D


	//Méthode affiche - visualiser les résutat
};