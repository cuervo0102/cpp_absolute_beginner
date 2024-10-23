#include <iostream>

int main(){

    std::string name ; 
    int age;
    float size;
    std :: cout << "Hey whats ur name?" << std:: endl;
    std :: getline(std::cin, name);
    std:: cout << "write ur age:" << std::endl;
    std::cin >> age;
    std:: cout << "write ur size:" << std::endl;
    std::cin >> size;


    std::cout << "hey "<< name << " u have " << age << " years old" << " and ur " << size << " cm." <<std::endl;



}