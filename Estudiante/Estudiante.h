#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H
#include <string>

class Usuario;

class Estudiante : public Usuario {
private:
    std::string carrera;
    int curso;

public:
    Estudiante(std::string nombre, std::string apellidos, std::string usuario, 
               std::string contrasena,  std::string carrera, int curso)
        : Usuario(nombre, apellidos, usuario, contrasena), carrera(carrera), curso(curso) {}

    std::string getCarrera(){ return carrera; }
    int getCurso(){ return curso; }

    void setCarrera(std::string carrera_n){ carrera = carrera_n; }
    void setCurso(int curso_n){ curso=curso_n; }
    void ShowEstudiante(){
        ShowUsuario();
        std::cout<<getCarrera()<<", "<<getCurso()<<", ";
    }

};

#endif