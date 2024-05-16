#ifndef VOYAGEUR_H_INCLUDED
#define VOYAGEUR_H_INCLUDED
#include"Circuit.h"
#include "Activite.h"

class Voyageur{
    static int id;
    string nom;
    string prenom;
    string date_naissance;
    string nationalite;
    int age;
    list<Circuit>  listeCircuits;
    public:
    Voyageur(string _nom,string prenom,string _date_naissance,string _nationalite,int _int);
    bool equals(string _nom1,string _nom2,string _prenom1,string _prenom2);
    void ajouterCircuit(Circuit cir);
    int nombreCircuits2020(Circuit cir);
    double prixTotaleCircuits(Circuit cir);
    void sauvegarderCircuits();
};


#endif // VOYAGEUR_H_INCLUDED
