#ifndef SITE_H_INCLUDED
#define SITE_H_INCLUDED
#include "string"
#include <vector>
using namespace std;
class Site
{
   int id_site;
   string url;
public:
    Site(int id,string adress);
    int get_id();
    string get_url();
    friend ostream& operator<<(ostream & sortie, const Site& s);
};
class list_site:public Site
{
    vector<Site*> list_s;
public :
    void ajouter_site(int id ,string adress);
    void suprimer_site(int id);;
    void ajouter_site(Site* sit);
    void afficher_site();
} ;
void MenuPrincipalLot1();
void SousMenuInscritL1();
void SousMenuVisiteurL1();
#endif // SITE_H_INCLUDED
