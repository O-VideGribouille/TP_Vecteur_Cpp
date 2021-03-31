#include "Vecteur2d.h"
#include <string>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	//cout << "Hello";

	//initialisation des valeurs
	CVect2D v1(5, 10), v2(3, 10), w; //coincide2d retourne 0; 
	//CVect2D v1(5, 10), v2(5, 10), w; // coincide2D retourne 1;
	
	//affichage des valeurs
	cout << "v1 : "; v1.affiche(); cout << "\n";
	cout << "v2 : "; v2.affiche(); cout << "\n";
	//valeur par défaut | w prendra la valeur des résultats
	cout << "w : "; w.affiche(); cout << "\n";
	
	// affichage résultat addition 
	w = v1.additvect(v2);
	cout << "w = "; w.affiche(); cout << "\n";
	
	// affichage résultat soustraction
	w = v1.soustvect(v2);
	cout << "w = "; w.affiche(); cout << "\n";
	
	// affichage résultat produit scalaire
	cout << "V1*V2 = " << v1.prodscal (v2) << "\n";

	//affichage résultat méthode amie
	float res = coincide2d(v1, v2);
	cout << "\nLe resultat retourne la valeur :   " << res;


	


	

}