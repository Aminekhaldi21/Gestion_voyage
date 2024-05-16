#include "Activite.h"
#include <iostream>
using namespace std;
Activite::Activite(){}

 Activite::Activite(string _intitule,string _description,int _prix ){
     intitule=_intitule ;
     description=_description;
     prix=_prix;

}
string Activite::Get_intitule(){
    return intitule;
    }
string Activite::Get_description(){
    return description;
    }
int Activite::Get_prix(){
    return prix;
    }
void Activite::modifier_intitule(string nouveau_intitule)
{
    intitule=nouveau_intitule;


}
void Activite::modifier_description(string nouveau_description)
{
    description=nouveau_description;
}
void Activite::modifier_prix(int nouveau_prix)
{
    prix=nouveau_prix;
}
void Activite::tostring()
{

    cout << intitule << "\t" << description << "\t" << prix << endl;
}
