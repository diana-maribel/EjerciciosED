/*
9. Un sensor registra temperaturas ambientales utilizadas 
posteriormente en un análisis climático. Desarrolle un 
programa en C que solicite una temperatura y la clasifique 
como Congelación si es menor que 0 °C, Frío si está entre 
0 y 20 °C, y Templado si supera los 20 °C.
*/
#include <stdio.h>

int main() {
    float temperatura;
    
    printf("Ingrese la temperatura ambiental (°C): ");
    scanf("%f", &temperatura);
    
    printf("\n--- Clasificacion Climatica ---\n");
    if (temperatura < 0.0f) {
        printf("Temperatura: %.2f °C -> Clasificacion: Congelacion\n", temperatura);
    } else if (temperatura <= 20.0f) {
        printf("Temperatura: %.2f °C -> Clasificacion: Frio\n", temperatura);
    } else {
        printf("Temperatura: %.2f °C -> Clasificacion: Templado\n", temperatura);
    }
    
    return 0;
}
