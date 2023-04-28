#include <iostream>
#include <string.h>
#include "profil.h"
#include "Message.h"
#include<vector>
using namespace std;

SousMenuInscritL3()
{
    int choix;
    int id;
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
    printf("\n|\t\t\t 1. Ajouter un Auteur             \t\t\t|");
    printf("\n|\t\t\t 2. Afficher un Auteur            \t\t\t|");
    printf("\n|\t\t\t 3. Supprimer un Auteur du Profil \t\t\t\t|");
    printf("\n|\t\t\t 4. Poster un message             \t\t|");
    printf("\n|\t\t\t 5. Supprimer le message          \t\t\t|");
    printf("\n|\t\t\t 6. Retour                        \t\t\t\t|");
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
            AjouterAuteur(&A);
            SousMenuInscritL3();
        }
    case 2:
        {
            cout<<A;
            SousMenuInscritL3();
        }
    case 3:
        {
            cout<<"\n Saisir un Identifiant...";
            cin>>id;
            SupprimerAuteur(id);
            SousMenuInscritL3();
        }
    case 4:
        {
            AjouterMsg(&m);
            SousMenuInscritL3();
        }
    case 5:
        {
            SupprimerMsg(id);
            SousMenuInscritL3();
        }
    case 6:
        {
            MenuPrincipalLot3();
        }
    default:
        cout<<"Ce choix n'exsiste pas";
    }
}
