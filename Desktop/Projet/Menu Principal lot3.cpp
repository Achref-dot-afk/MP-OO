#include <iostream>
#include <string.h>
#include "Profil.h"
#include "Message.h"
#include "Auteur.h"
#include "Menu.h"
#include<vector>
using namespace std;

void MenuPrincipalLot3()
{
    int choix;
    int inscription;
    Profil p(145,12,"Achref","Prenom",42375004,"achref.habli@gmail.com");
     printf("\xB2 \xB2\xB2\xB2\xB2\xB2\xB2\xB2"
            "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2\xB2\xB2\xB2 Menu Principal L3\xB2"
           "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2 \xB2");
    printf("\n ______________________________"
           "_________________________________");
    printf("\n|\t\t\t\t\t\t\t\t|");
    printf("\n|\t\t\t\t\t\t\t\t|");
    printf("\n|\t\t\t 1. Inscrit(e) ?    \t\t\t|");
    printf("\n|\t\t\t 2. Visiteur ?      \t\t\t|");
    printf("\n|\t\t\t\t\t\t\t\t|");
    printf("\n|\t\t\t\t\t\t\t\t|");
    printf("\n|\t\t\t\t\t\t\t\t|");
    printf("\n|\t\t\t+ Entrez votre choix...                 |");
    printf("\n|\t\t\t\t\t\t\t\t|");
    printf("\n|\t\t\t\t\t\t\t\t|");
    printf("\n|\t\t\t\t\t\t\t\t|");
    printf("\n\xB2_________________________________"
           "______________________________\xB2\n");
    cin>>choix;
    switch(choix)
    {
    case 1 :
        {
            cout<<"Avez vous un Profil ?"<<endl;
            cout<<"Si oui ecrire votre numero inscription :"<<endl;
            cin>>inscription;
            if(inscription==p.num_inscri)
                SousMenuInscritL3();
            else
                cout<<"Compte introuvable";
                cout<<"\n";
                SousMenuVisiteurL3();
        }
    case 2 :
        {
            cout<<"\n";
            SousMenuVisiteurL3();
        }
    default:
        {
            cout<<"\n";
            cout<<"Ce choix n'est pas valable !";

        }
    }
}
