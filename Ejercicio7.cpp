/*
7. Un conjunto de datos será aceptado para análisis 
únicamente si contiene al menos 100 observaciones válidas 
y presenta un porcentaje de datos completos igual o 
superior al 70 %. Desarrolle un programa en C que solicite 
ambos valores y determine si el conjunto de datos cumple 
las condiciones mínimas para ser analizado.
*/
#include <stdio.h>
#include <stdbool.h>

int main() {
    int observaciones;
    float porcentaje_completos;
    
    printf("Ingrese el numero de observaciones validas: ");
    scanf("%d", &observaciones);
    
    printf("Ingrese el porcentaje de datos completos (%%): ");
    scanf("%f", &porcentaje_completos);
    
    bool cumple = (observaciones >= 100) && (porcentaje_completos >= 70.0f);
    
    printf("\n--- Resultado de Evaluacion ---\n");
    if (cumple) {
        printf("El conjunto de datos CUMPLE con las condiciones minimas para ser analizado.\n");
    } else {
        printf("El conjunto de datos NO cumple con las condiciones minimas para ser analizado.\n");
    }
    
    return 0;
}
