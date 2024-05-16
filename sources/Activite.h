#ifndef ACTIVITE_H_INCLUDED
#define ACTIVITE_H_INCLUDED
#include<iostream>
using namespace std;
class Activite{
  string intitule;
  string description;
  int prix;
  public:

      Activite();
      Activite(string _intitule,string _description,int _prix );
      string Get_intitule();
      string Get_description();
      int Get_prix();
      void modifier_intitule(string nouveau_intitule);
      void modifier_description(string nouveau_description);
      void modifier_prix(int nouveau_prix);
      void tostring();
};

#endif // ACTIVITE_H_INCLUDED
