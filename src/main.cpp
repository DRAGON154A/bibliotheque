#include "../include/Fonctions.hpp"
#include <iostream>
/* ne t'inquite pas ce fichiér est juste pour le teste des fonctions */
using namespace std;

int main(void)
{Book livre1;
    // vérifions que les parametres pas défaut sont bien assigné.
        cout << endl<<"livre1" << endl<<"Teste des valeur par defaut "<<endl;
        cout << "nom " << livre1.getName()<<endl;
        cout << "Auteur " << livre1.getAuthor() <<endl;
        cout << "Editeur " << livre1.getEditor() <<endl;
        cout << "Langue " << livre1.getLanguage() <<endl;
        cout << "Description " << livre1.getDescription() <<endl;
        cout << "Disponibilité " << livre1.getAvailable() <<endl;
        cout << "Nombre de pages " << livre1.getNumber_of_pages() <<endl;

    Book livre2;

        //affectons certaine valeur pour tester l'ajout

        livre2.setName("Ajouter");
        livre2.setAuthor("Ajouter");
        livre2.setEditor("Ajouter");
        livre2.setLanguage("Ajouter");
        livre2.setDescription("Ajouter");
        livre2.setAvailable(true);
        livre2.setNumber_of_pages(200);


        cout << endl<<"livre2" << endl<<"Teste des valeur ajouter "<<endl;
        cout << "nom " << livre2.getName()<<endl;
        cout << "Auteur " << livre2.getAuthor() <<endl;
        cout << "Editor " << livre2.getEditor() <<endl;
        cout << "Langue " << livre2.getLanguage() <<endl;
        cout << "Disponibilité " << livre2.getAvailable() <<endl;
        cout << "Nombre de pages " << livre2.getNumber_of_pages() <<endl;

    Book livre3("le_troisime_livre ","arthur ","ma_consience","Fr","histoir,",120,true);

        //teste du contructeur par parametre.

        cout << endl<<"livre3 " << endl<<"Teste du contructeur par parametre "<<endl;
        cout << "nom " << livre3.getName()<<endl;
        cout << "Auteur " << livre3.getAuthor() <<endl;
        cout << "Editeur " << livre3.getEditor() <<endl;
        cout << "Langue " << livre3.getLanguage() <<endl;
        cout << "Disponibilité " << livre3.getAvailable() <<endl;
        cout << "Nombre de pages " << livre3.getNumber_of_pages() <<endl;
    
    Book livre4 =livre2 ;
        // teste du constructeur par copie.

        cout << endl<<"livre4 " << endl<<"Teste du contructeur par copie "<<endl;
        cout << "nom " << livre4.getName()<<endl;
        cout << "Auteur " << livre4.getAuthor() <<endl;
        cout << "Editor " << livre4.getEditor() <<endl;
        cout << "Langue " << livre4.getLanguage() <<endl;
        cout << "Disponibilité " << livre4.getAvailable() <<endl;
        cout << "Nombre de pages " << livre4.getNumber_of_pages() <<endl;
    

    return 0;
}
/*
 je repete encore que ce fichier est juste pour des test donc il peut etre supprime completement
 Lord de la compilation du programme final il ne faut donc pas oublié le fichié Livre.cpp
 la gestion des erreur n'a pas ete implementer je compte sur toi pour resoudre ses erreures
 mais si besoin peut implémenté la gestion d'erreur sur les setteur et aussi sur constrructeur 
 qui prend les parametres
*/