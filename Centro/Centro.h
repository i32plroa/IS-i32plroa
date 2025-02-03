#ifndef CENTRO_H
#define CENTRO_H

class Universidad;

#include <string>

class Centro {
private:
    std::string nombre;
    Universidad* universidad;

public:
    // Constructor
    Centro(const std::string& nombre, Universidad* universidad)
        : nombre(nombre), universidad(universidad) {}

    // Métodos inline
    std::string getNombre() const { return nombre; }
    Universidad* getUniversidad() const { return universidad; }
};

#endif // CENTRO_H
