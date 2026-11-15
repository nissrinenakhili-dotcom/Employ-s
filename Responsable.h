#pragma once
#include "Emploie.h"
class Responsable : public Emploie
{
private :
	Emploie** sub;
	int nbrSubmax;
	int nbr;
public :
	Responsable(string, double,int);
	void ajouterEmploye(Emploie* e);
	void afficher() const override;
	~Responsable();
};

