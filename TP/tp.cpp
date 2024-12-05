#include <iostream>

class Hour {
public:
    int h, m, s;
    
    Hour() : h(0), m(0), s(0) {}
    
    Hour(int h, int m, int s) : h(h), m(m), s(s) {
        this->m += this->s / 60;
        this->s %= 60;
        this->h += this->m / 60;
        this->m %= 60;
        this->h %= 24;
    }
    
    Hour operator+(Hour hour) {
        return Hour(h + hour.h, m + hour.m, s + hour.s);
    }

    Hour operator+=(Hour hour){
        s += hour.s;
        m += hour.m + s / 60;
        s %= 60;
        h += hour.h + m / 60;
        m %= 60;
        h %= 24; 
        return *this;
    }

    Hour operator-(Hour hour) {
        int total_s1 = h * 3600 + m * 60 + s;  
        int total_s2 = hour.h * 3600 + hour.m * 60 + hour.s;  
        int diff_s = total_s1 - total_s2;

        if (diff_s < 0) {
            diff_s = 0;  
        }

        int new_h = diff_s / 3600;
        int new_m = (diff_s % 3600) / 60;
        int new_s = diff_s % 60;
        
        return Hour(new_h, new_m, new_s);
    }

    bool operator==( Hour hour){
        int total_s1 = h * 3600 + m * 60 + s;  
        int total_s2 = hour.h * 3600 + hour.m * 60 + hour.s;
        return total_s1 == total_s2;
    }

    bool operator<( Hour hour){
        int total_s1 = h * 3600 + m * 60 + s;  
        int total_s2 = hour.h * 3600 + hour.m * 60 + hour.s;
        return total_s1 < total_s2;
    }

    Hour operator++(){
        s++;
        if (s >= 60) {
            s = 0; m++;
        }
        if (m >= 60) {
            m = 0; h++;
        }
        if (h >= 24) {
            h = 0; 
        }
        return *this;
    }

    Hour operator++(int) {
        Hour temp = *this;  
        s++;
        if (s >= 60) { 
            s = 0; m++; 
        }
        if (m >= 60) {
            m = 0; h++; 
        }
        if (h >= 24) {
            h = 0; 
        }  
        return temp;  
    }

    Hour operator--() {
        s--;
        if (s < 0) {
            s = 59; m--;
        }
        if (m < 0) {
            m = 59; h--;
        }
        if (h < 0) {
            h = 23; 
        }
        return *this;
    }

    Hour operator--(int) {
        Hour temp = *this;  
        s--;
        if (s < 0) {
            s = 59; m--;
        }
        if (m < 0) {
            m = 59; h--;
        }
        if (h < 0) {
            h = 23; 
        }
        return temp;  
    }

    friend std::ostream& operator<<(std::ostream& out, Hour& hour) {
        out << (hour.h < 10 ? "0" : "") << hour.h << ":"
            << (hour.m < 10 ? "0" : "") << hour.m << ":"
            << (hour.s < 10 ? "0" : "") << hour.s;
        return out;
    }

    friend std::istream& operator>>(std::istream& in, Hour& hour) {
        std::cout << "Enter hours, minute, and seconds: ";
        in >> hour.h >> hour.m >> hour.s;
        hour.m += hour.s / 60;
        hour.s %= 60;
        hour.h += hour.m / 60;
        hour.m %= 60;
        hour.h %= 24;
        return in;
    }
};


    

int main() {
    Hour h1(5, 59, 45);
    // Hour h2(5, 59, 45);
    Hour h2(2, 30, 30);

    Hour h3 = h1 + h2;  
    Hour h4 = h1 - h2;

    std::cout << "h1: " << h1 << std::endl;  
    std::cout << "h2: " << h2 << std::endl;  
    std::cout << "h3 (h1 + h2): " << h3 << std::endl;  
    std::cout << "h4 (h1 - h2): " << h4 << std::endl;


    if (h1 == h2) {
        std::cout << "h1 and h2 are equal." << std::endl;
    } else {
        std::cout << "h1 and h2 are not equal." << std::endl;
    }


    if (h1 < h2) {
        std::cout << "h1 is earlier than h2." << std::endl;
    } else {
        std::cout << "h1 is not earlier than h2." << std::endl;
    }

    h1 += h2;
    std::cout << "h1 after +=: " << h1 << std::endl;

    // ++h1;
    // std::cout << "After prefix increment: " << h1 << std::endl;


    Hour h5 = h1++;
    std::cout << "After postfix increment: " << h1 << std::endl;
    std::cout << "Stored value (postfix result): " << h5 << std::endl;

    return 0;
}