#ifndef CIRCUIT_H_INCLUDED
#define CIRCUIT_H_INCLUDED
#include <string>
#include <list>
#include "Activite.h"
using namespace std;
class Circuit:public Activite{
    string refe;
    string intitulee;
    string desc;
    string date_debut;
    string date_fin;
    list<Activite> listeActivites;
    double prix;
    public:
        int numero;
        void get_annee();
        Circuit(string _refe,string _intitule,string _desc , int _prix,string _date_debut ,string _date_fin,double _Prix);
        Circuit();
        string getDateDebut();
        string getDateFin();
        double getPrix();
        void ajouterActivite(Activite act);
        void supprimerActivite(Activite a);
        void supprimerActiv_intitule(string intitulee);
        void  afficherActivites();
        void vider_contenu_champ();
};
#endif // CIRCUIT_H_INCLUDED
