#include <iostream>
#include <string.h>
#include "Profil.h"
#include "Message.h"
#include "Auteur.h"
#include <vector>

using namespace std;
Profil::Profil() {
    cout << "Saisir l'Identifiant : \n";
    cin >> Id_Profil;
    cout << "Saisir le numero d'inscription : \n";
    cin >> num_inscri;
    cout << "Saisir le numero du telephone : \n";
    cin >> tel;
    cout << "Saisir le nom : \n";
    cin >> nom;
    cout << "Saisir le prenom : \n";
    cin >> prenom;
    cout << "Saisir l'adresse : \n";
    cin >> adresse;
}

Profil::Profil(int id, int num, std::string nom, std::string prenom, int tel, std::string adresse) {
    Id_Profil = id;
    num_inscri = num;
    this->nom = nom;
    this->prenom = prenom;
    this->tel = tel;
    this->adresse = adresse;
}

void Profil::AjouterAuteur(Auteur* A) {
    ListeAuteur.push_back(A);
}

void Profil::SupprimerAuteur(int id) {
    for (unsigned int i=0;i<ListeAuteur.size(); i++) {
        if (ListeAuteur[i]->Id_Auteur == id) {
            delete ListeAuteur[i];
            ListeAuteur[i]=NULL;
            for (unsigned int j = i; j < ListeAuteur.size(); j++)
                ListeAuteur[j] = ListeAuteur[j + 1];

        }
    }
}
void Profil::CreerProfil() {
    std::cout << "Enter the following information:\n";
    std::cout << "ID: ";
    std::cin >> Id_Profil;
    std::cout << "Number of inscription: ";
    std::cin >> num_inscri;
    std::cout << "Name: ";
    std::cin >> nom;
    std::cout << "First name: ";
    std::cin >> prenom;
    std::cout << "Phone number: ";
    std::cin >> tel;
    std::cout << "Address: ";
    std::cin >> adresse;
}
