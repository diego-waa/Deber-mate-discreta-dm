# Documentación del programa

## Descripción
Este programa implementa funciones recursivas para resolver problemas comunes, promoviendo el uso de modularización en lenguaje C mediante archivos de cabecera. Las funcionalidades principales son:

1. **Invertir una cadena**: Invertir una cadena de texto ingresada por el usuario.
2. **Calcular factorial**: Calcular el factorial de un número entero positivo ingresado por el usuario.
3. **Generar sucesión de Fibonacci**: Generar la sucesión de Fibonacci hasta un límite dado por el usuario.

## Estructura del programa
El programa está compuesto por tres archivos principales:

### 1. `funciones.h`
Archivo de cabecera que contiene los prototipos de las funciones recursivas:
- `void invertirCadena(char *cadena, int inicio, int fin);`
- `unsigned long long calcularFactorial(int numero);`
- `void generarFibonacci(int limite);`

### 2. `funciones.c`
Implementación de las funciones recursivas:
- **Invertir una cadena**: Intercambia recursivamente los caracteres en los extremos de la cadena.
- **Calcular factorial**: Multiplica recursivamente un número por sus predecesores hasta llegar a 1.
- **Generar sucesión de Fibonacci**: Utiliza una función auxiliar para calcular recursivamente los números de Fibonacci.

### 3. `main.c`
Archivo principal que contiene:
- Menú interactivo para seleccionar las opciones.
- Entrada y validación de datos del usuario.
- Llamadas a las funciones definidas en `funciones.h`.


## Comentarios
- Asegúrese de ingresar datos válidos según se indique en cada opción.
- El programa valida entradas negativas para evitar errores en las operaciones recursivas.

## Autores
- **Nombre del Estudiante**: [Agregar Nombre]
- **Curso**: Programación en ANSI C

