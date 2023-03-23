//------------------------------------------------------------------------------
// Alejandro Monzón (21560)
// CORTO 3 - EJERCICIO 4
// Funciones de la librería oper
//------------------------------------------------------------------------------

#include <stdio.h>
#include "oper.h"

int suma (int a, int b)
{
    return a + b; //operacion suma
}

int resta (int a, int b)
{
    return a - b; //operacion resta
}

int mult (int a, int b)
{
    return a * b; //operacion multiplicacion
}

float divi (float a, float b)
{
    if (b == 0) {
        printf("*No puede dividir entre 0*"); //divisor no puede ser 0
    }
    else {
        return a / b; //operacion divicion
    }
}