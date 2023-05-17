#include <iostream>
#include <string.h>
#include "message.h"
#include <limits>
using namespace std;

Message::Message(string titre,string texte,string datePublication,string adresseEmailAuteur,int id)
{
    titre=titre;
    text=texte;
    date=datePublication;
    adresse_Email_Auteur=adresseEmailAuteur;
    Id_Msg=id;
}
Message::Message()
{
    titre="";
    text="";
    date="";
    adresse_Email_Auteur="";
    Id_Msg=0;
}
MessageEdu::MessageEdu() : Message()
{
    nb_pers=0;
}
MessageSport::MessageSport() : Message()
{
    nb_pers = 0;
}

 string Message::get_Titre()  { return titre; }
 string Message::get_Texte()  { return text; }
 string Message::get_Date_Publication()  { return date; }
 string Message::getAdresse_Email_Auteur() { return adresse_Email_Auteur; }
 vector<string> Message::getReponses() { return reponses; }
ostream&operator<<(ostream& os, const Message &m)
{
    os<<"identifiant de message :"<<m.Id_Msg<<endl;
    os<<"titre :"<<m.titre<<endl;
    os<<"texte :"<<m.text<<endl;
    os<<"date de publication :"<<m.date<<endl;
    os<<"addresse de l'auteur :"<<m.adresse_Email_Auteur<<endl;
    return os;
}
istream& operator>>(istream& is,MessageEdu& m)
{
    cout<<"identifiant de message : "<<endl;
    is>>m.Id_Msg;
    cout<<"titre : "<<endl;
    is>>m.titre;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout<<"texte : "<<endl;
    is>>m.text;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout<<"date de publication : "<<endl;
    is>>m.date;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout<<"adresse de l'auteur : "<<endl;
    is>>m.adresse_Email_Auteur;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout<<"nombre des personnes dans la rubrique :"<<endl;
    is>>m.nb_pers;
    return is;
}
istream &operator>>(istream &is,MessageSport &m)
{
    cout<<"identifiant de message : "<<endl;
    is>>m.Id_Msg;
    cout<<"titre : "<<endl;
    is>>m.titre;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout<<"texte : "<<endl;
    is>>m.text;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout<<"date de publication : "<<endl;
    is>>m.date;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout<<"adresse de l'auteur : "<<endl;
    is>>m.adresse_Email_Auteur;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout<<"nombre des personnes dans la rubrique :"<<endl;
    is>>m.nb_pers;
    return is;
}

