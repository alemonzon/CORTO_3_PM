//------------------------------------------------------------------------------
// Alejandro Monzón (21560)
// CORTO 3 - EJERCICIO 5
// Arrays y Punteros
//------------------------------------------------------------------------------

#include <stdio.h>

int main() {
    int i;
    int n = 10; //tamaño
    int a[n]; //array tamaño n
    int *p = a; //puntero
     
    //llenamos los valores del array
    for (i=0; i<n; i++)
    {
        printf("Ingrese el valor entero de la posicion %d:\n", i);
        scanf("%d", &a[i]);
    }

    //Recorre el array y muestra los valores *2
    printf("\nLos valores del array (*2) son:\n");
    for (i=0; i<n; i++) {
        printf("%d\n", (*p) * 2);
        p++; //aumenta puntero
    }

    return 0;
}

