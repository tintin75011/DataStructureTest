#include <iostream>

// Classe représentant une adresse
class Adresse {
public:
    Adresse(std::string rue, std::string ville) : rue(rue), ville(ville) {}

    void afficherAdresse() const {
        std::cout << rue << ", " << ville << std::endl;
    }

private:
    std::string rue;
    std::string ville;
};

// Classe représentant une personne avec une adresse agrégée
class Personne {
public:
    Personne(std::string nom, Adresse& adresse) : nom(nom), adresse(adresse) {}

    void afficherPersonne() const {
        std::cout << "Nom: " << nom << std::endl;
        std::cout << "Adresse: ";
        adresse.afficherAdresse();
    }

private:
    std::string nom;
    Adresse& adresse; // Utilisation d'une référence pour représenter l'agrégation
};

int main() {
    // Création d'une adresse
    Adresse adresse("123 Rue Principale", "VilleA");

    // Création d'une personne avec l'adresse agrégée
    Personne personne("Alice", adresse);

    // Affichage des informations de la personne
    personne.afficherPersonne();

    return 0;
}
