#include <iostream>

class Person{
private:
    std::string name;
    int age;

public:
    std::string getName(){
        return name;
    }

    void setName(std::string newName){
        this->name = newName;
    }

    int getAge(){
        return age;
    }

    void setAge(int newAge){
        this->age = newAge;
    }

    void displayInfo(){
        std::cout << "Hello " << name << ", you are " << age << "years old" << std::endl;
    }
};



int main(){
    Person p1;
    p1.setAge(23);
    p1.setName("Siham");

    p1.displayInfo();

}