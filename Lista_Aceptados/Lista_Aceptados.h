#ifndef LISTA_ACEPTADOS_H
#define LISTA_ACEPTADOS_H
#include<vector>
#include<string>
#include<iostream>

class Lista_Aceptados{
    private:
    std::vector<std::string> aceptados;

    public:
    int i=0;
    Lista_Aceptados(std::vector<std::string> aceptados)
        : aceptados(aceptados){}
    
    void Aceptar(std::string s1){
        for(i;i<aceptados.size();i++){
            aceptados.push_back(s1);
        }
        std::cout<<"Se ha aceptado correctamente a "<<s1<<std::endl;
        
    }
    
        
    
};





#endif