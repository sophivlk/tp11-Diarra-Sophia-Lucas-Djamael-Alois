#ifndef PLATEAU_H
#define PLATEAU_H

#include <vector>
#include "robot_test.h" // à modfifer selon appelation exacte
// #include "TuileObjectif.h" // à modfifer selon appelation exacte
#include <iostream>    // pour std::cout
#include <string>      // pour std::string
#include <vector>      // pour std::vector


class Plateau {
private:
    // Attributs : Grille, Robot, Tuiles Objectif
    int grille[16][16];
    std::vector<Robot>
    //std::vector<TuileObjectif>

public:
    // Constructeur (vide)
    Plateau();
    
    // Méthodes 
    void genererGrille(); //Met des murs sur les bords du plateau
    void placerMur(int x, int y, std::string orientation); //Place un mur à (x,y)
    void placerRobot(Robot robot); //Place un robot à une case vide

    void afficherPlateau();
};

#endif
