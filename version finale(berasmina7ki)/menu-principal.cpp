#include <iostream>
#include <string.h>
#include "Rubrique.h"
#include "Message.h"
#include<vector>
#include <windows.h>
#include"MenuLot2.h"
#include "Menu.h"
using namespace std;

void MenuPrincipalLot2()
{
     HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
     SetConsoleTextAttribute(h,12);
     int choix;
     printf("\xB2 \xB2\xB2\xB2\xB2\xB2\xB2\xB2"
            "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2\xB2\xB2\xB2 Menu Principal 1\xB2"
           "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2 \xB2");
    printf("\n ______________________________"
           "_________________________________");
    printf("\n|\t\t\t\t\t\t\t\t|");
    printf("\n|\t\t\t\t\t\t\t\t|");
    printf("\n|\t\t\t 1. Inscrit(e) ?    \t\t\t|");
    printf("\n|\t\t\t 2. Visiteur ?      \t\t\t|");
    printf("\n|\t\t\t 3. Retour      \t\t\t|");
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
        SousMenuVisiteurL3();
    case 3:
        MenuPrincipalForum();
    default:
        {
            cout<<"Ce choix n'est pas valable !";
            cout<<"\n";
            MenuPrincipalLot2();

        }
    }
}
