#ifndef __LIVRE__
#define __LIVRE__
#include <string>


class Livre
{
private:
/*j'ai choisit le type char* au lieu de string parceque je ne connais pas comment retourné un string avec une fonction */
    std::string nom;   
    std::string auteur;
    std::string editeur;  //maison d'edition du libre
    std::string langue; 
    std::string description; // ici on vas metre l'etat physique du livre et aussi un bref resumé du livre ainsi que ce qu'il posséde dans son contenu
    unsigned int nombre_de_pages; // unsigned pour précisé que le nombre soit positif et int pour entié
    bool disponible; //si le livre est à la bibliotheque ou non.    
public:
    /* Déclarons à présent notre constructeurs par défaut */
    Livre();
    /* contructeur par copie il te sera utile quand tu aura plusieur fois le meme 
    livres dans la bibliothe et tu veut changé ça */
    Livre(const Livre& autre); 
    //puis le constructeur qui prend les parametre.
    Livre(std::string nom,std::string auteur,std::string editeur,std::string langue,std::string description, unsigned int nombre_de_pages, bool disponible);

    /* Déclaron les fonctions qui vont nous permetre d'intéragir avec la class */
    /*Commmençons par les fonctions qui permetent de modifié les informations du livre*/
    void setNom(std::string);
    void setAuteur(std::string);
    void setEditeur(std::string);
    void setLangue(std::string);
    void setDescription(std::string);
    void setDisponible(bool);
    void setNombre_de_pages(int);
    /* Déclarons à présent les fonctions pour récupéré les valeurs du livre */
    std::string getNom() const;
    std::string getAuteur() const;
    std::string getEditeur() const;
    std::string getLangue() const;
    std::string getDescription() const;
    unsigned int getNombre_de_pages() const;
    bool getDisponible() const;
    // Déclarons le destructeur.
    ~Livre();

};
/* ce fichier montre la forme de l'objet LIVRE 
toute ses fonctions sont definit dans Livre.cpp
*/

#endif

/* coder par
Ateufo Arthur
email: ateufoarthur@gmail.com
 */