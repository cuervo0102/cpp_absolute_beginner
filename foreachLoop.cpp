#include <iostream>

int main(){

    std::string gardes [] = {"A", "B", "C", "D", "F"};
    for(std::string grade : gardes){
        std::cout << grade << "\n";
    }
    return 0;
}