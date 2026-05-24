#ifndef ELEMENTOINTERACTIVO_H
#define ELEMENTOINTERACTIVO_H

class Explorador;

class ElementoInteractivo{

    public:
        virtual void interactuar(Explorador* explorador) = 0; 
        virtual ~ElementoInteractivo();


};








#endif