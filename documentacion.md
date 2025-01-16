# Documentación del programa

## Descripción
El programa cumple con las funciones indicadas en la asignación de la tarea, el código fue revisado y corregido con ChatGPT

1. **Invertir una cadena**: Invertir una cadena de texto.
2. **Calcular factorial**: Calcular el factorial de un número.
3. **Generar sucesión de Fibonacci**: Generar la sucesión de Fibonacci hasta un límite que indica el usuario.

## Estructura del programa
El programa está compuesto por tres archivos principales:

1. funciones.h
Archivo de cabecera con las funciones recursivas:
- `void invertirCadena(char *cadena, int inicio, int fin);`
- `unsigned long long calcularFactorial(int numero);`
- `void generarFibonacci(int limite);`

2. funciones.c
Implementación de las funciones recursivas:
- **Invertir una cadena**: Intercambia los caracteres en los extremos de la cadena.
- **Calcular factorial**: Multiplica recursivamente un número.
- **Generar sucesión de Fibonacci**: Utiliza una función auxiliar para calcular los números de Fibonacci.

3. main.c
Archivo principal con:
- Menú interactivo con las opciones.
- Entrada y validación de datos.
- Llamadas a las funciones definidas en `funciones.h`.
