#include <iostream>
#include <string.h>
#include <fstream>
#include "Profil.h"
#include "Message.h"
#include "Auteur.h"
#include "Menu.h"
#include<sstream>
#include<fstream>
#include<vector>
#include <windows.h>
#include "methode_printbox.h"
using namespace std;
bool Verification_compte(int id,const vector<Profil> &p);
void SousMenuVisiteurL3()
{
    int choix;
    string nom;
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
    printf("\n|\t\t\t 1. Creer un profil d'auteur\t|");
    printf("\n|\t\t\t 2. Afficher la liste des auteurs d'une rubrique donnee\t|");
    printf("\n|\t\t\t 3. Retour          \t\t\t|");
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
            string app;
            cout<<"Quel est La rubrique d'appartenance de cet Auteur ?"<<endl;
            cin>>app;
            Auteur A;
            ofstream myfile;
            if(app=="sport"||app=="Sport")
                {
                    myfile.open("FicheAuteursRubriqueSport",ios::app);
                }
            else
                {
                    myfile.open("FicheAuteursRubriqueEducation",ios::app);
                }
            myfile<<A.pseudo;
            myfile<<"-";
            myfile<<A.Id_Auteur;
            myfile<<"-";
            myfile<<A.DatePremierMsg;
            myfile<<"-";
            myfile<<A.DateDernierMsg;
            myfile<<"-";
            myfile<<A.NbMsgPos<<endl;
            break;
        }
    case 2:
        {
              string rubr,res,ligne;
              cout << "Quelle est la rubrique que vous cherchez ?" << endl;
              cin >> rubr;
              ifstream fichier;
              if (rubr == "sport" || rubr == "Sport")
                fichier.open("FicheAuteursRubriqueSport",ios::app);
              else
                fichier.open("FicheAuteursRubriqueEducation",ios::app);
              string subst;
              while (getline(fichier, ligne)){
                    istringstream iss(ligne);
                    while (getline(iss, subst, '-')) {
                        res += subst + "\n";
              }
              printBox(res);
              res = "";
              }
            fichier.close();
            SousMenuVisiteurL3();
            break;
    }
    case 3:
        {
            cout<<"\n";
            MenuPrincipalLot3();
            break;
        }
    default:
        cout<<"\n";
        printBox("Ce choix n'exsiste pas");
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
