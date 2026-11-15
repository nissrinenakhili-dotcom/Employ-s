#include "Commercial.h"


Commercial::Commercial(string n, double s, double v, double t)
    : Emploie(n, s)
{
    this->ventes = v;
    this->taux = t;
}

void Commercial::mettreAJour(double v)
{
    this->ventes = v;
}

double Commercial::calculer() const
{
    //Salaire = Fixe + Commission
    return Emploie::calculer() +
        (this->ventes * this->taux) / 100;
}

void Commercial::afficher() const
{
    Emploie::afficher();

    cout << "Les ventes du dernier mois : "
        << ventes << endl;

    cout << "Le taux de commission : "
        << taux << "%" << endl;
}