#include "Compte_Courant.h"

Banque::Compte_Courant::Compte_Courant(Client* prop, Devise* m, Devise* d)
	:Compte(prop,m)
{
	this->decouvert = d;
}

bool Banque::Compte_Courant::retirerArgent(Devise* montant)
{
	assert(this->checkdecouvert(montant, this->decouvert));
	return this->Compte::retirerArgent(montant);
}
