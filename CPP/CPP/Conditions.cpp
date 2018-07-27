#include "stdafx.h"
#include <iostream>

/*
@Params (! = Non)
@Params (|| = OU)
@Params (&& = ET)
*/


using namespace std;

int Conditions()
{
	int nbEnfants(1);

	switch (nbEnfants)
	//Switch condition uniquement pour les egalites est == a
	{
	case 0:
		cout << "Vous n'avez pas d'enfants !" << endl;
		break;

	case 1:
		cout << "Vous avez 1 enfant " << endl;
		break;

	default:
		cout << "C'est bon ?" << endl;
		break;
	}

	//------------------------------------------------------------------------------//

	if (nbEnfants == 0)
	//Condition if nbEnfants est egale a 0
	{
		cout << "Vous avez des enfants !" << endl;
	}
	else if (nbEnfants == 1)
	//Ou est egale a 1
	{
		cout << "Vous avez 1 enfant !" << endl;
	}
	else
	//Sinon
	{
		cout << "Vous n'avez pas d'enfants !" << endl;
	}

	system("pause");
	return 0;
}
