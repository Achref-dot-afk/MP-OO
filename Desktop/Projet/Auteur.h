#ifndef AUTEUR_H_INCLUDED
#define AUTEUR_H_INCLUDED
#include <iostream>
#include <string.h>
#include<vector>
#include "profil.h"
#include "Message.h"
using namespace std;
class Auteur
{
    string pseudo;
    Profil p;
    int Id_Auteur;
    string DatePremierMsg;
    string DateDernierMsg;
    int NbMsgPos;
    vector <Message*> ListeMsg;
public:
    Auteur();
    Auteur(string ps,string DatPer,string DatDer,int id,int Nb);
    void AjouterMsg(Message * m);
    void SupprimerMsg(int id);
    string GetEtatAuteur(int num_inscri);
    friend ostream& operator<<(operator &out,Auteur &A);
};

#endif // AUTEUR_H_INCLUDED
