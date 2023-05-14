#ifndef RUBRIQUE_H_INCLUDED
#define RUBRIQUE_H_INCLUDED
#include <string>
#include <vector>
#include <iostream>
#include "Message.h"
#include"site.h"
using namespace std;
class Rubrique
{
public:
    int id_rubrique;
    string date_creation;
    string ad_mail_anima;
    string theme;
    vector<Site*> sites_internet;
public:
    Rubrique(int id,string d,string email,string theme);
    ~Rubrique();
    string getTheme();
    string getDateCreation();
    string getAdresseEmailAnimateur();
    vector<Site*> getSitesInternet();
    void ajouterSiteInternet(Site siteInternet);
    void supprimer_site(int id);
    friend ostream &operator<<(ostream& sortie, const Rubrique &r);

};

class SousRubrique : public Rubrique
{
public:
    int nb_abonnee;
    vector <Message> TabMsg;
    SousRubrique(int id,string theme,string dateCreation, string adresseEmailAnimateur,int nb);
    void AddMsg(Message m);
    void AfficherMsgsSelonTitre(Mestitres t);



};

#endif // RUBRIQUE_H_INCLUDED
