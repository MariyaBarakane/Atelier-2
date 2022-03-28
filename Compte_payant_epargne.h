#pragma once
#include "Compte_Epargne.h"
#include "Compte_Payant.h"
#include "Compte.h"
namespace Banque {
	class Compte_payant_epargne :public Compte_Payant, public Compte_Epargne
	{
	public: 
		Compte_payant_epargne(Devise* solde, Client* C,double P, double I);
		bool retirerArgent(Devise* montant) override;
	};
}

