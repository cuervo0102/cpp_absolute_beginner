#include <iostream>

class Locataire{
    private:
        std::string nom;
        int age;
        std::string contact;
    public:
        Locataire();
        Locataire(std::string n, int a, std::string c);
        std::string getNom();
        void setNom(std::string n);
        std::string getContact();
        void setContact(std::string c);
        int getAge();
        void setAge(int a);
        void afficher();


        
};



Locataire::Locataire(){
    nom = "Siham";
    age = 23;
    contact = "0772198111";

}
Locataire::Locataire(std::string n, int a, std::string c){
    this->nom  = n;
    this->age = a;
    this->contact = c;
}
std::string Locataire::getNom(){
    return  nom ;

}
void Locataire::setNom(std::string n){
    this->nom = n;
}


std::string Locataire::getContact(){
    return  contact ;

}
void Locataire::setContact(std::string c){
    this->contact = c;
}

int Locataire::getAge(){
    return age;
}

void Locataire::setAge(int a){
    this->age = a;
}

void Locataire::afficher(){
    std::cout << "le nom de locataire: " << nom << "\n"
              << "age: "  << age << "\n"
              << "contact: " << contact << std::endl;
}






class Propriete{
    private:
        std::string adresse;
        double montantLoyer;
        bool estOccupe;

    public:
        Propriete(){
            adresse = "Massira 2";
            montantLoyer = 234;
            estOccupe = false;
        }
        Propriete(std::string a, double ml, bool o){
            this->adresse = a;
            this->montantLoyer = ml;
            this->estOccupe = o;

        }
        std::string getAdresse(){
            return adresse;
        }
        void setAdresse(std::string a){
            this->adresse = a;
        }


        double getMontantLoyer(){
            return montantLoyer;
        }
        void setMontantLoyer(double ml){
            this->montantLoyer = ml;
        }


        bool getEstOccupe(){
            return estOccupe;
        }
        void setEstOccupe(bool o){
            this->estOccupe = o;
        }


        void BasculerOccupation(){
            std::cout << "le status est: " << std::boolalpha <<estOccupe << std::endl;
        }

        void AfficherInfoPropriete(){
            std::cout << "l'adresse': " << adresse << "\n"
              << "montant loyer: "  << montantLoyer << "\n"
              << "est Occupe? " << std::boolalpha <<estOccupe << std::endl;
        }

};


class ContratLocation{
private:
    Locataire l;
    Propriete p;
    std::string dateDebut;
    int dureeMois;


public:
    ContratLocation(){
        l();
        p();
        

    }




};





















int main(){
    Locataire l("Houda", 19, "cccc");
    l.afficher();
    Propriete p;
    p.BasculerOccupation();
    p.AfficherInfoPropriete();

    

}