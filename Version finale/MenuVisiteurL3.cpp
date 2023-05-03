#include <iostream>
#include <string.h>
#include <fstream>
#include "Profil.h"
#include "Message.h"
#include "Auteur.h"
#include "Menu.h"
#include<vector>
using namespace std;
bool Verification_compte(int id,const vector<Profil> &p);
void SousMenuVisiteurL3()
{
    int choix;
    string nom;
    Profil *p1;
    int id;
    bool res;
    vector<Profil> ListeProfil;
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
    printf("\n|\t\t\t 1. Creer un profil \t\t\t|");
    printf("\n|\t\t\t 2. Verifier un Auteur \t\t\t|");
    printf("\n|\t\t\t 3. Verifier un compte \t\t\t|");
    printf("\n|\t\t\t 4. Retour          \t\t\t|");
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
            int Choix_Menu;
            Auteur B;
            ofstream outFile;
            outFile.open("Fiche Auteurs");
            outFile <<"\n";
            outFile <<B.pseudo<<endl;
            outFile <<B.Id_Auteur<<endl;
            outFile <<B.DatePremierMsg<<endl;
            outFile <<B.DateDernierMsg<<endl;
            outFile <<B.NbMsgPos<<endl;
            outFile.close();
            cout<<"\npasser vers le Menu des Inscrits ?";
            cin>>Choix_Menu;
            if(Choix_Menu==1)
            {
                SousMenuInscritL3();
                ListeProfil.push_back(*p1);
            }
            else
            {
                SousMenuVisiteurL3();
                ListeProfil.push_back(*p1);
            }
        }
    case 2:
        {
             cout<<"Saisir Le nom Auteur que vous cherchez"<<endl;
             cin>>nom;
             ifstream inFile;
             inFile.open("Fiche Auteurs");
             string line;
             string verif="";
             while (getline(inFile, line)) {
                    verif+=line;
             }
             if(verif.find(nom)==string::npos)
                cout<<"Auteur Inexistant"<<endl;
            else
                cout<<"Auteur existe"<<endl;
             inFile.close();
            SousMenuVisiteurL3();
        }
    case 3:
        {
            cout<<"Saisir L'ID que vous cherchez"<<endl;
            cin>>id;
            res=Verification_compte(id,ListeProfil);
            if(res)
                cout<<"Compte existant"<<endl;
            else
                cout<<"Compte non existant"<<endl;

        }
    case 4:
        {
            cout<<"\n";
            MenuPrincipalLot3();
        }
    default:
        cout<<"\n";
        cout<<"Ce choix n'exsiste pas";
    }
}

bool Verification_compte(int id,const vector<Profil> &p)
{
    for(unsigned int i=0;i<p.size();i++)
    {
        if(id==p[i].Id_Profil)
            return true;
    }
    return false;
}
