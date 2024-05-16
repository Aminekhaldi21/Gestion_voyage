#include"Circuit.h"
#include "Activite.h"
#include "Voyageur.h"
#include<list>
using namespace std;
int Voyageur::id=0;
Voyageur::Voyageur(string _nom,string _prenom,string _date_naissance,string _nationalite,int _age){
    id++;
    nom=_nom;
    if (nom.size()<3){
        cout<< "le nom n'est pas validé";
    }
    prenom=_prenom;
    date_naissance=_date_naissance;
    age=_age;
    if(age<18){
        cout<<"invalid";
    }
    nationalite=_nationalite;
    list<Circuit>  listeCircuits;
    }
bool equals(string _nom1,string _nom2,string _prenom1,string _prenom2){
    if(_nom1==_nom2 && _prenom1==_prenom2){
        return 1;
    }
    else{
        return 0;
    }
}
void Voyageur::ajouterCircuit(Circuit cir){
    list<Circuit>  listeCircuits;
    listeCircuits.push_back(cir);
}
int Voyageur::nombreCircuits2020(Circuit cir){
    int a=0;
    list<Circuit>  listeCircuits;
    for(Circuit cir:listeCircuits){
            if(cir.getDateDebut()=="2020" || cir.getDateFin()=="2020"){
                a++;
            }
    }
    return a;
}
double Voyageur::prixTotaleCircuits(Circuit cir){
        int prix_total=0;
        list<Circuit>  listeCircuits;
        for(Circuit cir:listeCircuits){
                prix_total=prix_total+cir.getPrix();
                }
        return prix_total;
}




