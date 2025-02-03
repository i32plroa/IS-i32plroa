#ifndef PROGRAMASICUE_H
#define PROGRAMASICUE_H

class Universidad;
#include <string>

class ProgramaSICUE {
private:
    int id;
    std::string uniDestino;
    std::string duracion;
    std::string uniOrigen;

public:
   
    ProgramaSICUE(int id, std::string uniDestino, std::string duracion, std::string uniOrigen)
        : id(id), uniDestino(uniDestino), duracion(duracion), uniOrigen(uniOrigen) {}

    
    int getId() const { return id; }
    std::string getUniDestino() const { return uniDestino; }
    std::string getDuracion() const { return duracion; }
    std::string getUniOrigen() const { return uniOrigen; }
    void ShowProgramaSICUE(){
        std::cout<<getId()<<" || "<<getUniDestino()<<" || "<<getDuracion()<<" || "<<getUniOrigen()<<" || ";
    }
};

#endif
