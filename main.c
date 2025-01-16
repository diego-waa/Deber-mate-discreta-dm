#include <stdio.h>
#include <string.h>
#include "funciones.h"

// Función para mostrar el menú al usuario
void mostrarMenu() {
    printf("\nMenú de opciones:\n");
    printf("1. Invertir una cadena\n");
    printf("2. Calcular el factorial de un número\n");
    printf("3. Generar la sucesión de Fibonacci\n");
    printf("4. Salir\n");
    printf("Seleccione una opción: ");
}

int main() {
    int opcion;

    do {
        mostrarMenu(); // Mostrar el menú al usuario
        scanf("%d", &opcion);
        getchar(); // Limpiar el buffer de entrada

        switch (opcion) {
            case 1: {
                // Invertir una cadena
                char cadena[100];
                printf("Ingrese una cadena: ");
                fgets(cadena, sizeof(cadena), stdin);
                cadena[strcspn(cadena, "\n")] = 0; // Eliminar salto de línea
                printf("Cadena original: %s\n", cadena);
                invertirCadena(cadena, 0, strlen(cadena) - 1);
                printf("Cadena invertida: %s\n", cadena);
                break;
            }
            case 2: {
                // Calcular el factorial
                int numero;
                printf("Ingrese un número entero positivo: ");
                scanf("%d", &numero);
                if (numero < 0) {
                    printf("El número debe ser positivo.\n");
                } else {
                    printf("El factorial de %d es %llu\n", numero, factorial(numero));
                }
                break;
            }
            case 3: {
                // Generar la sucesión de Fibonacci
                int limite;
                printf("Ingrese el número de términos de la sucesión de Fibonacci: ");
                scanf("%d", &limite);
                if (limite <= 0) {
                    printf("El límite debe ser un número positivo.\n");
                } else {
                    printf("Sucesión de Fibonacci: ");
                    fibonacci(limite, 0, 1, 0);
                    printf("\n");
                }
                break;
            }
            case 4:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opción no válida. Por favor, intente nuevamente.\n");
                break;
        }
    } while (opcion != 4);

    return 0;
}
