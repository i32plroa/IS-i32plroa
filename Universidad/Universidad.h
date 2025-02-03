#ifndef UNIVERSIDAD_H
#define UNIVERSIDAD_H

#include <string>

class Universidad {
private:
    std::string nombre;
    std::string ciudad;
    std::string pais;

public:

    Universidad(const std::string& nombre, const std::string& ciudad, const std::string& pais)
        : nombre(nombre), ciudad(ciudad), pais(pais) {}

    
    std::string getNombre() const { return nombre; }
    std::string getCiudad() const { return ciudad; }
    std::string getPais() const { return pais; }
};

#endif // UNIVERSIDAD_H
