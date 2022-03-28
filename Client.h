#pragma once
#include <string>
#include <iostream>
using namespace std;

class Client
{
public:
	Client();
	Client(string n, string p, string a);
	void affiche() const;
	~Client();
private:
	string nom;
	string prenom;
	string adresse;
};

