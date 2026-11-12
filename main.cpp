#include <iostream>
#include "CompteBancaire.h"

int main()
{

	CompteBancaire compte("John Doe", 123456, 1000.0);
	
	compte.afficher();
	compte.deposer(500.0);
	compte.retirer(200.0);
	compte.afficher();
	return 0;

}

