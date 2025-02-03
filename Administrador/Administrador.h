#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H

class Usuario;

class Administrador : public Usuario {
public:
    // Constructor
    Administrador(std::string nombre,  std::string apellidos, 
                   std::string usuario,  std::string contrasena)
        : Usuario(nombre, apellidos, usuario, contrasena) {}
};

#endif // ADMINISTRADOR_H
