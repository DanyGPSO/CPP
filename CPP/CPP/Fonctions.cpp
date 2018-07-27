#include "stdafx.h"
#include <iostream>

using namespace std;

void direBonjour()
// On d�clare la fonction void
{
	cout << "Bonjour !" << endl;
}

int ajouteDeux(int nombreRecu)
// On d�clare la fontion integer
{
	int valeur(nombreRecu + 2);

	return valeur;
	// On retoune la valeur du nombreRecu
}

int Fonctions()
{
	int a(2), b(2);
	b = ajouteDeux(b);
	// On declare des variables int
	// On execute la fonction avec la valeur

	direBonjour();
	//On execute la fonction void

	system("pause");
	return 0;
}