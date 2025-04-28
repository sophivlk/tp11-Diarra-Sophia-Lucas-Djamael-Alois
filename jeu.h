
/*Gestion du jeu
1. Demarrer la partie en initialisant le plateau et en choisssant une cible aleatoire etplacer les 4 roobots
é. 

*/
#include "plateau.h"
#include "objectif.h"

#ifndef Jeu_h
#define Jeu_h




class Jeu{
    private:
        plateau leplateau;
        objectif tuile_objectif; //tuile_jaune, tuile_rouge, tuile_bleue, tuile_verte et tuile_multicolore
        Joueur lejoueur;
        int score;
        Robot robot;


    public:
    //constructeur
    Jeu();


    //choisirObjectif() doit choisir une cible parmi les 5
     objectif ChoisirObjectif();

    //initialiserJeu() doit initialiser le plateau et choisir une cible
    void initialiserJeu();

    //placerCible() doit placer la cible sur le plateau
    placerCible();

    bool validerSolution();
    /
    void terminerPartie();

    //Destructeur
    ~Jeu();

};
#endif;