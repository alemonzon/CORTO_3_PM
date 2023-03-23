//------------------------------------------------------------------------------
// Alejandro Monzón (21560)
// CORTO 3 - EJERCICIO 2
// Convertir input de grados Fahrenheit a Celsius
//------------------------------------------------------------------------------

#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    
    //Guarda valor de input
    printf("Ingrese la temperatura en grados Fahrenheit:\n");
    scanf("%f", &fahrenheit);
    
    //Convierte a Celsius
    celsius = (fahrenheit-32)/1.8;
    printf("La temperatura %f°F es equivalente a %f°C\n", fahrenheit, celsius);
}




