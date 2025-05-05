// Created by  on 2025/04/29
#include "Plateau.h"
#include "Robot.h"
#include "sablier.h"
#include "Joueurs.h"
#include "Tuile_objectif.h"


#ifndef JEU_H
#define JEU_H

class Jeu {
private:
    Plateau le_plateau;
    vector<Robot> robots;
    vector<Joueurs> liste_joueurs;
    Sablier le_sablier;
    Tuile_objectif objectif_actuel;
    vector<Tuile_objectif> liste_tuiles_objectifs;

public:
//Constructeurs
Jeu(int nbr_joueurs);
Jeu();

//méthodes

//Disposer automatiquement les tuiles sur le plateau de manière aléatoire
void init_position_tuile(int x, int y, char type_tuile);

//Disposer automatiquement les 4 robots sur le plateau de manière aléatoire
void init_position_robot(Robot& robot);

//disposer les differents tokens et afficher le plateau
void initialiser_Jeu();

//deplacer un robot sur le plateau
//id_robot: id du robot a deplacer, x: coordonnee x de la tuile cible, y: coordonnee y de la tuile cible
void deplacer_robot(int id_robot, int x, int y);

//generation d'une tuile objectif aleatoire
Tuile_objectif tirer_tuile_objectif(Tuile_objectif& liste_tuiles_objectifs);

//comparer la solution du joueur actuel avec celle des autres joueurs
void valider_solution();

//gestion du tour de jeu: temps de jeu, choix du joueur, validation de la solution, affichage etat plateau
void gerer_tour_de_jeu( Joueurs& joueur_actuel);

//afficher le plateau de jeu
void afficher_plateau();

//destructeur
~Jeu() {
   //nothing to do here
}
};
#endif // JEU_H