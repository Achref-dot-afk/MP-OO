#include <iostream>
#include <string.h>
#include "Rubrique.h"
#include "Message.h"
#include"site.h"
#include<vector>
#include"MenuLot2.h"
#include "Menu.h"
using namespace std;

void SousMenuInscritL2()
{
    int choix;
    int id;
    Rubrique r(2556,"R1","Adresse","Livre JS");
    Site s(4,"adresse");
    printf("\xB2 \xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2\xB2\xB2\xB2 Menu des Inscrits \xB2"
           "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2 \xB2");
    printf("\n ______________________________"
           "_________________________________");
    printf("\n|\t\t\t\t\t\t\t\t|");
    printf("\n|\t\t\t\t\t\t\t\t|");
    printf("\n|\t\t\t 1. Ajouter un site        \t\t|");
    printf("\n|\t\t\t 2. Afficher une rubrique  \t\t|");
    printf("\n|\t\t\t 3. Supprimer un site par identifiant\t|");
    printf("\n|\t\t\t 4. Retour           \t\t\t|");
    printf("\n|\t\t\t\t\t\t\t\t|");
    printf("\n|\t\t\t\t\t\t\t\t|");
    printf("\n|\t\t\t+ Entrez votre choix...                 |\t");
    printf("\n|\t\t\t\t\t\t\t\t|");
    printf("\n|\t\t\t\t\t\t\t\t|");
    printf("\n\xB2_________________________________"
           "______________________________\xB2\n");
    cin>>choix;
    switch(choix)
    {
    case 1:
        {
            cout<<"Le site est bien ajoute !";
            cout<<"\n";
            SousMenuInscritL2();
        }
    case 2:
        {
            cout<<r;
            SousMenuInscritL2();
        }
    case 3:
        {
            cout<<"\n Saisir un Identifiant...";
            cin>>id;
            cout<<endl;
            cout<<endl;
            SousMenuInscritL2();
        }
    case 4:
        {
            MenuPrincipalLot2();
        }
    default:
        cout<<endl;
        cout<<"Ce choix n'exsiste pas";
        cout<<"\n";

    }
}
