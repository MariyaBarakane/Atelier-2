#include "Operation.h"
int Operation::cpt = 0;
Operation::Operation(string lib, Devise* m)
{
	this->numOperation = ++Operation::cpt;
	this->libelle = lib;
	this->montant = m;
}

void Operation::afficher() const
{
	std::cout << this->numOperation << "|" << this->libelle;
	this->montant->afficher();
}
