#include <iostream>


void changeValue(int* ptr) {
    *ptr = 20;  // Dereference the pointer to change the original value
}

int main() {
    int x = 10;
    changeValue(&x); // Pass the address of x to the function
    std::cout << x;  // Output will be 20, since changeValue modifies x via the pointer
}
