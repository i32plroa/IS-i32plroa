#ifndef INSCRIPCION_H
#define INSCRIPCION_H

class ProgramaSICUE;
class Usuario;
#include <string>
#include <vector>

class Inscripcion {
private:
    std::vector<int> id;

public:
    int i=0; 
    Inscripcion(std::vector<int> id)
        : id(id){}
    void RealizarInscripcion(int n){
        id.push_back(n);
        
            std::cout<<"Te has inscrito correctamente en el programa SICUE"<<std::endl;
        
    }
    
    void ShowInscripciones(){
        std::cout<<" Estas inscrito los programas SICUE con id: ";
        for(i=0;i<id.size();i++){
            if(id[i]!=0){
            std::cout<<id[i]<<", ";
            }
        }
        std::cout<<std::endl;
    }
    void Anular(int n){
        for(i=0;i<id.size();i++){
            if(n==id[i]){
                id[i]=0;
            }
        }
        std::cout<<"Se ha anulado correctamente"<<std::endl;
    }
    
    
};

#endif // INSCRIPCION_H
