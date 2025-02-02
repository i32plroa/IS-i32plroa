#ifndef ASIGNATURA_H
#define ASIGNATURA_H

#include <string>

class Asignatura {
private:
    std::string nombre;
    std::string codigo;

public:
    
    Asignatura(const std::string& nombre, const std::string& codigo)
        : nombre(nombre), codigo(codigo) {}

    
    std::string getNombre() const { return nombre; }
    std::string getCodigo() const { return codigo; }
};

#endif 
