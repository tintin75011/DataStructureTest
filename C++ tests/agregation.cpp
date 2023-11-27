#include <iostream>

// Classe repr�sentant une adresse
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

// Classe repr�sentant une personne avec une adresse agr�g�e
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
    Adresse& adresse; // Utilisation d'une r�f�rence pour repr�senter l'agr�gation
};

int main() {
    // Cr�ation d'une adresse
    Adresse adresse("123 Rue Principale", "VilleA");

    // Cr�ation d'une personne avec l'adresse agr�g�e
    Personne personne("Alice", adresse);

    // Affichage des informations de la personne
    personne.afficherPersonne();

    return 0;
}
