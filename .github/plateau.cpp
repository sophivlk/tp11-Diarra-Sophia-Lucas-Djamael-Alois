#include "plateau.h"

// Constructeur de Plateau : Initialise la grille à vide (toutes cases = 0)
Plateau::Plateau() {
    for (size_t i = 0; i < 16; i++)
        {
            for (size_t j = 0; j < 16; j++)
            {
                grille[i][j]=0;
            }
        }
}

// Méthode générerGrille : Met des murs sur les bords du plateau
void Plateau::genererGrille() {

}

void Plateau::placerMur(int x, int y, std::string orientation) { 
    //  logique pour placer un mur sur la grille
}

void Plateau::placerRobot(Robot robot) {
    // logique pour placer un robot sur la grille
}