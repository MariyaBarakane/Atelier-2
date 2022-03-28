#include "Compte_Payant.h"

Banque::Compte_Payant::Compte_Payant(Client* prop, Devise* m, double p)
    :Compte(prop, m)
{
    this->por = p;
}

bool Banque::Compte_Payant::retirerArgent(Devise* montant)
{
   
    Devise  D(*montant + (*montant * this->por));
    return this->Compte::retirerArgent(&D);
}
