#pragma once
#include"Devise.h"
#include <iostream>
using namespace std;
class Operation
{
public:
	Operation(string lib, Devise* m);
	void afficher() const;


private:
	static int cpt;
	int numOperation;
	string libelle;
	Devise* montant;
};

