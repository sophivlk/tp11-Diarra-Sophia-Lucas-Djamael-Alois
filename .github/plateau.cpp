#include "plateau.h"
#include "robot_test.h"  // utilisé pour le test tant que le vrai robot n'est pas prêt
#include <iostream>    // pour std::cout
#include <string>      // pour std::string
#include <vector>      // pour std::vector
#include <cstdlib> // pour rand()
#include <ctime>   // pour time()

// Constructeur de Plateau : Initialise la grille à vide (toutes cases = 0)
Plateau::Plateau() {
    for (int i = 0; i < 16; i++){
            for (int j = 0; j < 16; j++)
            {
                grille[i][j]=0;
            }
    }
}

// Méthode générerGrille : Met des murs sur les bords du plateau
void Plateau::genererGrille() {
    for (int i = 0; i < 16; i++) {
    grille[0][i] = 1;        // haut
    grille[15][i] = 1;       // bas
    grille[i][0] = 1;        // gauche
    grille[i][15] = 1;       // droite
}

}

void Plateau::placerMur(int x, int y, std::string orientation) { 
   if (orientation == "horizontal") {
    grille[x][y] = 1;           // mur à gauche
    grille[x][y + 1] = 1;       // mur à droite
}
    else if (orientation == "vertical") {
        grille[x][y] = 1;           // mur en haut
        grille[x + 1][y] = 1;       // mur en bas
    } 
}

void Plateau::placerRobot(Robot robot) {
    srand(time(0)); // Initialise le générateur de nombres aléatoires

    int x, y;
    do {
        x = rand() % 16;
        y = rand() % 16;
    } while (grille[x][y] != 0); // recommence si la case est occupée

    grille[x][y] = 2; // robot rouge = 2, par exemple

    // Met à jour la position du robot
    robot.setPosition(x, y);
}

void Plateau::afficherPlateau() {
    for (int i = 0; i < 16; i++) {
        for (int j = 0; j < 16; j++) {
            if (grille[i][j] == 0) std::cout << " ";
            else if (grille[i][j] == 1) std::cout << "#";
            else if (grille[i][j] == 2) std::cout << "R"; // robot rouge
            std::cout << " ";
        }
        std::cout << std::endl;
    }
}
