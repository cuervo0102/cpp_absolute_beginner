#include <iostream>;
#include <string>;
using namespace std;

class Artiste {
	private:
		string nom;
		string genre;
		
	public:	
		Artiste (): nom("Artiste1"), genre("Genre1") {};
		Artiste (string n , string g): nom(n), genre(g) {
			this->nom = n;
			this->genre = g;

		};
		
		friend ostream& operator<<(ostream& out , Artiste& art){
            out << art.nom << " " << art.genre;
            return out;
        }
        
    	friend class Chanson;
};
class Chanson{
	private:
		string titre;
		Artiste artiste;
		int duree;
		
	public:
		Chanson() : titre("Titre1"), artiste("Artiste2", "Genre2"), duree(354) {};
		Chanson(string t, Artiste a, int d) : titre(t), artiste(a.nom, a.genre), duree(d) {
			this->titre = t;
			this->artiste.nom = a.nom;
			this->artiste.genre = a.genre;
			this->duree = d;
		};
		
		friend ostream& operator<<(ostream& out , Chanson& chanson){
            out <<"Titre: " <<chanson.titre << ", Artiste: " << chanson.artiste << ", Duree: " << chanson.duree << " secondes.";
            return out;
        }
	
		bool operator==(Chanson& cha) {
             return titre==cha.titre && artiste.nom==cha.artiste.nom;
        };
};

int main(){
	Chanson c;
	Chanson c1("Symphony", Artiste(string("art"), string("gen")), 123);
	cout << c << endl; 
	if(c==c1){
		cout << "Sont egaux" << endl;
	}
	else{
		cout << "Pas egaux" << endl;
	}
	return 0;
}