//------------------------------------------------------------------------------
// Alejandro Monzón (21560)
// CORTO 3 - EJERCICIO 4
// Librería opraciones aritméticas
//------------------------------------------------------------------------------

#include <stdio.h>
#include "oper.h"

int main() {
    //Variables locales
    int a, b;
    
    //Inputs
    printf("Ingrese el primer numero:\n");
    scanf("%d", &a);
    printf("Ingrese el segundo numero:\n");
    scanf("%d", &b);
    
    printf("\nPI = %.5f\n", PI); //imprime PI con 5 decimales
    
    int c = suma(a,b);
    printf("El resultado de la suma es: %d\n", c); //muestra la suma
    
    int d = resta(a,b);
    printf("El resultado de la resta es: %d\n", d); //muestra la resta
    
    int e = mult(a,b);
    printf("El resultado de la multiplicacion es: %d\n", e); //muestra la mult
    
    float f = divi(a,b);
    printf("El resultado de la division es: %f\n", f); //muestra la division
        
    return 0;
}

