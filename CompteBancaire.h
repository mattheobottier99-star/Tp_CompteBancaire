#include <string>
using namespace std;

class compte_Bancaire 
{
private :
	std::string titulaire;
	double solde;
	int numero_compte;

public :
	compte_Bancaire(std::string titulaire, int numero_compte, double solde=0.0);
	void deposer(double montant);
	void retirer(double montant);
	void afficher() const;

};




