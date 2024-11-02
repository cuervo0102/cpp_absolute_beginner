#include <iostream>
#include <string>

class Person {
    std::string first_name;
    std::string last_name;
    int age;

public:

    Person();
    Person(std::string fn, std::string ln, int age);


    std::string getFirstName();
    void setFirstName(std::string first_name);


    std::string getLastName();
    void setLastName(std::string last_name);


    int getAge();
    void setAge(int age);


    void displayInformation();
};


Person::Person() : first_name("Joe"), last_name("Doe"), age(0) {}

Person::Person(std::string fn, std::string ln, int age)
    : first_name(fn), last_name(ln), age(age) {}


std::string Person::getFirstName() {
    return first_name;
}

void Person::setFirstName(std::string first_name) {
    this->first_name = first_name;
}

std::string Person::getLastName() {
    return last_name;
}

void Person::setLastName(std::string last_name) {
    this->last_name = last_name;
}

int Person::getAge() {
    return age;
}

void Person::setAge(int age) {
    this->age = age;
}


void Person::displayInformation() {
    std::cout << "First Name: " << first_name << "\n"
              << "Last Name: " << last_name << "\n"
              << "Age: " << age << " years old" << std::endl;
}

int main() {
    // Person P1("Siham", "Essaji", 23);
    Person p2;
    p2.displayInformation();

    return 0;
}
