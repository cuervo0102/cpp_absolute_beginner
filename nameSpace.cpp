#include <iostream>

namespace first {
    int x = 1;
}

namespace second {
    int x = 2;

}


int main() {
    using namespace first;
    std :: cout << first :: x << std :: endl;
    std :: cout << "Without Using prefix: " << x << std :: endl;
    

}