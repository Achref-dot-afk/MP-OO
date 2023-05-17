#include <iostream>
#include<string.h>
#include"Rubrique.h"
#include"site.h"
using namespace std;
Rubrique::Rubrique(int id,string theme,string dateCreation, string adresseEmailAnimateur)
        : id_rubrique(id),theme(theme), date_creation(dateCreation), ad_mail_anima(adresseEmailAnimateur) {}
Rubrique::~Rubrique(){}
string Rubrique::getTheme()
{ return theme; }
string Rubrique::getDateCreation()
{ return date_creation; }
string Rubrique::getAdresseEmailAnimateur()
{ return ad_mail_anima; }
vector<Site*> Rubrique:: getSitesInternet()
{ return sites_internet; }
void Rubrique::ajouterSiteInternet(Site siteInternet)
{
    sites_internet.push_back(&siteInternet);
}
void Rubrique::supprimer_site(int id)
{
    for(int i=0;i<sites_internet.size();i++)
    {
        if(id==sites_internet[i]->id_site)
                delete sites_internet[i];
                sites_internet[i]=NULL;
                for (int j = i; j <sites_internet.size(); j++)
                        sites_internet[j] = sites_internet[j + 1];
    }
}
ostream&operator<<(ostream& sortie, const Rubrique &r)
    {
        cout<<"identifiant de rubrique :"<<r.id_rubrique<<endl;
        cout<<"theme :"<<r.theme<<endl;
        cout<<"date de creation:"<<r.date_creation<<endl;
        cout<<"adresse de animateur:"<<r.ad_mail_anima<<endl;
        return sortie;
    }

