#include <iostream>


float surface(float longueur, float largeur=0){
    float rec_surface ;
    if (largeur == 0){
        largeur = longueur;
    }
    
    rec_surface = longueur * largeur;
    return rec_surface;

    
}

int main(){

    float longueur;
    float largeur;
    std::cin >> longueur;
    std::cin >> largeur;
    float res = surface(longueur, longueur);
    std::cout << "La surface du rectangle est : " << res << std::endl;
    return 0;
    
}