#include "Vecteur2d.h"
#include "Vecteur3d.h"
#include <string>
#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {
	//cout << "Hello";

	//initialisation des valeurs
	//CVect2D v1(5, 10), v2(3, 10), w; //coincide2d retourne 0; 
	//CVect2D v1(5, 10), v2(5, 10), w; // coincide2D retourne 1;

	CVect3D v3(5.3, 10, 0.5), v4(3, 10.2, 6), w2; //coincide2d retourne 0; 
	//CVect3D v3(5.3, 10, 0.5), v4(5.3, 10, 0.5), w2; // coincide2D retourne 1;

	


	//affichage des valeurs
//	cout << "v1 : "; v1.affiche(); cout << "\n";
//	cout << "v2 : "; v2.affiche(); cout << "\n";

	cout << "v3 : "; v3.affiche3d(); cout << "\n";
	cout << "v4 : "; v4.affiche3d(); cout << "\n\n";


	//valeur par défaut | w prendra la valeur des résultats
//	cout << "w : "; w.affiche(); cout << "\n";
	cout << "w2 : "; w2.affiche3d(); cout << "\n";
	
	// affichage résultat addition 
	//w = v1.additvect(v2);
	  //w = v1 + v2;
	  w2 = v3 + v4;
	//cout << "w = "; w.affiche(); cout << "\n";
	cout << "La somme est  "; w2.affiche3d(); cout << "\n";


	// affichage résultat soustraction
	//w = v1.soustvect(v2);
	//w = v1 - v2;
	w2 = v3 - v4;
	//cout << "w = "; w.affiche(); cout << "\n";
	cout << "la difference est "; w2.affiche3d(); cout << "\n";

	
	// affichage résultat produit scalaire
	//cout << "V1*V2 = " << v1.prodscal (v2) << "\n";
	//w = v1 * v2;
	w2 = v3 * v4;
	//cout << "V1*V2 = "; w.affiche(); cout << "\n";
	cout << "V3*V4 = "; w2.affiche(); cout << "\n";

	//affichage résultat méthode amie
	//float res = coincide2d(v1, v2);
	float res = coincide3d(v3, v4);
	cout << "\nLe resultat retourne la valeur :   " << res << "\n\n";

	// affichage égaliter
	

	


	


	

}