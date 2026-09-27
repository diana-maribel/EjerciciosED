/*
2. Desarrolle un programa en C que registre información 
básica de una observación de un conjunto de datos: 
identificador, edad, valor promedio de una variable, 
categoría representada por una letra y estado de validez del 
registro. Utilice tipos de datos apropiados y muestre la 
información almacenada.
*/
#include <stdio.h>
#include <stdbool.h>

int main() {
    int identificador = 101;
    int edad = 25;
    float valor_promedio = 78.5;
    char categoria = 'A';
    bool estado_validez = true;
    
    printf("--- Información de la Observación ---\n");
    printf("Identificador: %d\n", identificador);
    printf("Edad: %d\n", edad);
    printf("Valor Promedio: %.2f\n", valor_promedio);
    printf("Categoría: %c\n", categoria);
    printf("Estado de Validez: %s\n", estado_validez ? "Válido" : "Inválido");
    
    return 0;
}
