#include <iostream>


double calculatePrices(double prices [], int size){
    double total = 0;
    for(int i=0; i<size; i++){
        total += prices[i];
    }
    return total;
}



int main(){

    double prices [] = {12, 23, 45, 7788, 100};
    int size = sizeof(prices) / sizeof(double);
    double total = calculatePrices(prices, size);
    std::cout << total <<std::endl;
    return 0;
}