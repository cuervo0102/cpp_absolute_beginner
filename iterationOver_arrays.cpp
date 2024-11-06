#include <iostream>


int main(){

    std::string names [] = {"Siham", "Oussama", "Moad", "Chaimae"};
    for (int i = 0; i<sizeof(names)/sizeof(std::string); i++){
        std::cout << names[i] << "\n";
    }
    return 0;
}