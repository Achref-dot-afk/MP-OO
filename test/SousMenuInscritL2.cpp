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
    Message m1(MsgAct,"tsunami in miami","12/10/2018","Benemna.Ayoub@gmail.fr",123);
    Message m2(MsgSport,"New equipements in the gym","11/12/2012","mariem.DOGG@gmail.com",183);
    Rubrique r(2556,"Act","Adresse","Livre JS");
    SousRubrique sr(2556,"Act","Adresse","Livre JS",0);
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
    printf("\n|\t\t\t 1. Poster un message        \t\t|");
    printf("\n|\t\t\t 2. Afficher la liste des messages d'une rubrique  \t\t|");
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
            sr.AddMsg(m1);
            sr.nb_abonnee++;
            cout<<"\n";
            cout<<"Message Poste dans la rubrique"<<endl;
            cout<<"\n";
            SousMenuInscritL2();
        }
    case 2:
        {
            sr.AfficherMsgsSelonTitre(MsgAct);
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
