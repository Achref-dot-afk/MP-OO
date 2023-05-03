#ifndef PROFIL_H_INCLUDED
#define PROFIL_H_INCLUDED
#include <iostream>
#include <string>
#include <vector>

class Auteur;
class Profil {
public:
    int Id_Profil;
    int num_inscri;
    std::string nom;
    std::string prenom;
    int tel;
    std::string adresse;
    std::vector<Auteur*>ListeAuteur;
public:
    Profil();
    Profil(int id, int num, std::string nom, std::string prenom, int tel, std::string adresse);
    void AjouterAuteur(Auteur *A);
    void SupprimerAuteur(int id);
    void CreerProfil();
};

#endif // PROFIL_H_INCLUDED
