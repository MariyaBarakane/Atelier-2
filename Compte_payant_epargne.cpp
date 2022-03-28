#include "Compte_payant_epargne.h"

Banque::Compte_payant_epargne::Compte_payant_epargne(Devise* solde, Client* C, double P, double I)
	:Compte(C, solde),Compte_Payant(C, solde,P),Compte_Epargne(solde, C, I)
{

}

bool Banque::Compte_payant_epargne::retirerArgent(Devise* montant)
{
	if (this->Compte_Epargne::retirerArgent(montant))
	{
		return (this->Compte_Payant::retirerArgent(montant));
	}
	return false;
}
