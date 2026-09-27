/*
8. Para incorporar una observación a un análisis, se requiere 
que el individuo tenga una edad mayor o igual que 18 años 
y que el registro haya sido validado. Desarrolle un 
programa en C que solicite ambos datos y utilice operadores 
lógicos para determinar si la observación puede 
incorporarse al conjunto de datos.
*/
#include <stdio.h>
#include <stdbool.h>

int main() {
    int edad;
    int validado_input;
    
    printf("Ingrese la edad del individuo: ");
    scanf("%d", &edad);
    
    printf("¿El registro ha sido validado? (1 = Si, 0 = No): ");
    scanf("%d", &validado_input);
    
    bool validado = (validado_input == 1);
    bool puede_incorporarse = (edad >= 18) && validado;
    
    printf("\n--- Evaluacion de Incorporacion ---\n");
    if (puede_incorporarse) {
        printf("La observacion PUEDE incorporarse al conjunto de datos.\n");
    } else {
        printf("La observacion NO puede incorporarse al conjunto de datos.\n");
        if (edad < 18) {
            printf("- Motivo: La edad (%d) es menor a 18 anos.\n", edad);
        }
        if (!validado) {
            printf("- Motivo: El registro no ha sido validado.\n");
        }
    }
    
    return 0;
}
