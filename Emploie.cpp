#include "Emploie.h"

float Emploie::valAug = 0.0;
int Emploie::compt = 0;

Emploie::Emploie(string nom, double sal):matricule(++compt)
{
	this->nom = nom;
	this->indice = sal;
}

void Emploie::afficher() const
{
	cout << "Les caracteristiques d'un emploie :" << endl;
	cout << "Le nom :" << nom << endl;
	cout << "Matricule :" << matricule << endl;
	cout << "L'indice :" << indice << endl;
	cout << "Salaire :" << this->calculer() << endl;

}


//double Emploie::calculer(float a) const
double Emploie::calculer() const
{
   cout<<"donner la valeur d'augmentation"<<endl;
	cin>>Emploie::valAug;
	//Emploie::valAug = a;
	return this->indice+((this->indice* Emploie::valAug)/100);
}
