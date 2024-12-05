#include <iostream>
#include <iomanip>
class Cellule{
    private:
        int joueur;

    public:
        Cellule();
        int  afficherCellule(int j){
            if (j == 2){
                std::cout << "O\n";
                
            }
            else if (j == 1){
                std::cout << "X\n";
                
            }
            else{
                std::cout << "no player exists\n";
                
            }
            return 0;
        }

        void jouer(){

        }

        friend class Grille;
};
Cellule::Cellule(): joueur(1){};


class Grille{
    private:
        int tab[3][3] = {{0,0,0},{0,0,0},{0,0,0}};

    public:
        void afficherGrille(){
            std::cout << std::string(15, '-') << std::endl;
            for(int i=0; i < 3; i++){
                for (int j=0; j<3; j++){
                    std::cout << "| " <<tab[i][j] << " |";
                }
                std::cout << std::endl;
            }
            std::cout << std::string(15, '-') << std::endl;}

        void jouer(){
            int nbr;
            std::cout << "Choose X or O \n";
            std::cin >> nbr;  

            
        };
        
};

int main(){
    Cellule c;
    c.afficherCellule(2);

    Grille g;
    g.afficherGrille();
    return 0;
}