#ifndef PROFESOR_H
#define PROFESOR_H

class Usuario;
#include <string>

class Profesor : public Usuario {
private:
    std::string asignatura;
    int curso;

public:
   
    Profesor(std::string nombre, std::string apellidos,std::string usuario, 
             std::string contrasena,  std::string asignatura)
        : Usuario(nombre, apellidos, usuario, contrasena), asignatura(asignatura) {}


    std::string getAsignatura() const { return asignatura; }
    
    void ShowProfesor(){
        ShowUsuario();
        std::cout<<getAsignatura()<<", ";
    }

    void setAsignatura(std::string asignatura_n){ asignatura = asignatura_n; }
    
    
};

#endif 
