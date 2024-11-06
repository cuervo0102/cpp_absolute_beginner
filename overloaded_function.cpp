#include <iostream>

void favColor(){
    std::cout << "My fav color is Black" << std::endl;
};

void favColor(std::string color){
    std::cout << "My fav color is " << color << std::endl;
};

void favColor(std::string color1, std::string color2){
    std::cout << "My fav color is " << color1 << " and " << color2 << std::endl;
};


int main(){
    favColor("hotpink", "cyan");
    return 0;
}