#pragma once
#include "Compte.h"
#include "Client.h"
#include<assert.h>
namespace Banque {
class Compte_Courant :
    public Compte
{
public:
    Compte_Courant(Client *prop,Devise *m,Devise *d);
    bool retirerArgent(Devise* montant) override;
private:
    Devise* decouvert;

};
}

