#include <iostream>
#include <string.h>
#include "profil.h"
#include "Message.h"
#include<vector>
using namespace std;
void SousMenuVisiteurL3()
{
    int choix;
    int id;
    printf("\xB2 \xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2\xB2\xB2\xB2 Menu des Visiteurs \xB2"
           "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2 \xB2");
    printf("\n ______________________________"
           "_________________________________");
    printf("\n|\t\t\t\t\t\t\t\t|");
    printf("\n|\t\t\t\t\t\t\t\t|");
    printf("\n|\t\t\t 1. Creer un profil               \t\t\t|");
    printf("\n|\t\t\t 2. Retour                        \t\t\t|");
    printf("\n|\t\t\t\t\t\t\t\t|");
    printf("\n|\t\t\t\t\t\t\t\t|");
    printf("\n|\t\t\t+ Entrez votre choix... ");
    printf("\n|\t\t\t\t\t\t\t\t|");
    printf("\n|\t\t\t\t\t\t\t\t|");
    printf("\n\xB2_________________________________"
           "______________________________\xB2\n");
    switch(choix)
    {
    case 1:
        {
            //fait un appel au constructeur par d�faut
            int Choix_Menu;
            cout<<"\npasser vers le Menu des Inscrits ?"
            cin>>Choix_Menu;
            if(Choix_Menu==1)
                SousMenuInscritL3();
            else
                SousMenuVisiteurL3();
        }
    case 2:
        {
            MenuPrincipalLot3();
        }
    default:
        cout<<"Ce choix n'exsiste pas";
    }
}
}
