#pragma once
#include"Client.h"
#include"Devise.h"
#include"Operation.h"
#include<vector>
#include<iostream>
namespace  Banque {
class Compte
{
public: 
	Compte(); 
	Compte(Client *pro, Devise *solde);
	virtual bool retirerArgent(Devise *montant);
	void deposerArgent(Devise *montant);
	void operationscompte();
	void consulterSolde() const; 
	bool transfererArgent(Compte *c, Devise* montant);
	bool checkdecouvert(Devise* montant, Devise* dec);
	void calculerinteret(double F);
	bool checksolde(Devise* montant);
	~Compte(); //destructeur 
private: 
	static	int cpt;
	int numcompte; 
	Client* Prop;  // 
	Devise* solde;
	vector<Operation> historique;
	
};
};
