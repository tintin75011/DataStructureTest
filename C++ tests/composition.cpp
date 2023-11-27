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

// Classe représentant une personne avec une adresse en composition
class Personne {
public:
    Personne(std::string nom, std::string rue, std::string ville)
        : nom(nom), adresse(rue, ville) {}

    void afficherPersonne() const {
        std::cout << "Nom: " << nom << std::endl;
        std::cout << "Adresse: ";
        adresse.afficherAdresse();
    }

private:
    std::string nom;
    Adresse adresse; // Utilisation d'un objet Adresse directement dans la composition
};

int main() {
    // Création d'une personne avec une adresse en composition
    Personne personne("Bob", "456 Rue Secondaire", "VilleB");

    // Affichage des informations de la personne
    personne.afficherPersonne();

    return 0;
}
