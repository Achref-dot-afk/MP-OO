#include <iostream>
#include <string.h>
#include "message.h"
using namespace std;

Message::Message(string titre,string texte,string datePublication,string adresseEmailAuteur,int id)
{
    titre=titre;
    text=texte;
    date=datePublication;
    adresse_Email_Auteur=adresseEmailAuteur;
    Id_Msg=id;
}
 string Message::get_Titre()  { return titre; }
 string Message::get_Texte()  { return text; }
 string Message::get_Date_Publication()  { return date; }
 string Message::getAdresse_Email_Auteur() { return adresse_Email_Auteur; }
 vector<string> Message::getReponses() { return reponses; }

     ostream&operator<<(ostream& sortie, const Message &m)
    {
        cout<<"identifiant de message :"<<m.Id_Msg<<endl;
        cout<<"titre :"<<m.titre<<endl;
        cout<<"texte :"<<m.text<<endl;
        cout<<"date de publication :"<<m.date<<endl;
        cout<<"addresse de l'auteur :"<<m.adresse_Email_Auteur<<endl;
        return sortie;
    }
     void Message::ajouter_Reponse(string message)
     {
         reponses.push_back(message);
     }
