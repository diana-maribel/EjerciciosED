/*
3. Desarrolle un programa en C que solicite una medición 
decimal obtenida por un sensor, por ejemplo 18.9, la 
convierta explícitamente a un valor entero y muestre ambos 
resultados. Indique mediante la salida del programa cuánto 
valor decimal se pierde durante la conversión.
*/
#include <stdio.h>

int main() {
    float medicion;
    
    printf("Ingrese la medicion decimal del sensor (ej. 18.9): ");
    scanf("%f", &medicion);
    
    int medicion_entera = (int)medicion;
    float parte_decimal_perdida = medicion - (float)medicion_entera;
    
    printf("\n--- Resultados de la Medicion ---\n");
    printf("Medicion original (decimal): %.4f\n", medicion);
    printf("Medicion convertida (entero): %d\n", medicion_entera);
    printf("Valor decimal perdido durante la conversion: %.4f\n", parte_decimal_perdida);
    
    return 0;
}
