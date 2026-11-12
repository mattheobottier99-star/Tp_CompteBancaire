#include <string>
#include "CompteBancaire.h"
#include <iostream>
using namespace std;

///constructeur

CompteBancaire::compte_Bancaire(std::string titulaire, int numero_compte, double solde)
	: titulaire(titulaire), numero_compte(numero_compte), solde(solde) {
	this->titulaire = titulaire;
	this->numero_compte = numero_compte;
	this->solde = solde;
}

/// destructeur

CompteBancaire::~compte_Bancaire() {

}


void CompteBancaire::deposer(double montant) {
	
	this->solde += montant;
	std::cout << "Dépôt de " << montant << " effectué. Nouveau solde : " << solde << std::endl;

}

void CompteBancaire::retirer(double montant) {
	this->solde -= montant;
	
}

void CompteBancaire::afficher() const {
	std::cout << "Titulaire : " << titulaire << std::endl;
	std::cout << "Numéro de compte : " << numero_compte << std::endl;
	std::cout << "Solde : " << solde << std::endl;
}


