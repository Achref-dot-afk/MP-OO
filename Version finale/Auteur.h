#ifndef AUTEUR_H_INCLUDED
#define AUTEUR_H_INCLUDED
#include <iostream>
#include <string>
#include <vector>
#include "Profil.h"
#include "message.h"

using namespace std;

class Auteur {
public:
    Profil *p;
    string pseudo;
    string DatePremierMsg;
    string DateDernierMsg;
    int Id_Auteur;
    int NbMsgPos;
    vector<Message*> ListeMsg;
public:
    Auteur();
    Auteur(string ps, string DatPer, string DatDer, int id, int Nb);
    void AjouterMsg(Message* m);
    void SupprimerMsg(int id);
    string GetEtatAuteur(int num_inscri);
    friend ostream& operator<<(ostream& out, Auteur& A);
};

#endif // AUTEUR_H_INCLUDED
