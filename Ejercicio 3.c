//------------------------------------------------------------------------------
// Alejandro Monzón (21560)
// CORTO 3 - EJERCICIO 3
// Mostrar N números de la serie de Fibonacci
//------------------------------------------------------------------------------

#include <stdio.h>

int main() {
    //Variables locales
    int i, n, next;
    int n1 = 0;
    int n2 = 1;
    
    //Guarda el input en n
    printf("Ingrese la cantidad de números de la serie de Fibonacci:\n");
    scanf("%d", &n);
    
    //Ciclo for para n términos
    printf("\nSerie de Fibonacci para %d términos:\n", n);
    for (i = 1; i <= n; i++) {
        printf("%d ", n1);
        next = n1 + n2; //suma de los 2 anteriores
        n1 = n2; //n1 avanza una posicion
        n2 = next; //n2 avanza una posicion
    }
        
    return 0;
}



