#include <iostream>


int main(){
    int numbers [] = {23,4561,7,88,991,1,1};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int temp = 0;
    for (int i=0; i < size-1; i++){
        for (int j=0; j < size - i -1; j++){
            if(numbers[j] > numbers[j+1]){
                temp = numbers[j];
                numbers[j] = numbers[j+1];
                numbers[j+1] = temp;

            }
        }
    }
    for (int nbr: numbers){
        std::cout << nbr << '\n';
    }
    return 0;
}