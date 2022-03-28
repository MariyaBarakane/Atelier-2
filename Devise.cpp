#include "Devise.h"

Devise::Devise(double val)
{
	this->valeur = val;
}

bool Devise::operator>=(const Devise& d) const
{
	return (this->valeur >=d.valeur);
}

Devise Devise::operator-(const Devise& d)
{
	Devise res(this->valeur - d.valeur);
	return res;
}

Devise Devise::operator+(const Devise& d)
{
	Devise res(this->valeur + d.valeur);
	return res;
}

Devise Devise::operator*(double d)
{
	Devise res(this->valeur * d);
	return res;
}

Devise Devise::operator/(double d)
{
	Devise res(this->valeur / d);
	return res;
}

void Devise::afficher() const
{
	std::cout << this->valeur << std::endl;
}
