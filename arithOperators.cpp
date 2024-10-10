#include <iostream>


int main(){

    int students = 20;
    int teachers = 7;
    //incremented 
    int spp = students++;
    std :: cout << "spp: " << spp << std:: endl;
    std :: cout << "Incre: " << students << std:: endl;
    int ppt = ++teachers;
    std :: cout << "ppt: " << ppt << std:: endl;
    std :: cout << "Incre: " << teachers << std:: endl;
    //decremented 
    int spp_d = students-- ;
    std :: cout << "Decr: " << spp_d << std:: endl;
    std :: cout << "Decr: " << students << std:: endl;
    int ppt_d = --teachers;
    std :: cout << "ppt: " << ppt_d << std:: endl;
    std :: cout << "Decr: " << teachers << std:: endl;



    //sum
    int classes = 5;
    classes += 1;
    std :: cout << "Number of classes: " << classes << std:: endl;
    //product 
    int boards =  8;
    boards *= 2;
    std :: cout << "Number of boards: " << boards << std:: endl;
    //subm
    int windows = 10;
    windows -= 3;
    std :: cout << "Number of windows: " << windows << std:: endl;
    //division 
    int board_pens = 45;
    board_pens /= 9;
    std :: cout << "Number of board pens : " << board_pens << std:: endl;
    //modulu 
    int chairs = 64;
    chairs %= 7;
    std :: cout << "Number of chairs : " << chairs << std:: endl;
    





}