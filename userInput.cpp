#include <iostream>


int main() {

    std::string name; 
    int age ;

    std :: cout << "Hey whats ur name?" << std:: endl;
    std :: getline(std::cin, name);
    std :: cout << "good, whats ur age?"<< std:: endl;
    std :: cin >> age; 
    std :: cout << "Hey "<< name << ", ur age " << age << std:: endl;


}