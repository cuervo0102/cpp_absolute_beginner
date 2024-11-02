#include <iostream>
#include <string>

class Pc {
private:
    std::string model;
    double ram;
    double hdd;
    double cpu;

public:

    // Pc(); 
    Pc(std::string m, double ram, double hdd, double cp); 


    void setComponent(std::string m, double ram, double hdd, double cpu);
    void getComponent() ;
    void AfficherSpecs() ;
};


Pc::Pc(std::string m, double r, double h, double c) {
    setComponent(m, r, h, c);
    std::cout << "Object created" << std::endl;
}


void Pc::setComponent(std::string m, double r, double h, double c) {
    model = m;
    ram = r;
    hdd = h;
    cpu = c;
}


void Pc::getComponent(){
    std::cout << "Model: " << model << ", RAM: " << ram << " GB, HDD: " << hdd << " GB, CPU: " << cpu << " GHz" << std::endl;
}


void Pc::AfficherSpecs() {
    std::cout << "Model: " << model << "\nRAM: " << ram << " GB\nHDD: " << hdd << " GB\nCPU: " << cpu << " GHz" << std::endl;
}


class RepairTicket {
    Pc my_computer;
    std::string problem ;
    std::string receptionDate;

    public:

        RepairTicket(Pc mc, std::string p, std::string rd);
        void setProblem(Pc mc, std::string p, std::string rd);
        void AfficherTicket();

};
RepairTicket::RepairTicket(Pc mc, std::string p, std::string rd){
    setProblem(mc, p, rd);

}
void RepairTicket::setProblem(Pc mc, std::string p, std::string rd){
    my_computer = mc;
    problem = p;
    receptionDate = rd;
}

void RepairTicket::AfficherTicket(){
    std::cout << "Repair Ticket Information:\n";
    std::cout << "Problem: " << problem << "\nReception Date: " << receptionDate << "\n";
    std::cout << "Computer Specs:\n";
    my_computer.AfficherSpecs();
}




int main() {
    Pc myPc("Dell", 16, 512, 3.2);               
    myPc.AfficherSpecs();                
    RepairTicket ticket(myPc, "Screen not working", "2024-10-30");
    ticket.AfficherTicket();
    
}
