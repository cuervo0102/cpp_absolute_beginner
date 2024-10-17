#include <iostream>

int main() {
    double temp;
    char unit;

    std::cout << "F : Fahrenheit" << std::endl;
    std::cout << "C : Celsius" << std::endl;

    std::cout << "Enter the unit (F/C): "; 
    std::cin >> unit;

    if (unit == 'F' || unit == 'f') {  
        std::cout << "Enter temperature in Fahrenheit: "; // Prompt for temperature
        std::cin >> temp;
        // Convert Fahrenheit to Celsius
        temp = (temp - 32) / 1.8;
        std::cout << "Temperature in Celsius: " << temp << "°C" << std::endl;
    } 
    else if (unit == 'C' || unit == 'c') { 
        std::cout << "Enter temperature in Celsius: "; 
        std::cin >> temp;

        temp = (1.8 * temp) + 32;
        std::cout << "Temperature in Fahrenheit: " << temp << "°F" << std::endl;
    } 
    else {
        std::cout << "Invalid unit. Please enter 'F' or 'C'." << std::endl;
    }

    return 0; 
}
