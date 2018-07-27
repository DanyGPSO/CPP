#include "stdafx.h"
#include <iostream>
#include <string>

using namespace std;
//Utilisation de std, cout, endl

int mainVariables()
{
	int const nonModifiable(0);
	//Variable constante qui n'est pas modifiable

	int a(10), b(15);
	b = a;
	//On change la valeur de la variable b pour qu'elle soit egale a a


	int nombresEcrans(254);
	int nombresPC(450);
	//Variables type Integer

	int& maReferance(nombresEcrans);
	//Refrance sur une variable utilisation de deux partie du programme

	double nombrePi(3.14);
	//Variable Double (avec des d�cimales)

	bool estEtein(true);
	//Boolean vrai ou faux

	char lettre('a');
	//Charactere

	string nomUtilisateur("Dany OUARAS");
	//Chaine de charactere

	std::cout << nombresEcrans << endl;
	//On affiche une variable dans la console

	nombresEcrans++;
	//On rajoute +1 a la variable

	std::cout << nombresEcrans << endl;

	system("pause");
	return 0;
}
