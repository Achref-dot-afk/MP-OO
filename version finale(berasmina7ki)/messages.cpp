#include<string.h>
#include"Message.h"
#include<vector>
using namespace std;
Message::Message(int id_msg,string titre,string txt,string date_pub,string ad_mail_auteur,Message* messageParent)
{
    id_message=id_msg;
    titre=titre;
    text=txt;
    date_publication=date_pub;
    adresse_Email_Auteur=ad_mail_auteur;
}
Message::~Message(){}
 string Message::get_Titre()  { return titre; }
 string Message::get_Texte()  { return text; }
 string Message::get_Date_Publication()  { return date_publication; }
 string Message::getAdresse_Email_Auteur() { return adresse_Email_Auteur; }
 vector<string> Message::getReponses() { return reponses; }

     ostream&operator<<(ostream& sortie, const Message &m)
    {
        cout<<"identifiant de message :"<<m.Id_Msg<<endl;
        cout<<"titre :"<<m.titre<<endl;
        cout<<"texte :"<<m.text<<endl;
        cout<<"date de publication :"<<m.date_publication<<endl;
        cout<<"addresse de l'auteur :"<<m.adresse_Email_Auteur<<endl;
        return sortie;
    }
     void Message::ajouter_Reponse(string message)
     {
         reponses.push_back(message);
     }
