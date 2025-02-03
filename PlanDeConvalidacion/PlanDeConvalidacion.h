#ifndef PLANDECONVALIDACION_H
#define PLANDECONVALIDACION_H

class Asignatura;

#include <vector>
#include <unordered_map>

class PlanDeConvalidacion : public ProgramaSICUE {
private:
    std::vector<std::string> convalidaciones;
    

public:
    PlanDeConvalidacion(int id, std::string uniDestino, std::string duracion, std::string uniOrigen, std::vector<std::string> convalidaciones)
        : ProgramaSICUE(id, uniDestino, duracion, uniOrigen), convalidaciones(convalidaciones) {}

    void showConvalidaciones() const {
        for(int i=0;i<convalidaciones.size();i++){
            std::cout<<convalidaciones[i]<<", ";
        }
        std::cout<<" || ";
        }
    void ShowPlanDeConvalidacion(){
        ShowProgramaSICUE();
        showConvalidaciones();
        
    }
        
    
};
    


#endif // PLANDECONVALIDACION_H
