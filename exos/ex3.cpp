#include <iostream>
#include <cmath> 

float surface(float longueur, float largeur) {
    return longueur * largeur;
}

float surface(float rad) {
    return M_PI * rad * rad;
}

int main() {
    float longueur, largeur;
    std::cout << "Entrez la longueur du rectangle: ";
    std::cin >> longueur;
    std::cout << "Entrez la largeur du rectangle: ";
    std::cin >> largeur;

    std::cout << "La surface du rectangle est : " << surface(longueur, largeur) << std::endl;

    std::cout << "**************************" << std::endl;

    float rad;
    std::cout << "Entrez le rayon du cercle: ";
    std::cin >> rad;

    std::cout << "La surface du cercle est : " << surface(rad) << std::endl;

    return 0;
}
