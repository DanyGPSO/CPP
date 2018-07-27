#include "stdafx.h"
#include <iostream>

using namespace std;

int Boucles()
{
	int ageUtilisateur(-1);
	int compteur(0);

	while (ageUtilisateur < 0)
	//Tant que ageUtilisateur est inferieur a 0 on continue
	{
		cout << "Quel age avez-vous ? : " << endl;
		cin >> ageUtilisateur;
	}

	cout << "Merci, vous avez : " << ageUtilisateur << " Ans" << endl;

	// ------------------------------------------------------------------- //

	do
	//On execute
	{
		cout << "Quel age avez-vous ? : " << endl;
		cin >> ageUtilisateur;

	} while (ageUtilisateur < 0);
	//Tant que ageUtilisateur est inferieur a 0

	cout << "Merci, vous avez : " << ageUtilisateur << " Ans" << endl;

	// ------------------------------------------------------------------- //

	for (compteur = 0; compteur < 10; compteur++)
		//Tant que compteur est pas egale a 10 and ajoute +1
	{
		cout << compteur << endl;;
	}

	system("pause");
	return 0;
}
