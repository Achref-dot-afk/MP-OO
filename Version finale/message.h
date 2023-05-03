#ifndef MESSAGE_H_INCLUDED
#define MESSAGE_H_INCLUDED
#include <string>
#include <vector>
#include <iostream>
using namespace std;
class Message
{
public:

    string titre;
    string text;
    string date;
    int Id_Msg;
    string adresse_Email_Auteur;
    vector<string> reponses;

public:

    Message(string titre,string texte,string datePublication,string adresseEmailAuteur,int id);
    string get_Titre();
    string get_Texte();
    string get_Date_Publication();
    string getAdresse_Email_Auteur();
    vector<string> getReponses();
    void ajouter_Reponse(string msg);
    friend ostream &operator<<(ostream& sortie, const Message &m);
};



#endif // MESSAGE_H_INCLUDED
