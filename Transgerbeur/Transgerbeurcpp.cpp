// Date : 26/11/2024
// nom de l'utilisateur : XIONG Tom
//TP5 Struct enum union : Partie Transgerbeur


#include<iostream>


using namespace std;

//énumeration
enum EEtat {palette, rouleau };



//unions des éléments précédents
union UContenu;
 

int main()
{
	//affichage du nom du programme sur la console
	cout << "---------------Programme Transgerbeur------------------" << endl;

	//déclaration du tableau
	int Scasier[9] = { 1,2,3,4,5,6,7,8,9 };
	//declaration des variables
		int pX;
		int pY;
		int poids;
		char reference = 19;
		float longueur;
		int numero;
		

	//déinition des structures
		struct SPalette { int poids; char reference; };
		struct SRouleau { float longueur; int numero; };
		struct SCasier { int pX; int pY; };
	 




	


}

