#include "calculadoraTeste.h"

CPPUNIT_TEST_SUITE_REGISTRATION( calculadoraTeste );

void calculadoraTeste::setUp(){
    this->myC = new calculadora();
}

void calculadoraTeste::tearDown(){
    delete this->myC;
}

void calculadoraTeste::testeAdicionar(){
    CPPUNIT_ASSERT(myC->adicionar(1,5)==6);
}

void calculadoraTeste::testeSubtrair(){
    CPPUNIT_ASSERT(myC->subtrair(3,3)==0);
}

void calculadoraTeste::testeMultiplicar(){
    CPPUNIT_ASSERT(myC->multiplicar(2,3)==6);
}

void calculadoraTeste::testeDividir(){
    CPPUNIT_ASSERT(myC->dividir(6,2)==3);
}

void calculadoraTeste::testeDividirPorZero(){
    CPPUNIT_ASSERT_THROW(myC->dividir(5,0),std::invalid_argument);
}

void calculadoraTeste::testeSomarMemoriaVazia(){
    myC->limparMemoria();
    CPPUNIT_ASSERT(myC->somarMemoria()==0);
}

void calculadoraTeste::testeSomarMemoria(){
    myC->limparMemoria();
    myC->adicionar(2,3);
    myC->adicionar(2,3);
    CPPUNIT_ASSERT(myC->somarMemoria()==10);
}

void calculadoraTeste::testeLimparMemoria(){
    myC->adicionar(2,3);
    myC->adicionar(2,3);
    myC->limparMemoria();
    CPPUNIT_ASSERT(myC->getTamanhoMemoria()==0);
}

void calculadoraTeste::testeGetTamanhoMemoria(){
    myC->limparMemoria();
    myC->adicionar(2,3);
    myC->adicionar(2,3);
    CPPUNIT_ASSERT(myC->getTamanhoMemoria()==2);
}

void calculadoraTeste::testeMemoriaComecaVazia(){
    CPPUNIT_ASSERT(myC->getTamanhoMemoria()==0);
}