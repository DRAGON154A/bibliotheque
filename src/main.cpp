#include "../include/Livre.h"
#include <iostream>
/* ne t'inquite pas ce fichiér est juste pour le teste des fonctions */
using namespace std;

int main(void)
{
 
    Livre livre1;
    // vérifions que les parametres pas défaut sont bien assigné.
        cout << endl<<"livre1" << endl<<"Teste des valeur par defaut "<<endl;
        cout << "nom " << livre1.getNom()<<endl;
        cout << "Auteur " << livre1.getAuteur() <<endl;
        cout << "Editeur " << livre1.getEditeur() <<endl;
        cout << "Langue " << livre1.getLangue() <<endl;
        cout << "Description " << livre1.getDescription() <<endl;
        cout << "Disponibilité " << livre1.getDisponible() <<endl;
        cout << "Nombre de pages " << livre1.getNombre_de_pages() <<endl;

    Livre livre2;

        //affectons certaine valeur pour tester l'ajout

        livre2.setNom("Ajouter");
        livre2.setAuteur("Ajouter");
        livre2.setEditeur("Ajouter");
        livre2.setLangue("Ajouter");
        livre2.setDescription("Ajouter");
        livre2.setDisponible(true);
        livre2.setNombre_de_pages(200);


        cout << endl<<"livre2" << endl<<"Teste des valeur ajouter "<<endl;
        cout << "nom " << livre2.getNom()<<endl;
        cout << "Auteur " << livre2.getAuteur() <<endl;
        cout << "Editeur " << livre2.getEditeur() <<endl;
        cout << "Langue " << livre2.getLangue() <<endl;
        cout << "Disponibilité " << livre2.getDisponible() <<endl;
        cout << "Nombre de pages " << livre2.getNombre_de_pages() <<endl;

    Livre livre3("le_troisime_livre ","arthur ","ma_consience","Fr","histoir,",120,true);

        //teste du contructeur par parametre.

        cout << endl<<"livre3 " << endl<<"Teste du contructeur par parametre "<<endl;
        cout << "nom " << livre3.getNom()<<endl;
        cout << "Auteur " << livre3.getAuteur() <<endl;
        cout << "Editeur " << livre3.getEditeur() <<endl;
        cout << "Langue " << livre3.getLangue() <<endl;
        cout << "Disponibilité " << livre3.getDisponible() <<endl;
        cout << "Nombre de pages " << livre3.getNombre_de_pages() <<endl;
    
    Livre livre4 =livre2 ;
        // teste du constructeur par copie.

        cout << endl<<"livre4 " << endl<<"Teste du contructeur par copie "<<endl;
        cout << "nom " << livre4.getNom()<<endl;
        cout << "Auteur " << livre4.getAuteur() <<endl;
        cout << "Editeur " << livre4.getEditeur() <<endl;
        cout << "Langue " << livre4.getLangue() <<endl;
        cout << "Disponibilité " << livre4.getDisponible() <<endl;
        cout << "Nombre de pages " << livre4.getNombre_de_pages() <<endl;
    

    return 0;
}
/*
 je repete encore que ce fichier est juste pour des test donc il peut etre supprime completement
 Lord de la compilation du programme final il ne faut donc pas oublié le fichié Livre.cpp
 la gestion des erreur n'a pas ete implementer je compte sur toi pour resoudre ses erreures
 mais si besoin peut implémenté la gestion d'erreur sur les setteur et aussi sur constrructeur 
 qui prend les parametres
*/