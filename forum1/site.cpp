#include"site.h"
#include <iostream>
using namespace std;
Site::Site(int id,string adress)
{
    id_site=id;
    url=adress;
}
int Site::get_id()
{
    return id_site;
}
string Site::get_url()
{
    return url;
}
void list_site::suprimer_site(int id)
{
  for(int i ;i<list_s.size();i++ )
    {
        int iden=list_s[i]->get_id();
        if (iden==id)
            {
            delete list_s[i];
            list_s[i]=NULL;
            }
       for(int j=i;j<list_s.size();j++)
       {
           list_s[j]=list_s[j+1];
       }


}
}
void list_site::suprimer_site_2(string  adress)
{
  for(int i ;i<list_s.size();i++ )
    {
        string adr=list_s[i]->get_url();
        if (adr==adress)
            {
            delete list_s[i];
            list_s[i]=NULL;
            }
       for(int j=i;j<list_s.size();j++)
       {
           list_s[j]=list_s[j+1];
       }

}
}
void list_site::ajouter_site(site* sit)
{
    list_s.push_back(sit);
}
 ostream&operator<<(ostream& sortie, const site &s)
    {
        cout<<"identifiant de site:"<<s.id_site<<endl;
        cout<<"url:"<<s.url<<endl;
        return sortie;
    }
void Site::site_afficher()
{
    for(int i;i<list_site.size();i++)
    {
        cout<<list_site[i]<<endl;
    }
}
