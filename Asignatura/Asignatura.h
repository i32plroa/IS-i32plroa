#ifndef ASIGNATURA_H
#define ASIGNATURA_H

#include <string>

class Asignatura : public ProgramaSICUE {
private:
    std::string asignatura;

public:
    Asignatura(int id, std::string uniDestino, std::string duracion, std::string uniOrigen, std::string asignatura)
        : ProgramaSICUE(id, uniDestino, duracion, uniOrigen), asignatura(asignatura) {}

    std::string getAsignatura()  { return asignatura; }
    void showAsignatura() {
        ShowProgramaSICUE();
        std::cout<<asignatura<<std::endl; 
        
    }
};


#endif 
