#include <iostream>
#include <string.h>
#include <fstream>
#include "Profil.h"
#include "Auteur.h"
#include "Menu.h"
#include "message.h"
#include<vector>
using namespace std;

void SousMenuInscritL3()
{
    int choix;
    int id;
    Auteur A("Achref","12/10/2019","20/11/2019",147,15);
    vector <Auteur*> ListeAut;
    ListeAut.push_back(&A);
    Message m(MsgEdu,"hello","12/10/2019","maryem.DOGGAZ@gmail.com",16);
    Profil p(145,12,"Achref","Prenom",42375004,"achref.habli@gmail.com");
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
    printf("\n|\t\t\t 1. Ajouter un Auteur \t\t\t|");
    printf("\n|\t\t\t 2. Afficher un Auteur \t\t\t|");
    printf("\n|\t\t\t 3. Supprimer un Auteur            \t|");
    printf("\n|\t\t\t 4. Poster un message    \t\t|");
    printf("\n|\t\t\t 5. Afficher un message\t\t\t|");
    printf("\n|\t\t\t 6. Supprimer message\t\t\t|");
    printf("\n|\t\t\t 7. Retour\t\t\t\t|");
    printf("\n|\t\t\t\t\t\t\t\t|");
    printf("\n|\t\t\t\t\t\t\t\t|");
    printf("\n|\t\t\t+ Entrez votre choix...                 |");
    printf("\n|\t\t\t\t\t\t\t\t|");
    printf("\n|\t\t\t\t\t\t\t\t|");
    printf("\n\xB2_________________________________"
           "______________________________\xB2\n");
    cin>>choix;
    switch(choix)
    {
    case 1:
        {
            p.AjouterAuteur(&A);
            ofstream outFile;
            outFile.open("Fiche Auteurs");
            outFile <<A.pseudo<<endl;
            outFile <<A.Id_Auteur<<endl;
            outFile <<A.DatePremierMsg<<endl;
            outFile <<A.DateDernierMsg<<endl;
            outFile <<A.NbMsgPos<<endl;
            outFile.close();
            SousMenuInscritL3();
        }
    case 2:
        {
            cout<<A;
            cout<<"\n";
            SousMenuInscritL3();
        }
    case 3:
        {
            cout<<"\n Saisir un Identifiant...";
            cin>>id;
            p.SupprimerAuteur(id);
            cout<<"\n";
            SousMenuInscritL3();
        }
    case 4:
        {
            A.AjouterMsg(&m);
            cout<<"\n";
            SousMenuInscritL3();
        }
    case 5 :
        {
            A.AfficherListeMsg();
        }
    case 6:
        {
            A.SupprimerMsg(id);
            SousMenuInscritL3();
        }
    case 7:
        {
            cout<<"\n";
            MenuPrincipalLot3();
        }
    default:
        cout<<"Ce choix n'exsiste pas";
    }
}
