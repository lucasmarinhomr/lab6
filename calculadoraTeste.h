#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/Portability.h>
#include "calculadora.h"

class calculadoraTeste : public CPPUNIT_NS::TestFixture{
    CPPUNIT_TEST_SUITE(calculadoraTeste);
    CPPUNIT_TEST(testeAdicionar);
    CPPUNIT_TEST(testeSubtrair);
    CPPUNIT_TEST(testeMultiplicar);
    CPPUNIT_TEST(testeDividir);
    CPPUNIT_TEST(testeDividirPorZero);
    CPPUNIT_TEST(testeSomarMemoriaVazia);
    CPPUNIT_TEST(testeSomarMemoria);
    CPPUNIT_TEST(testeLimparMemoria);
    CPPUNIT_TEST(testeMemoriaComecaVazia);
    CPPUNIT_TEST(testeGetTamanhoMemoria);
    CPPUNIT_TEST_SUITE_END();

public:
    void setUp();
    void tearDown();

protected:
    void testeAdicionar();
    void testeSubtrair();
    void testeMultiplicar();
    void testeDividir();
    void testeDividirPorZero();
    void testeSomarMemoriaVazia();
    void testeSomarMemoria();
    void testeLimparMemoria();
    void testeMemoriaComecaVazia();
    void testeGetTamanhoMemoria();


private:
    calculadora *myC;
};