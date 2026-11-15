#include "Responsable.h"

Responsable::Responsable(string n, double s, int nbrs) : Emploie(n, s)
{
    this-> nbrSubmax= nbrs;
    this->nbr = 0;
        sub = new Emploie * [nbrSubmax];
        for (int i = 0;i < nbrSubmax;i++) {
            sub[i] = nullptr;
        }
}

void Responsable::ajouterEmploye(Emploie* e)
{
    if (this->nbrSubmax > this->nbr && e!=nullptr) {
        sub[nbr] = e;
        nbr++;
    }
    else {
        cout << "impossible d'ajouter l'employe" << endl;
    }
}

void Responsable::afficher() const
{
    this->Emploie::afficher();
    for (int i = 0;i < nbr;i++) {
        this->sub[i]->afficher();
    }

}

Responsable::~Responsable()
{
    delete[] this->sub;
    sub = nullptr;
}




