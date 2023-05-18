#include <iostream>
#include <string.h>
#include<fstream>
#include "Rubrique.h"
#include "Message.h"
#include"site.h"
#include<vector>
#include<algorithm>
#include<ctime>
#include"MenuLot2.h"
#include "Auteur.h"
#include "Menu.h"
#include "methode_printbox.h"
#include <windows.h>
#include<sstream>
using namespace std;
int compareDates(const string& date1, const string& date2);
bool compareLines(const string& line1, const string& line2);
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
    printf("\n|\t\t\t 2. Afficher la liste des messages d'une rubrique\t|");
    printf("\n|\t\t\t 3. Supprimer un message selon le titre\t|");
    printf("\n|\t\t\t 4. Repondre a un message             \t|");
    printf("\n|\t\t\t 5. Lister les reponses a un message\t|");
    printf("\n|\t\t\t 6. Trier les messages par date\t|");
    printf("\n|\t\t\t 7. Retour           \t\t\t|");
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
            printBox("Message Poste dans la rubrique");
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
            Message rep;
            cin>>rep;
            ofstream outFile("FicheReponses",ios::app);
            outFile<<rep.Id_Msg;
            outFile<<"-";
            outFile<<rep.titre;
            outFile<<"-";
            outFile<<rep.text;
            outFile<<"-";
            outFile<<rep.adresse_Email_Auteur;
            outFile<<"-";
            outFile<<rep.date<<endl;
            outFile.close();
            printBox("Reponse recu");
            cout<<"\n";
            SousMenuInscritL2();
            break;
        }
    case 5:
        {
           string id_rep,ligne;
           ofstream reponses("FicheReponses",ios::app);
           ifstream fichier("FicheReponses");
           cout<<"saisir l'id du message que vous cherchez :";
           cin>>id_rep;
           while(getline(fichier,ligne)){
                if(ligne.find(id_rep) != string::npos)
                {
                    printBox(ligne);
                }
           }
           reponses.close();
           SousMenuInscritL2();

        }
    case 6:
        {
            ifstream inputFile("FicheMessages");
            vector<string> lines;
            string line;
            while (getline(inputFile, line)) {
                    lines.push_back(line);
            }
            sort(lines.begin(), lines.end(), compareLines);
            ofstream outputFile("FicheMessages");
            if (outputFile.is_open()) {
                    for (const string& sortedLine : lines) {
                        outputFile << sortedLine << '\n';
            }
            outputFile.close();
            }
            printBox("Liste triee avec success");
            SousMenuInscritL2();
            break;
        }


    case 7:
        {
            MenuPrincipalLot2();
            break;
        }
    default:
    {
        cout<<endl;
        printBox("Ce choix n'exsiste pas");
        cout<<"\n";

    }
}
}



