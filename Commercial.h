#pragma once
#include "Emploie.h"
class Commercial : public Emploie
{
    private:
        double ventes;
        double taux;

    public:
        Commercial(string, double, double, double);
        void mettreAJour(double v);
        double calculer() const override;
        void afficher() const override;
    };

