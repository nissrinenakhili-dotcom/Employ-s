#pragma once
#include "Emploie.h"

class Personnel
{
    private:
        Emploie** tab;
        int nbrMax;
        int nbr;

    public:
        Personnel(int);
        void ajouterEmploye(Emploie* e);
        double sommeSalaires() const;
        ~Personnel();
    };

