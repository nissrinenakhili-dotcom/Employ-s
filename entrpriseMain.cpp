// entrpriseMain.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Emploie.h"
#include "Responsable.h"
#include "Commercial.h"
#include "Personnel.h"

int main()
{
    Emploie* E1 = new Emploie("Mlle leyla", 3000);
    Emploie* E2 = new Emploie("Mlle imane", 4000);

    E1->afficher();
    E2->afficher();

    Responsable* R1 = new Responsable("Mme Rim", 5000,2);
    R1->ajouterEmploye(E1);
    R1->ajouterEmploye(E2);

    R1->afficher();

    Responsable* R2 = new Responsable("Mme Nadia", 6000, 3);
    R2->ajouterEmploye(R1);
    R2->afficher();

    Commercial* C1 = new Commercial("Yassmine", 1000, 5000, 5);
    C1->afficher();
    C1->mettreAJour(7000);
    C1->afficher();

    Personnel* P = new Personnel(10);
    P->ajouterEmploye(E1);
    P->ajouterEmploye(E2);
    P->ajouterEmploye(R1);
    P->ajouterEmploye(R2);
    P->ajouterEmploye(C1);

    cout << "Somme des salaires : "
        << P->sommeSalaires() << endl;

    delete P;
    delete R2;
    delete R1;
    delete E1;
    delete E2;
    delete C1;

}

