#ifndef TITULACION_H
#define TITULACION_H

class Centro;

#include <vector>

class Titulacion {
private:
    std::string nombre;
    

public:
    // Constructor
    Titulacion( std::string nombre)
        : nombre(nombre){}

    // Métodos inline
    std::string getTitulacion() const { return nombre; }
    
};
    
    
    

#endif // TITULACION_H
