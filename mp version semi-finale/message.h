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
    Message();
    Message(string titre,string texte,string datePublication,string adresseEmailAuteur,int id);
    string get_Titre();
    string get_Texte();
    string get_Date_Publication();
    string getAdresse_Email_Auteur();
    vector<string> getReponses();
    void ajouter_Reponse(string msg);
    friend ostream &operator<<(ostream& os, const Message &m);
};

class MessageSport : public Message {
public:
    int nb_pers;

public:
    MessageSport(string titre, string texte, string datePublication, string adresseEmailAuteur, int id, int nb_pers)
        : Message(titre, texte, datePublication, adresseEmailAuteur, id), nb_pers(nb_pers) {}
    MessageSport();
    friend istream& operator>>(istream& is,MessageSport& m);
    int getNbPers() {
        return nb_pers;
    }
};

class MessageEdu : public Message {
private:
    int nb_pers;

public:
    MessageEdu(string titre, string texte, string datePublication, string adresseEmailAuteur, int id, int nb_pers)
        : Message(titre, texte, datePublication, adresseEmailAuteur, id), nb_pers(nb_pers) {}
    MessageEdu();
    friend istream& operator>>(istream& is,MessageEdu& m);

    int getNbPers() {
        return nb_pers;
    }
};

#endif // MESSAGE_H_INCLUDED
