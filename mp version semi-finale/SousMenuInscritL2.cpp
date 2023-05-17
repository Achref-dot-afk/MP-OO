#include <iostream>
#include <string.h>
#include<fstream>
#include "Rubrique.h"
#include "Message.h"
#include"site.h"
#include<vector>
#include"MenuLot2.h"
#include "Auteur.h"
#include "Menu.h"
#include "methode_printbox.h"
#include <windows.h>
#include<sstream>
using namespace std;
void SousMenuInscritL2()
{
    HANDLE h=GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h,10);
    int choix;
    string id;
    Auteur A("Achref","12/10/2019","20/11/2019",147,15);
    MessageSport ms;
    Rubrique r(2556,"Act","Adresse","Livre JS");
    MessageSport m2("sport","message de sport","12/03/2018","achref.habli@gmail.com",147,1);
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
    printf("\n|\t\t\t 3. Supprimer un message selon le titre\t|");
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
            cin>>ms;
            ofstream outFile("FicheMessages",ios::app);
            outFile<<ms.titre;
            outFile<<"-";
            outFile<<ms.Id_Msg;
            outFile<<"-";
            outFile<<ms.text;
            outFile<<"-";
            outFile<<ms.nb_pers;
            outFile<<"-";
            outFile<<ms.adresse_Email_Auteur;
            outFile<<"-";
            outFile<<ms.date<<endl;
            outFile.close();
            cout<<"Message Poste dans la rubrique"<<endl;
            cout<<"\n";
            SousMenuInscritL2();
            break;
        }
    case 2:
        {
            string choix;
            cout<<"Choisir la rubrique :"<<endl;
            cin>>choix;
            ifstream fichier("FicheMessages");
            string ligne;
            string res="";
            while (getline(fichier, ligne)) {
                    if(ligne[0]==choix[0])
                    {
                        istringstream iss(ligne);
                        string subst;
                        while (getline(iss, subst, '-')) {
                                res+=subst+"\n";
                        }
                        printBox(res);
                        res="";
                    }
            }
            fichier.close();
            SousMenuInscritL2();
            break;
        }
    case 3:
        {
            cout<<"\n Saisir un titre pour un message a supprimer...";
            ifstream inputFile("FicheMessages");
            string file="FicheMessages";
            cin>>id;
            int currentLine = 1;
            int lineToRemove = -1;
            ofstream tempFile("temp.txt");
            string line;
            while (getline(inputFile, line)) {
                    if (line.find(id) == string::npos) {
                        tempFile << line << endl;
                    }
                    else {
                            lineToRemove = currentLine;
                    }
                    currentLine++;
                    break;
            }
            inputFile.close();
            tempFile.close();
            remove(file.c_str());
            rename("temp.txt", file.c_str());
            cout<<endl;
            SousMenuInscritL2();
            break;
        }
    case 4:
        {
            MenuPrincipalLot2();
            break;
        }
    default:
        cout<<endl;
        cout<<"Ce choix n'exsiste pas";
        cout<<"\n";

    }
}



