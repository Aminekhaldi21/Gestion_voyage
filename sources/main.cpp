#include <iostream>
#include <string>
#include"Circuit.h"
#include "Activite.h"
#include "Voyageur.h"
#include<list>
using namespace std;
int main()
{
    Circuit C1;
    string intitule;
    string description;
    int prix;
    string confirmation;
    int choix=0;

    do
    {
        debut:
        cout<<"donner votre choix"<<endl;
        cin>>choix;

        switch(choix)
        {
        case 1:
        {


            cout<<"donner le prix de l'activite"<<endl;
            cin>>prix;
            if(prix<0)
            {
                goto debut;
            }
            cout<<"entrer l'intitule de l'activite"<<endl;
            cin>>intitule;
            cout<<"donner la description de l'activite"<<endl;
            cin>>description;
            Activite A(intitule,description,prix);
            C1.ajouterActivite(A);
            C1.afficherActivites();
            goto debut;
        }






        case 2:
        {
            C1.afficherActivites();
            string nouveau_intitule;
            string nouveau_description;
            int nouveau_prix;
            cout<<"donner l'intitule";
            cin>>nouveau_intitule;
            C1.modifier_intitule(nouveau_intitule);
            cout<<"donner la description";
            cin>>nouveau_description;
            C1.modifier_description(nouveau_description);
            cout<<"donner le prix";
            cin>>nouveau_prix;
            C1.modifier_prix(nouveau_prix);
            C1.afficherActivites();
            goto debut;
        }
        case 3:
        {

            cout<<"voullez -vous vraiment faire la suppression"<<endl;
            cin>>confirmation;
            if(confirmation=="oui")
            {

                cout<<"donner l'intitule de l'activite que vous voullez supprimer"<<endl;
                cin>>intitule;
                C1.supprimerActiv_intitule(intitule);
            }
            else
            {
                goto debut;
            }

            goto debut;
        }


        case 4:
        {
            C1.vider_contenu_champ();
            goto debut;
        }

        }
    }
    while(choix<=0 || choix>4);


}

