// Class Robot

#include "robot.h"
#include <iostream>
#include <ctime>    // Pour srand()

using namespace std;


//constructeur sans parametre (position aleatoire dans les limites du plateau)
Robot::Robot(){
    int maxX = 16;
    int maxY = 16;

    srand(time(0));    //initialiser le generateur de nombres aleatoires
    x = rand() % maxX; //position aleatoire entre 0 et maxX
    y = rand() % maxY; //position aleatoire entre 0 et maxY

    couleur = ROUGE; //par defaut le robot est rouge
    nombre_de_deplacements = 0; //par defaut le robot n'a pas deplacements
}

//constructeur a partir de parametres x, y, couleur
Robot::Robot(int x, int y, TypeCouleur c, int nombre_de_deplacements){
    this->x = x; //initialiser la position x du robot
    this->y = y; //initialiser la position y du robot
    this->couleur = c; //initialiser la couleur du robot
    this->nombre_de_deplacements = nombre_de_deplacements; //initialiser le nombre de deplacements
}

//accesseurs x
int Robot::getX() const{
    return x;
}

//accesseurs y
int Robot::getY() const{
    return y;
}

//accesseurs couleur
TypeCouleur Robot::getCouleur() const{
    return couleur;
}

//accesseurs nombre_de_deplacements
int Robot::getNombreDeDeplacements() const{
    return nombre_de_deplacements;
}