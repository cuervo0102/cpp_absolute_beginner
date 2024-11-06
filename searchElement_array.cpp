#include <iostream>


int searchElement(int numbers[], int size, int element){
    for(int i= 0; i < size; i++){
        if(numbers[i] == element){
            return i;
        }
    }
    return -1;
}

int main(){
    int numbers [] = {1,2,3,4,5,6,7,8,9};
    int size = sizeof(numbers) / sizeof(numbers[0]);
    int element;
    std::cout << "Enter the element:  ";
    std::cin >> element;
    int index = searchElement(numbers, size, element);

    if(index != -1){
        std::cout << "Index of " << element << ":" << index << "\n";
        
    }else{
        std::cout << "Not Found" << std::endl;
    }
    return 0;
}