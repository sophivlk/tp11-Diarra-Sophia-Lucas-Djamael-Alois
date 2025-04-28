#include <iostream>
using namespace std;

#include "jeu.h"

//1 <=> tuile jaune
//2 <=> tuile rouge
//3 <=> tuile bleue
//4 <=> tuile verte
//5 <=> tuile multicolore

//Constructeur
Jeu::Jeu(){
    score=0;
    leplateau.initialiserPlateau();
    robot.placerRobot();
}

void Jeu::ChoisirObjectif();
{
 int cible;
 cible= rand()%5+1; // 1 à 5
    switch(cible)
    {
        case 1:
            tuile_objectif=tuile_jaune;
            break;
        case 2:
            tuile_objectif=tuile_rouge;
            break;
        case 3:
            tuile_objectif=tuile_bleue;
            break;
        case 4:
            tuile_objectif=tuile_verte;
            break;
        case 5:
            tuile_objectif=tuile_multicolore;
            break;
    }

}

void Jeu::initialiserJeu();
{
    leplateau.initialiserPlateau();
    ChoisirObjectif();
    placerCible();
    robot.placerRobot();
}