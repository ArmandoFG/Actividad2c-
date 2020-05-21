/*
 * File:   newtestclass.cpp
 * Author: arman
 *
 * Created on 21/05/2020, 09:26:06 AM
 */

#include "newtestclass.h"
#include "calculadora.h"

void newtestclass::setUp();
void newtestclass::tearDown();



CPPUNIT_TEST_SUITE_REGISTRATION(newtestclass);

void newtestclass::suma() {
    int resultado = calculadora.suma(3,2);
    int esperado = 5;
    CPPUNIT_ASSERT(esperado == resultado);
}
void newtestclass::restar() {
    int resultado = calculadora.resta(3,2);
    int esperado = 1;
    CPPUNIT_ASSERT(esperado == resultado);
}
void newtestclass::multiplicar() {
    int resultado = calculadora.multi(3,2);
    int esperado = 6;
    CPPUNIT_ASSERT(esperado == resultado);
}
void newtestclass::dividir() {
    int resultado = calculadora.div(4,2);
    int esperado = 2;
    CPPUNIT_ASSERT(esperado == resultado);
}

