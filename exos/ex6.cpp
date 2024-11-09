#include <iostream>
#include <string>

class Locataire {
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

Locataire::Locataire() : nom("Siham"), age(23), contact("0772198111") {}

Locataire::Locataire(std::string n, int a, std::string c) : nom(n), age(a), contact(c) {}

std::string Locataire::getNom() { return nom; }
void Locataire::setNom(std::string n) { nom = n; }

std::string Locataire::getContact() { return contact; }
void Locataire::setContact(std::string c) { contact = c; }

int Locataire::getAge() { return age; }
void Locataire::setAge(int a) { age = a; }

void Locataire::afficher() {
    std::cout << "Nom du locataire: " << nom << "\n"
              << "Âge: " << age << "\n"
              << "Contact: " << contact << std::endl;
}

class Propriete {
private:
    std::string adresse;
    double montantLoyer;
    bool estOccupe;

public:
    Propriete();
    Propriete(std::string a, double ml, bool o);
    std::string getAdresse();
    void setAdresse(std::string a);
    double getMontantLoyer();
    void setMontantLoyer(double ml);
    bool getEstOccupe();
    void setEstOccupe(bool o);
    void BasculerOccupation();
    void AfficherInfoPropriete();
};

Propriete::Propriete() : adresse("Massira 2"), montantLoyer(234), estOccupe(false) {}

Propriete::Propriete(std::string a, double ml, bool o) : adresse(a), montantLoyer(ml), estOccupe(o) {}

std::string Propriete::getAdresse() { return adresse; }
void Propriete::setAdresse(std::string a) { adresse = a; }

double Propriete::getMontantLoyer() { return montantLoyer; }
void Propriete::setMontantLoyer(double ml) { montantLoyer = ml; }

bool Propriete::getEstOccupe() { return estOccupe; }
void Propriete::setEstOccupe(bool o) { estOccupe = o; }

void Propriete::BasculerOccupation() {
    estOccupe = !estOccupe;  
    std::cout << "Occupation status updated: " << std::boolalpha << estOccupe << std::endl;
}

void Propriete::AfficherInfoPropriete() {
    std::cout << "Adresse: " << adresse << "\n"
              << "Montant du loyer: " << montantLoyer << "\n"
              << "Est occupée? " << std::boolalpha << estOccupe << std::endl;
}

class ContratLocation {
private:
    Locataire locataire;
    Propriete propriete;
    std::string dateDebut;
    int dureeMois;

public:
    ContratLocation();
    ContratLocation(Locataire l, Propriete p, std::string dd, int dm);
    void afficherContrat();
};

ContratLocation::ContratLocation() : dateDebut("01/01/2024"), dureeMois(12) {}

ContratLocation::ContratLocation(Locataire l, Propriete p, std::string dd, int dm) 
    : locataire(l), propriete(p), dateDebut(dd), dureeMois(dm) {}

void ContratLocation::afficherContrat() {
    std::cout << "Contrat de location:\n";
    locataire.afficher();
    propriete.AfficherInfoPropriete();
    std::cout << "Date de début: " << dateDebut << "\n"
              << "Durée en mois: " << dureeMois << std::endl;
}

int main() {
    Locataire loc("Houda", 19, "0772190000");
    Propriete prop("Rue de Paris", 500, true);
    
    loc.afficher();
    prop.BasculerOccupation();
    prop.AfficherInfoPropriete();

    ContratLocation contrat(loc, prop, "15/08/2023", 24);
    contrat.afficherContrat();

    return 0;
}
