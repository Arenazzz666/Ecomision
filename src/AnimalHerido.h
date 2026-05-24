#ifndef ANIMALHERIDO_H
#define ANIMALHERIDO_H

#include "ElementoInteractivo.h"
#include <string>

using namespace std;

class AnimalHerido : public ElementoInteractivo {

    private:
        int puntosAnimalHerido;
    
    public:
        AnimalHerido(int puntosCuracion);
        void interactuar(Explorador* explorador) override;
        string getNombre() const override;



};
#endif