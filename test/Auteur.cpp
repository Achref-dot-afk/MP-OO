#include <iostream>
#include <string.h>
#include "Auteur.h"
#include "Profil.h"
#include "message.h"
#include<vector>
using namespace std;
Auteur::Auteur()
{
    cout<<"Saisir l'Identifiant : \n";
    cin>>Id_Auteur;
    cout<<"Saisir le pseudo : \n";
    cin>>pseudo;
    cout<<"Saisir la date du premier message : \n";
    cin>>DatePremierMsg;
    cout<<"Saisir la date du dernier message : \n";
    cin>>DateDernierMsg;
    cout<<"Saisir le nombre des messages postes : \n";
    cin>>NbMsgPos;
}
Auteur::Auteur(string ps,string DatPer,string DatDer,int id,int Nb)
{
    pseudo=ps;
    DateDernierMsg=DatDer;
    DatePremierMsg=DatPer;
    Id_Auteur=id;
    NbMsgPos=Nb;
}

void Auteur::AjouterMsg(Message *m)
{
    ListeMsg.push_back(m);
}

void Auteur::SupprimerMsg(int id)
{
    for(unsigned int i=0;i<ListeMsg.size();i++)
    {
        if(id==ListeMsg[i]->Id_Msg)
        {
            delete ListeMsg[i];
            ListeMsg[i]=NULL;
            for (unsigned int j = i; j <ListeMsg.size(); j++)
                    ListeMsg[j] = ListeMsg[j + 1];
        }
    }
}

string Auteur::GetEtatAuteur(int num_inscri)
{
    if(p->num_inscri==num_inscri)
        return "Auteur Enregistre";
    else
        return "Auteur Visiteur";
}

ostream& operator<<(ostream &out,Auteur &A)
{
    out<<"Pseudo : "<<A.pseudo<<endl;
    out<<"Identifiant : "<<A.Id_Auteur<<endl;
    out<<"Date de Premier message : "<<A.DatePremierMsg<<endl;
    out<<"Date de dernier message : "<<A.DateDernierMsg<<endl;
    out<<"Nombre des messages Postes : "<<A.NbMsgPos<<endl;
    return out;
}

void Auteur::AfficherListeMsg()
{
    for(int i=0;i<ListeMsg.size();i++)
        cout << ListeMsg[i]<<endl;
}
