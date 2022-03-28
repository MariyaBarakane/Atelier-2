#include "Compte.h"
#include <iostream>
using namespace Banque;
int Compte::cpt = 0; 

Banque::Compte::Compte()
{
    
    this->Prop = 0;
    this->solde = 0;
}

Banque::Compte::Compte(Client *prop, Devise *solde)
{
    this->numcompte = cpt++;
    this->Prop = prop;
    this->solde = solde;
    this->historique = vector<Operation>();
}

bool Banque::Compte::retirerArgent(Devise *montant)
{
    if (*(this->solde) >= *(montant)) {
        *(this->solde) = *(this->solde) - *(montant);
        Operation op("-", montant);
        this->historique.push_back(op);  
        return true;
    }
    return false;
}

void Banque::Compte::deposerArgent(Devise* montant)
{
    *(this->solde) = *(this->solde) + *(montant);
    Operation op("+", montant);
    this->historique.push_back(op);
}

void Banque::Compte::operationscompte()
{
    for (int i = 0; i < this->historique.size(); i++) {
        this->historique[i].afficher();
    }
}

void Banque::Compte::consulterSolde() const
{
    std::cout << "le compte est: " << this->numcompte<< std::endl;

    this->solde->afficher();

}

bool Banque::Compte::transfererArgent(Compte *c, Devise* montant)
{
    if (this->retirerArgent(montant) == true) {
        c->deposerArgent(montant);
        return true;
    }
    return false;
}

bool Banque::Compte::checkdecouvert(Devise* montant, Devise* dec)
{
    return (*(this->solde) + *dec >= *montant);
}

void Banque::Compte::calculerinteret(double F)
{
    *(this->solde) = *(this->solde) + *(this->solde) * F;
}

bool Banque::Compte::checksolde(Devise* montant)
{
    return (*(this->solde) / 2 >= *(montant));
}

Banque::Compte::~Compte()
{
    
    Compte::cpt--;
    

    
}
