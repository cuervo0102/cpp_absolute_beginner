#include <iostream>
#include <string>

class Cellule {
    int joueur;

public:
    Cellule() {
        joueur = 0;
    }

    void afficherCellule(int j) {
        if (j == 1) {
            std::cout << "You are X \n";
        }
        else if (j == 2) {
            std::cout << "You are Y \n";
        }
        else {
            std::cout << "Choose One Or Two\n";
        }
    }

    friend class Grille;  
};

class Grille {
private:
    std::string tab[3][3];  
    int row, col;
    int joueur;

public:

    Grille() {
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                tab[i][j] = " ";  
            }
        }
    }

    
    void afficheGrille() {
        std::cout << std::string(15, '-') << std::endl;
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                std::cout << "| " << tab[i][j] << " |";
            }
            std::cout << std::endl;
            std::cout << std::string(15, '-') << std::endl;
        }
    }


    void jouer(int joueur) {

        std::cout<<"choose One ot Two";
        std::cin >> joueur;

        std::cout << "Game start\n";
        afficheGrille();
        std::cout << "Choose row (0, 1, or 2): ";
        std::cin >> row;
        std::cout << "Choose column (0, 1, or 2): ";
        std::cin >> col;


        if (row >= 0 && row < 3 && col >= 0 && col < 3 && tab[row][col] == " ") {
            if (joueur == 1) {
                tab[row][col] = "X";  
            }
            else if (joueur == 2) {
                tab[row][col] = "O";  
            }
            afficheGrille();  
        }
        else {
            std::cout << "Invalid move, try again.\n";
        }
    }
};

int main() {
    int j;
    std::cout << "Choose one or two: ";
    std::cin >> j;
    Cellule c;
    c.afficherCellule(j);

    Grille g;
    
    g.jouer(j);  
    return 0;
}
