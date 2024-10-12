#ifndef __Book__
#define __Book__
#include <string>


class Book
{
private:
/*j'ai choisit le type char* au lieu de string parceque je ne connais pas comment retourné un string avec une fonction */
    std::string name;   
    std::string author;
    std::string editor;  //maison d'edition du libre
    std::string language; 
    std::string description; // ici on vas metre l'etat physique du Book et aussi un bref resumé du Book ainsi que ce qu'il posséde dans son contenu
    unsigned int number_of_pages; // unsigned pour précisé que le nombre soit positif et int pour entié
    bool available; //si le Book est à la bibliotheque ou non.    
public:
    /* Déclarons à présent notre constructeurs par défaut */
    Book();
    /* contructeur par copie il te sera utile quand tu aura plusieur fois le meme 
    Books dans la bibliothe et tu veut changé ça */
    Book(const Book& autre); 
    //puis le constructeur qui prend les parametre.
    Book(std::string name,std::string author,std::string editor,std::string language,std::string description, unsigned int number_of_pages, bool available);

    /* Déclaron les fonctions qui vont nous permetre d'intéragir avec la class */
    /*Commmençons par les fonctions qui permetent de modifié les informations du Book*/
    void setName(std::string);
    void setAuthor(std::string);
    void setEditor(std::string);
    void setLanguage(std::string);
    void setDescription(std::string);
    void setAvailable(bool);
    void setNumber_of_pages(int);
    /* Déclarons à présent les fonctions pour récupéré les valeurs du Book */
    std::string getName() const;
    std::string getAuthor() const;
    std::string getEditor() const;
    std::string getLanguage() const;
    std::string getDescription() const;
    unsigned int getNumber_of_pages() const;
    bool getAvailable() const;
    // Déclarons le destructeur.
    ~Book();

};

// le contructeur vas nous permettre de crée créé le Book par défaut.
   Book::Book()
    {
    name = "inconnu";  // Utilise strdup pour copier une chaîne vide
    author = "inconnu";
    editor = "inconnu";
    language = "inconnu";
    description = "inconnu";
     number_of_pages=0;
     available=false;
    }

    // Constructeur par copie
    Book::Book(const Book& autre) {
        this->name = autre.name; 
        this->author = autre.author;
        this->editor = autre.editor;
        this->language = autre.language;
        this->description = autre.description;
        this->number_of_pages = autre.number_of_pages; 
        this->available = autre.available;
    }

    // Constructeur avec paramètres
    Book::Book(std::string name,std::string author,std::string editor,std::string language,std::string description, unsigned int number_of_pages, bool available) {
        this->name = name;
        this->author = author;
        this->editor = editor;
        this->language = language;
        this->description = description;
        this->number_of_pages = number_of_pages;
        this->available = available;
    }

    // ici je définit tous simplement les fontions qui vont nous servir à enregistré un Book
    void Book::setName(std::string valeur)
    { //à cahque fois je vais libére l'espace avant d'affecter une nouvelle valeur
        this->name=valeur;
    }
    /* jutilise beaucoup le 'this' pour pas qu'il y ai une erreur dans le script à un moment 
    c'est pour corigé les ambiguté au cas ou tu utilise mes variable dant ton code*/
    void Book::setAuthor(std::string valeur)
        {

        this->author=valeur;
    }

    void Book::setEditor(std::string valeur)
        {

        this->editor=valeur;
    }

    void Book::setLanguage(std::string valeur)
        {

        this->language=valeur;
    }

    void Book::setDescription(std::string valeur)
        {

        this->description=valeur;
    }

    void Book::setAvailable(bool valeur)
        {
        this->available=valeur;
    }

    void Book::setNumber_of_pages(int valeur)
        {
        this->number_of_pages=valeur;
    }


    /* Déclarons à présent les fonctions pour récupéré les valeurs du Book */
    std::string Book::  getName() const 
    {
        return this->name ;
    }

    std::string Book::getAuthor() const 
    {
        return  this->author ;
    }

    std::string Book::getEditor() const 
    {
        return  this->editor ;
    }

    std::string Book::getLanguage() const 
    {
        return  this->language ;
    }

    std::string Book::getDescription() const 
    {
        return  this->description ;
    }

    unsigned int Book::getNumber_of_pages() const 
    {
        return  this->number_of_pages ;
    }

    bool Book::getAvailable() const 
    {
        return  this->available ;
    }


//puis je définit le destructeur
    Book :: ~Book(){}

#endif

/* coder par
Ateufo Arthur
email: ateufoarthur@gmail.com
 */