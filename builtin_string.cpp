#include <iostream>


int main(){
    //getline write sentence with spaces
    std::string name;
    std:: cout << "Enter your name: " ;
    std :: getline(std::cin, name);

    //length
    std::cout << (name.length() > 9 ? "hello " + name : "hey " + name) << std::endl;
 
   //name.clear()
   //name.empty()
   //name.append("")
   //name.at(0) index of returned letter
   //name.insert(0, "")
   //name.find(" ")
   //name.erase(0, 3)

}
