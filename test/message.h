#ifndef MESSAGE_H_INCLUDED
#define MESSAGE_H_INCLUDED
#include <string>
#include <vector>
#include <iostream>
using namespace std;
enum Mestitres{MsgSport,MsgEdu,MsgAct};
class Message
{
public:

    Mestitres titre;
    string text;
    string date;
    int Id_Msg;
    string adresse_Email_Auteur;
    vector<string> reponses;

public:

    Message(Mestitres titre,string texte,string datePublication,string adresseEmailAuteur,int id);
    Mestitres get_Titre();
    string get_Texte();
    string get_Date_Publication();
    string getAdresse_Email_Auteur();
    vector<string> getReponses();
    void ajouter_Reponse(string msg);
    friend ostream &operator<<(ostream& sortie, const Message &m);
};

class MsgRubriqueSport
{

};

#endif // MESSAGE_H_INCLUDED
