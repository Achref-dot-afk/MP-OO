#include <iostream>
#include <string.h>
#include "site.h"
#include "Documentation.h"
#include<vector>
using namespace std;

void MenuPrincipalLot1()
{
    int choix;
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
    printf("\n|\t\t\t+ Entrez votre choix... ");
    printf("\n|\t\t\t\t\t\t\t\t|");
    printf("\n|\t\t\t\t\t\t\t\t|");
    printf("\n|\t\t\t\t\t\t\t\t|");
    printf("\n\xB2_________________________________"
           "______________________________\xB2\n");
     do {
    cin>>choix;}
    while((choix==1)||(choix==2));
    switch(choix)
    {
    case 1 :
        {
            SousMenuInscritL1();
        }
    case 2 :
        {
            SousMenuVisiteurL1();
        }
    default:
        {
            cout<<"Ce choix n'est pas valable !";

        }
    }
}
