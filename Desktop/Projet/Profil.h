#ifndef PROFIL_H_INCLUDED
#define PROFIL_H_INCLUDED
#include <iostream>
#include <string.h>
#include "profil.h"
#include "Message.h"
#include<vector>
using namespace std;
class Profil
{
    int Id_Profil;
    int num_inscri;
    string nom;
    string prenom;
    int tel;
    string adresse;
    vector <Auteur *> ListeAuteur;
public:
    Profil(int id,int num,int tel,string nom,string p,string adr);
    profil();
    void AjouterAuteur(Auteur *A);
    void SupprimerAuteur(int id);

};

#endif // PROFIL_H_INCLUDED
