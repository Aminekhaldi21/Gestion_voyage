#include <string>
#include"Circuit.h"
#include "Activite.h"
using namespace std;
#include<list>
Circuit::Circuit(string _refe,string _intitulee,string _desc, int _prix,string _date_debut,string _date_fin,double _Prix)
{

    refe=_refe;
    intitulee=_intitulee;
    desc=_desc;
    date_debut=_date_debut;
    date_fin=_date_fin;
    prix=_Prix;
}
Circuit::Circuit() {}

string Circuit:: getDateDebut()
{
    return date_debut;
}
string Circuit:: getDateFin()
{
    return date_fin;
}
double Circuit::getPrix()
{
    return prix;
}
void Circuit::ajouterActivite(Activite activite)
{

    listeActivites.push_back(activite);
}
void Circuit::supprimerActivite(Activite a)
{

    if (listeActivites.empty())
    {
        cout << "On n'a pas encore d'activités dans ce circuit." <<endl;
    }
    else
    {
        listeActivites.pop_back();
        cout << "Activité supprimée." << endl;
    }
}
void Circuit::supprimerActiv_intitule(string intitulee)
 {
     for ( Activite activite : listeActivites)
     {
         if(activite.Get_intitule()==intitulee)
         {
             supprimerActivite(activite);
         }
     }
 }
void Circuit:: afficherActivites()
{
    Circuit::numero=1;
    for ( Activite activite : listeActivites)
    {
        cout<<Circuit::numero <<'-';
        activite.tostring();
        Circuit::numero++;
    }

}
void Circuit:: vider_contenu_champ()
{
    listeActivites.clear();
}







