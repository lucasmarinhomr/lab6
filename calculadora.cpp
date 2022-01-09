#include "calculadora.h"
#include <stdexcept>

using namespace std;

int calculadora::getTamanhoMemoria(){
    return memoria.size();  
}

int calculadora::adicionar(int x,int y){
    memoria.push_back(x+y);
    return x+y;
}

int calculadora::subtrair(int x,int y){
    memoria.push_back(x-y);
    return x-y;
}

int calculadora::multiplicar(int x,int y){
    memoria.push_back(x*y);
    return x*y;
}

float calculadora::dividir(float x,float y){
    if(y==0){
        throw std::invalid_argument("Operacao Invalida: Divisao por 0");
    }
    memoria.push_back(x/y);
    return x/y;
}

float calculadora::somarMemoria(){
    if(!memoria.empty()){
        float resultado = 0;
        for(vector<float>::iterator it = memoria.begin(); it < memoria.end(); it++){
            resultado += *it;
        }
        return resultado;
    }
    return 0;
}

void calculadora::limparMemoria(){
    memoria.clear();
    return;
}

calculadora::calculadora(){
    memoria.clear();
}