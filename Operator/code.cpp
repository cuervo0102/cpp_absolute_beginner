#include <iostream>


class Code{
    private:
        int code;

    public:
        Code(){
            code = 0;
        }
        Code(int c):code(c){
            this->code = c;
        }

        Code operator+(Code c){
            return Code(code + c.code);
        }

        bool operator==(Code c){
            return code == c.code;
        }
        friend std::ostream& operator<<(std::ostream& out, Code& code){
            out << code.code << std::endl;
            return out;
        }

};


int main(){
    Code c(8);
    Code code(8);
    
    std::cout << c << std::endl;

    if(code == c){
        std::cout << "Are Equal" << std::endl;
    }
    else{
        std::cout << "Are Not Equal" << std::endl;
    }
    return 0;
}