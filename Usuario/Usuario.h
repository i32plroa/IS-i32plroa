#ifndef USUARIO_H
#define USUARIO_H

#include <string>


class Usuario {
private:
    std::string nombre;
    std::string apellidos;
    std::string usuario;
    std::string contrasena;

public:

    Usuario(std::string nombre, std::string apellidos, std::string usuario,  std::string contrasena)
        : nombre(nombre), apellidos(apellidos), usuario(usuario), contrasena(contrasena) {}

    std::string getNombre(){ return nombre; }
    std::string getApellidos()  {return apellidos; }
    std::string getUsuario() { return usuario; }
    std::string getContrasena(){return contrasena;}

    void setNombre(std::string nombre_n){ nombre = nombre_n; }
    void setApellidos(std::string apellidos_n){ apellidos=apellidos_n; }
    void setUsuario(std::string usuario_n){ usuario=usuario_n;}
    void setContrasena(std::string contraseña_n){contrasena=contraseña_n;}
    void ShowUsuario(){
        std::cout<<getNombre()<<", "<<getApellidos()<<", "<<getUsuario()<<", "<<getContrasena()<<", ";
    }

};

#endif // USUARIO_H
