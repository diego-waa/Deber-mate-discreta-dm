#include "funciones.h"

// Función recursiva para invertir una cadena
void invertirCadena(char *cadena, int inicio, int fin) {
    if (inicio >= fin) return;
    char temp = cadena[inicio];
    cadena[inicio] = cadena[fin];
    cadena[fin] = temp;
    invertirCadena(cadena, inicio + 1, fin - 1);
}

// Función recursiva para calcular el factorial
unsigned long long factorial(int n) {
    if (n == 0 || n == 1) return 1;
    return n * factorial(n - 1);
}

// Función recursiva para generar la sucesión de Fibonacci
void fibonacci(int n, int a, int b, int contador) {
    if (contador == n) return;
    printf("%d ", a);
    fibonacci(n, b, a + b, contador + 1);
}

