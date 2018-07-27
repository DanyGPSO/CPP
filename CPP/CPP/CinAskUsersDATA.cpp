#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;

int mainCIN()
{
	cout << "Quel age avez-vous ?\n" << endl;

	string nomUtilisateur;
	int nombreEcrans;

	cin >> nombreEcrans;
	// On demande � l'utilisateur de rentrer une r�ponse

	cin.ignore();
	// A utiliser quand on utilise cin et getline

	getline(cin, nomUtilisateur);
	// On demande � l'utilisateur de rentrer une r�ponse (chaine de charact�re)

	cout << "\nVous vous appelez : " << nomUtilisateur << " et il y a " << nombreEcrans << " Ecrans." << endl;
	//On affiche la r�ponse de l'utilisateur

	system("pause");
	return 0;
}
