#include "Personnel.h"


Personnel::Personnel(int n)
{
    this->nbrMax = n;
    this->nbr = 0;

    tab = new Emploie * [nbrMax];

    for (int i = 0; i < nbrMax; i++)
    {
        tab[i] = nullptr;
    }
}

void Personnel::ajouterEmploye(Emploie* e)
{
    if (nbr < nbrMax && e != nullptr)
    {
        tab[nbr] = e;
        nbr++;
    }
    else
    {
        cout << "Impossible d'ajouter l'employe" << endl;
    }
}


double Personnel::sommeSalaires() const
{
    double somme = 0;

    for (int i = 0; i < nbr; i++)
    {
        somme = somme + tab[i]->calculer();
    }

    return somme;
}

Personnel::~Personnel()
{
    delete[] tab;
    tab = nullptr;
}

