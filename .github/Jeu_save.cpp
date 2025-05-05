
#include <vector>
#include <cstdlib>
#include <ctime>
#include <iostream>
#include <vector>
using namespace std;

#include "Jeu.h"



// Fonction pour vérifier si une position est libre pour eviter le chevauchement
bool estPositionLibre(int x, int y, const std::vector<Robot>& robots) {
    for (const auto& robot : robots) {
        if (robot.getX() == x && robot.getY() == y)
            return false; // Position occupée
    }
    return true; // Position libre
}



void Jeu::set_Joueurs(){
    
    cout << "=== Ajout des joueurs ===" << endl;
    while (true) {
        cout << "Entrez le nom du joueur puis entrée pour valider (ou tapez 'commencer la partie' pour démarrer) :" << endl;
        string input;
        getline(cin, input);
    
        if (input == "commencer la partie") break;
        if (!input.empty()) {
            Joueur j(input, 0, 0); // constructeur avec nom, score, déplacements
            joueurs.push_back(j);
        }
    }
    nbr_joueurs = joueurs.size(); // Mettre à jour le nombre de joueurs
    cout<< "Nombre de joueurs : " << nbr_joueurs << endl;
    // Affichage des joueurs
    cout << "\nil y a " <<  << " joueurs dans la partie" << endl;
    cout << "\n=== Liste des joueurs ===" << endl;
    for (size_t i = 0; i < joueurs.size(); ++i) {
        cout << "Joueur " << i + 1 << " : " << joueurs[i].getNom() << endl;
    }
    
    //commencer la partie
    cout << "\n=== Partie commence ===" << endl;
 }


//a modifier
 void Jeu::init_position_tuile(){
    for (int i=0; i<17; i++){
        Tuile_objectif tuile_temp;
        tuile_temp.Tuile_objectif();
        liste_tuiles_objectifs.push_back(tuile_temp); //ajout de la tuile a la liste de tuiles
    }
};

    // Constructeur par défaut
Jeu::Jeu(){


    //reprendre la fonction creationRobot de la branche main_test de 
    //intialisation des robots
    srand(time(0)); // Initialisation du générateur aléatoire
    for (int i = 0; i < 4; ++i) {
        int x, y;
        do {
            x = rand() % 16;
            y = rand() % 16;
        } while (!estPositionLibre(x, y, this->robots)); // Vérifie la position dans le vecteur déjà créé
 
        robots.push_back(Robot(x, y, static_cast<TypeCouleur>(i))); // Crée un robot avec une couleur différente
    }
    return robots; // Retourne la liste créée
    
    //initialisation des tuiles: disposition des 17 tuiles
    Jeu.init_position_tuile();

    //initialisation du plateau
    Plateau le_plateau; //creation d'un plateau temporaire
    le_plateau.genererGrille(); //creation d'un plateau de jeu
    le_plateau.placerMur(); //affichage du plateau de jeu
    le_plateau.placerAngle(); //placement des angles
    le_plateau.afficher_plateau(); //affichage du plateau de jeu

    //initialisation de la liste de joueurs en utilisant set_Joueurs
    set_Joueurs(); //initialisation de la liste de joueurs
    //initialisation du sablier
    le_sablier.Sablier(); //init le sablier a 0
};

//set tuile objectif_actuel, met a jour la position de cette tuile
 Tuile_objectif Jeu::Tuile_objectif tirer_tuile_objectif(Tuile_objectif& liste_tuiles_objectifs){


};

 //demarre la phase de recherche et activation du sablier
void Jeu::annoncer_Solution(){
    //Entrer le nombre de deplacement
    le_sablier.activer_Sablier();
};

 //
void Jeu::proposer_Solution(){
    
while (true) {

    cout << "\nEntrez la couleur du robot a deplacer (rouge, vert, bleu, jaune) ou 'fin' pour terminer : " << endl;
    string couleurInput;
    getline(cin, couleurInput);

    if (couleurInput == "fin") break;
    // Convertir la chaine de caractères couleurInput en TypeCouleur
    TypeCouleur couleurRobot;
    if (couleurInput == "rouge") {
        couleurRobot = ROUGE;
    } else if (couleurInput == "vert") {
        couleurRobot = VERT;
    } else if (couleurInput == "bleu") {
        couleurRobot = BLEU;
    } else if (couleurInput == "jaune") {
        couleurRobot = JAUNE;
    } else {
        cout << "Couleur invalide" << endl;
        continue; // Passer à l'itération suivante de la boucle
    }

    cout << "Entrez la direction (haut, bas, gauche, droite) du robot " << couleurInput << " : " << endl;
    string directionInput;
    getline(cin, directionInput);


    robots[couleurRobot].deplacement(directionInput, robotPtrs);
    cout << "Robot " << couleurInput << " : (" << robots[couleurRobot].getX() << ", " << robots[couleurRobot].getY() << ")" << endl;


    //affichage de la grille a la fin de chaque déplacement ici
}

//nombre de deplacements effectues par les 4 robots
for(size_t i = 0; i < robots.size(); ++i) {
    std::cout << "Robot " << i+1 << " : " 
                << robots[i].getNombreDeDeplacements() 
                << " deplacements" << std::endl;
}

//nombre de deplacements total
int total_deplacements = 0;
for(size_t i = 0; i < robots.size(); ++i) {
    total_deplacements += robots[i].getNombreDeDeplacements();
}
cout << "Nombre total de deplacements : " << total_deplacements << endl;

objectif_courantX = robots[getCouleur()].getX();
objectif_courantY = robots[getCouleur()].getY();
    
};
//verifier si la position de la tuile objectif actuel est celle de la case objectif
void Jeu::valider_solution(Tuile_objectif objectif_courant){
    posX= objectif_actuel.get_X();
    posY= objectif_actuel.get_Y();
    if ((posX,posY)= (objectif_courant.get_X(),objectif_courant.get_Y())){
        cout << "Solution incorrecte" << endl;
};
}


void Jeu::afficher_plateau(){

};
Jeu::~Jeu() {
    //nothing to do here
}
