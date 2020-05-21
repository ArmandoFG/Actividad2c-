#include "calculadora.h"
#include <iostream>
using namespace std;

int calculadora::suma(int x, int y)
{	

	int result = x + y;

    return result;
}

int calculadora::resta(int x, int y)
{
    return x - y;
}

int calculadora::multi(int x, int y)
{
    return x * y;
}

int calculadora::div(int x, int y)
{
    return x / y;
}
