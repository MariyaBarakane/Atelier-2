#pragma once
#include "Compte.h"
#include "Devise.h"
#include "Client.h"
namespace  Banque {
    class Compte_Epargne :
        public virtual Compte
    {
    private:
        double interet;
    public :
        Compte_Epargne();
        Compte_Epargne(Devise* S, Client* C, double I);
        void calculinteret();
        bool retirerArgent(Devise* montant);
    };
}

