#ifndef CALCULADORA_H
#define CALCULADORA_H
#include <vector>
using namespace std;

class calculadora{
private:
    //Atributos
    vector<float> memoria;

public:
    //Getters e Setters
    int getTamanhoMemoria();

    //Funcoes e métodos
    int adicionar(int,int);
    int subtrair(int,int);
    int multiplicar(int,int);
    float dividir(float,float);
    float somarMemoria();
    void limparMemoria();

    //Construtor e Destrutor
    calculadora();
};

#endif