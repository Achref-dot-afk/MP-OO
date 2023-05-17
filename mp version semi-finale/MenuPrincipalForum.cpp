#include <iostream>
#include <string.h>
#include "Rubrique.h"
#include "Message.h"
#include<vector>
#include"MenuLot2.h"
#include <windows.h>
#include"Menu.h"
using namespace std;

void MenuPrincipalForum()
{
    HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h,6);
    int choix;
     printf("\xB2 \xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
            "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2\xB2\xB2\xB2 Menu Forum \xB2"
           "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2\xB2"
           "\xB2\xB2 \xB2");
    printf("\n ______________________________"
           "_________________________________");
    printf("\n|\t\t\t\t\t\t\t\t|");
    printf("\n|\t\t\t\t\t\t\t\t|");
    printf("\n|\t\t\t 1. Menu des Rubriques      \t\t|");
    printf("\n|\t\t\t 2. Menu des Profils et Auteurs\t\t|");
    printf("\n|\t\t\t\t\t\t\t\t|");
    printf("\n|\t\t\t\t\t\t\t\t|");
    printf("\n|\t\t\t\t\t\t\t\t|");
    printf("\n|\t\t\t Entrez votre choix...");
    printf("\n|\t\t\t\t\t\t\t\t|");
    printf("\n|\t\t\t\t\t\t\t\t|");
    printf("\n|\t\t\t\t\t\t\t\t|");
    printf("\n\xB2_________________________________"
           "______________________________\xB2\n");
    cin>>choix;
    switch(choix)
    {
    case 1:
        {
           MenuPrincipalLot2();
        }
    case 2:
        {
            MenuPrincipalLot3();
        }
    default:
        cout<<"Le choix est invalide";
        cout<<"\n";
        MenuPrincipalForum();
    }
}
