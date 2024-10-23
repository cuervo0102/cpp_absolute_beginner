#include <iostream>
#include <iomanip>

int main() {
    std::cout << std::left << std::setw(15) << "Article" << "Prix" << std::endl;
    std::cout << std::setfill('-') << std::setw(20) << "" << std::endl;

    std::string article1 = "Pomme";
    std::string article2 = "Banane";
    std::string article3 = "Orange";
    float prix1 = 1.50;
    float prix2 = 0.75;
    float prix3 = 1.20;

    std::cout << std::setfill(' ') << std::endl;
    std::cout << std::setw(15) << std::left << article1 << std::setw(10) << std::right << std::setprecision(2) << "$" << prix1 << std::endl;
    std::cout << std::setw(15) << std::left << article2 << std::setw(10) << std::right  << std::setprecision(2) << "$" << prix2 << std::endl;
    std::cout << std::setw(15) << std::left << article3 << std::setw(10) << std::right  << std::setprecision(2) << "$" << prix3 << std::endl;
}
