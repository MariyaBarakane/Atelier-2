#include "Client.h"

Client::Client()
{
}

Client::Client(string n, string p, string a)
{
	this->nom = n;
	this->prenom = p;
	this->adresse = a;
}

void Client::affiche() const
{
	cout << "nom: " << this->nom << endl;
	cout << "prenom: " << this->prenom << endl;
	cout << "adresse: " << this->adresse << endl;
}

Client::~Client()
{
}
