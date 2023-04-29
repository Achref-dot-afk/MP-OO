#include <iostream>
#include <string.h>
#include "site"
#include "Documentation.h"
#include<vector>
using namespace std;

void SousMenuInscritL1()
{
    int choix;
    int id;
    Site s;
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
    printf("\n|\t\t\t 1. Ajouter un site            \t\t\t|");
    printf("\n|\t\t\t 2. Afficher un site            \t\t\t|");
    printf("\n|\t\t\t 3. Supprimer un site par identifiant        \t\t\t\t|");
    printf("\n|\t\t\t 4. Retour                        \t\t\t\t|");
    printf("\n|\t\t\t\t\t\t\t\t|");
    printf("\n|\t\t\t\t\t\t\t\t|");
    printf("\n|\t\t\t+ Entrez votre choix... ");
    printf("\n|\t\t\t\t\t\t\t\t|");
    printf("\n|\t\t\t\t\t\t\t\t|");
    printf("\n\xB2_________________________________"
           "______________________________\xB2\n");
    do{
        cin>>choix;
    }while((choix==1)||(choix==2)||(choix==3)||(choix==4));
    switch(choix)
    {
    case 1:
        {
            ajouter_site(&s);
            SousMenuInscritL1();
        }
    case 2:
        {
            afficher_site();
            SousMenuInscritL1();
        }
    case 3:
        {
            cout<<"\n Saisir un Identifiant...";
            cin>>id;
            Supprimer_site(id);
            SousMenuInscritL3();
        }
    case 4:
        {
            MenuPrincipalLot3();
        }
    default:
        cout<<"Ce choix n'exsiste pas";
    }
}
