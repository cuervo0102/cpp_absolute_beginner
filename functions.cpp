#include <iostream>

void happyBirthday(std::string name);


int main(){
    //function = a block of reusable code 


    std::string name = "siham";
    happyBirthday(name);
    return 0;
}

void happyBirthday(std::string name){
    std::cout << "Happy Birthday to you!" << name << std::endl;
    std::cout << "Happy Birthday to you!\n";
    std::cout << "Happy Birthday to you!\n";
    std::cout << "Happy Birthday to you!\n";
    std::cout << "Happy Birthday to you!\n";
    std::cout << "Happy Birthday to you!\n";
}