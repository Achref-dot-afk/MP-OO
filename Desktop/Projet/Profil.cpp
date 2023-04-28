#include <iostream>
#include <string.h>
#include "profil.h"
#include "Message.h"
#include<vector>
using namespace std;
Profil::Profil()
{
    cout<<"Saisir l'Identifiant : \n";
    cin>>Id_Profil;
    cout<<"Saisir le numero d'inscription : \n";
    cin>>num_inscri;
    cout<<"Saisir le numero du telephone : \n";
    cin>>tel;
    cout<<"Saisir le nom : \n";
    cin>>nom;
    cout<<"Saisir le prenom : \n";
    cin>>prenom;
    cout<<"Saisir l'adresse : \n";
    cin>>adresse;
}
Profil::Profil(int id,int num,int tel,string nom,string p,string adr)
{
    Id_Profil=id;
    num_inscri=num;
    tel=tel;
    nom=nom;
    prenom=p;
    adresse=adr;
}

void Profil:: AjouterAuteur(Auteur *A)
{
    ListeAuteur.push_back(A);
}

void Profil::SupprimerAuteur(int id)
{
    for(int i=0;i<ListeAuteur.size();i++)
    {
        if(id==ListeAuteur[i]->Id_Auteur)
        {
            delete ListeMsg[i];
            ListeMsg[i]=NULL;
            for (int j = i; j <ListeMsg.size(); j++)
                ListeMsg[j] = ListeMsg[j + 1];
        }
    }
}
