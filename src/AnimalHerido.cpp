#include <iostream>
#include "AnimalHerido.h"
#include "Explorador.h"

AnimalHerido::AnimalHerido(int puntosAnimaleHerido) {
    this-> puntosAnimalHerido = puntosAnimaleHerido;
}

void AnimalHerido::interactuar(Explorador* explorador) {
    if (explorador->getEnergia() > 10) {
        cout << "Ayudas al animal herido a recuperarse y ganas " << puntosAnimalHerido << " puntos Ambientales." << endl;
        explorador->ganaPuntajeAmbiental(puntosAnimalHerido);
        explorador->perdioEnergia(10);
        cout << "Tu energía actual es: " << explorador->getEnergia() << endl;
    } else {
        cout << "No tienes suficiente energía para ayudar al animal herido." << endl;
    }
    
}

string AnimalHerido::getNombre() const {
    return "Animal Herido";
}