/* Dans ce fichier nous allors tous simplement définir nos fonction */
#include "../include/Livre.hpp"
#include <iostream>

// le contructeur vas nous permettre de crée créé le livre par défaut.
   Livre::Livre()
    {
    nom = "inconnu";  // Utilise strdup pour copier une chaîne vide
    auteur = "inconnu";
    editeur = "inconnu";
    langue = "inconnu";
    description = "inconnu";
     nombre_de_pages=0;
     disponible=false;
    }

    // Constructeur par copie
    Livre::Livre(const Livre& autre) {
        nom = autre.nom; 
        auteur = autre.auteur;
        editeur = autre.editeur;
        langue = autre.langue;
        description = autre.description;
        nombre_de_pages = autre.nombre_de_pages; 
        disponible = autre.disponible;
    }

    // Constructeur avec paramètres
    Livre::Livre(std::string nom,std::string auteur,std::string editeur,std::string langue,std::string description, unsigned int nombre_de_pages, bool disponible) {
        this->nom = nom;
        this->auteur = auteur;
        this->editeur = editeur;
        this->langue = langue;
        this->description = description;
        this->nombre_de_pages = nombre_de_pages;
        this->disponible = disponible;
    }

    // ici je définit tous simplement les fontions qui vont nous servir à enregistré un livre
    void Livre::setNom(std::string valeur)
    { //à cahque fois je vais libére l'espace avant d'affecter une nouvelle valeur
        this->nom=valeur;
    }
    /* jutilise beaucoup le 'this' pour pas qu'il y ai une erreur dans le script à un moment 
    c'est pour corigé les ambiguté au cas ou tu utilise mes variable dant ton code*/
    void Livre::setAuteur(std::string valeur)
        {

        this->auteur=valeur;
    }

    void Livre::setEditeur(std::string valeur)
        {

        this->editeur=valeur;
    }

    void Livre::setLangue(std::string valeur)
        {

        this->langue=valeur;
    }

    void Livre::setDescription(std::string valeur)
        {

        this->description=valeur;
    }

    void Livre::setDisponible(bool valeur)
        {
        this->disponible=valeur;
    }

    void Livre::setNombre_de_pages(int valeur)
        {
        this->nombre_de_pages=valeur;
    }


    /* Déclarons à présent les fonctions pour récupéré les valeurs du livre */
    std::string Livre::  getNom() const 
    {
        return this->nom ;
    }

    std::string Livre::getAuteur() const 
    {
        return  this->auteur ;
    }

    std::string Livre::getEditeur() const 
    {
        return  this->editeur ;
    }

    std::string Livre::getLangue() const 
    {
        return  this->langue ;
    }

    std::string Livre::getDescription() const 
    {
        return  this->description ;
    }

    unsigned int Livre::getNombre_de_pages() const 
    {
        return  this->nombre_de_pages ;
    }

    bool Livre::getDisponible() const 
    {
        return  this->disponible ;
    }


//puis je définit le destructeur
    Livre :: ~Livre(){}



/* coder par
Ateufo Arthur
email: ateufoarthur@gmail.com
 */