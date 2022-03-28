#include "Compte_Epargne.h"

Banque::Compte_Epargne::Compte_Epargne()
{
}

Banque::Compte_Epargne::Compte_Epargne(Devise* S, Client* C, double I)
	:Compte(C,S)
{
	this->interet = I;

}

void Banque::Compte_Epargne::calculinteret()
{
	this->calculerinteret(this->interet);
}

bool Banque::Compte_Epargne::retirerArgent(Devise* montant)
{
	Compte_Epargne EP;
	if (this->checksolde(montant))
	{
		if (typeid(*this).name() == typeid(EP).name())
		{
			return this->Compte::retirerArgent(montant);
		}
		return true;
	}
	return false;
}