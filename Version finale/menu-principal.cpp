#include <iostream>
#include <string.h>
#include "Rubrique.h"
#include "Message.h"
#include<vector>
#include"MenuLot2.h"
using namespace std;

void MenuPrincipalLot2()
{
     int choix;
     printf("\xB2 \xB2\xB2\xB2\xB2\xB2\xB2\xB2"
            "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2\xB2\xB2\xB2 Menu Principal \xB2"
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
    printf("\n|\t\t\t+ Entrez votre choix...                 |\t");
    printf("\n|\t\t\t\t\t\t\t\t|");
    printf("\n|\t\t\t\t\t\t\t\t|");
    printf("\n|\t\t\t\t\t\t\t\t|");
    printf("\n\xB2_________________________________"
           "______________________________\xB2\n");
    cin>>choix;
    switch(choix)
    {
    case 1:
        SousMenuInscritL2();
    case 2:
        MenuVisiteurL2();
    default:
        {
            cout<<"Ce choix n'est pas valable !";
            cout<<"\n";
            MenuPrincipalLot2();

        }
    }
}
