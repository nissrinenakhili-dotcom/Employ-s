#pragma once
#include <iostream>
using namespace std;

class Emploie
{
protected :
	string nom;
	const int matricule;
	double indice; 
	static float valAug;
	static int compt;
public:
	Emploie(string, double);
	virtual void afficher() const;
	virtual double calculer() const;
};

