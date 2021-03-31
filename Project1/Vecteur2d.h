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
	CVect2D(float c1 = 0.2, float c2 = 5.0);

//Constructeur copie
	CVect2D(CVect2D& p);

//Destructeur
	~CVect2D();

//Accesseur
	float getX();
	float getY();
	
	
	


//Op�rations usuelles 
	//addition vectorielle
	CVect2D additvect(CVect2D&);

	//sousttraction vectorielle
	CVect2D soustvect(CVect2D&);

	// produit scalaire de deux vecteurs
	float prodscal(CVect2D&);

	// produit vectoriel de deux vecteurs


	//M�thode ind� coincide2D


	//M�thode affiche - visualiser les r�sutat
};