#include <iostream>

class Rectangle {
private:
    double width;
    double length;

public:

    Rectangle(double w, double l);
    

    void getRectangle() const;

    void setRectangle(double w, double l);
    
    double calculateArea() const;
};


Rectangle::Rectangle(double w, double l) {
    setRectangle(w, l);
    std::cout << "Object created" << std::endl;
}


void Rectangle::getRectangle() const {
    std::cout << "Width: " << width << ", Length: " << length << std::endl;
}


void Rectangle::setRectangle(double w, double l) {
    if (w >= 0 && l >= 0) {
        width = w;
        length = l; 
        std::cout << "Width and length are positive" << std::endl;
    } else {
        std::cout << "Width and length must be non-negative" << std::endl;
    }
}


double Rectangle::calculateArea() const {
    return width * length; 
}

int main() {
    Rectangle rect(5.0, 3.0); 
    rect.getRectangle();      
    std::cout << "Area: " << rect.calculateArea() << std::endl;
    return 0;
}
