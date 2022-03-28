#pragma once
#include "Compte.h"
namespace Banque{
class Compte_Payant :
    public virtual Compte
{private: 
    double por;
public :
    Compte_Payant(Client* prop, Devise* m, double p);
    bool retirerArgent(Devise* montant) override;
};
}

