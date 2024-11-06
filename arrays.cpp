#include <iostream>

int main(){
    std::string cars [] = {
        "Porsche",
        "Audi",
        "Range Rover"
    };

    std::cout << cars[0] << '\n';
    std::cout << cars[1] << '\n';
    std::cout << cars[2] << '\n';


    double prices [3];
    prices[0] = 234.00;
    prices[1] = 2678.00;
    prices[3] = 2653.00;


    std::cout << prices[0] << '\n';
    std::cout << prices[1] << '\n';
    std::cout << prices[2] << '\n';


    return 0;
}