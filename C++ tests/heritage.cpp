#include <iostream>

// Classe de base (super-classe)
class Animal {
public:
    void manger() {
        std::cout << "L'animal mange." << std::endl;
    }

    void dormir() {
        std::cout << "L'animal dort." << std::endl;
    }
};

// Classe dérivée (sous-classe) qui hérite de la classe de base
class Chien : public Animal {
public:
    void aboyer() {
        std::cout << "Le chien aboie." << std::endl;
    }
};

int main() {
    // Création d'une instance de la classe dérivée
    Chien monChien;

    // Utilisation des fonctions de la classe de base
    monChien.manger();
    monChien.dormir();

    // Utilisation de la fonction de la classe dérivée
    monChien.aboyer();

    return 0;
}
