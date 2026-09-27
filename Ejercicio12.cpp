/*
12. Desarrolle un programa en C++ que procese una secuencia 
de 10 mediciones. Los valores negativos deben 
considerarse inválidos y omitirse mediante continue. Si se 
introduce el valor 999, el procesamiento debe finalizar 
mediante break. Al terminar, muestre cuántos valores 
válidos fueron procesados.
*/
#include <stdio.h>

int main() {
    const int MAX_MEDICIONES = 10;
    int validos = 0;
    float medicion;
    
    printf("--- Procesamiento de Secuencia de Mediciones ---\n");
    printf("(Valores negativos seran omitidos; ingrese 999 para finalizar)\n\n");
    
    for (int i = 0; i < MAX_MEDICIONES; i++) {
        printf("Ingrese la medicion %d: ", i + 1);
        scanf("%f", &medicion);
        
        if (medicion == 999.0f) {
            printf("Fin de procesamiento activado mediante break (codigo 999).\n");
            break;
        }
        
        if (medicion < 0.0f) {
            printf("Medicion negativa omitida mediante continue.\n");
            continue;
        }
        
        validos++;
    }
    
    printf("\n--- Resumen de Procesamiento ---\n");
    printf("Total de valores validos procesados: %d\n", validos);
    
    return 0;
}
