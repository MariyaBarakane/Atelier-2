// G3app.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
#include <iostream>
#include "Compte.h"
#include "Compte_Epargne.h"
#include "Compte_Payant.h"
#include "Compte_payant_epargne.h"
using namespace Banque;
using namespace std;
int main()
{
 

    Devise* D = new Devise(10000);
    Devise* M = new Devise(4000);
    Devise* Ma = new Devise(1000);
    Client* C = new Client("cl", "cl", "cl");
    Devise* M2 = new Devise(1000);
    Client* A= new Client("cl", "cl", "cl");
    Devise* M1 = new Devise(2000);
    Client* B = new Client("cl", "cl", "cl");
    Compte* Ca = new Compte(A, M);
    Compte_payant_epargne* CPE = new Compte_payant_epargne(D, C, 0.5, 0.6);
    Compte_Payant* CP = new Compte_Payant(A, M, 0.5);
    Compte_Epargne* CE = new Compte_Epargne(M1,B, 0.3);
   
    Ca->retirerArgent(M1);
    Ca->deposerArgent(M1);
    Ca->operationscompte();

    CP->deposerArgent(M1);
    CP->retirerArgent(M1);
    CP->operationscompte();

    CE->deposerArgent(M1);
    CE->retirerArgent(M2);
    CE->operationscompte();

    CPE->deposerArgent(M1);
    CPE->retirerArgent(Ma);
    CPE->consulterSolde();

    
  
    CPE->operationscompte();
    
    
}

