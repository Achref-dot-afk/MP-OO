#include <iostream>
#include <string.h>
#include "Rubrique.h"
#include "Message.h"
#include<vector>
#include <windows.h>
#include "methode_printbox.h"
#include"MenuLot2.h"
using namespace std;
void MenuVisiteurL2()
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
    printf("\n|\t\t\t 1. Creer une rubrique  \t\t|");
    printf("\n|\t\t\t 2. Retour             \t\t\t|");
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

            int Choix_Menu;
            printBox("\npasser vers le Menu des Inscrits ?");
            cin>>Choix_Menu;
            if(Choix_Menu==1)
                SousMenuInscritL2();
            else
                MenuVisiteurL2();
        }
    case 2:
        {
            MenuPrincipalLot2();
        }
    default:
        cout<<"Ce choix n'exsiste pas";
    }
}

