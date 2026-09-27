/*
10. Un investigador dispone de las mediciones de una variable 
para 10 observaciones. Desarrolle un programa en C++ que 
utilice un ciclo for para ingresar los valores, calcule la 
media aritmética y determine cuántas observaciones se 
encuentran por encima de dicha media.
*/
#include <stdio.h>

int main() {
    const int N = 10;
    float mediciones[10];
    float suma = 0.0f;
    
    printf("--- Registro de 10 Mediciones ---\n");
    for (int i = 0; i < N; i++) {
        printf("Ingrese la medicion [%d]: ", i + 1);
        scanf("%f", &mediciones[i]);
        suma += mediciones[i];
    }
    
    float media = suma / (float)N;
    
    int por_encima = 0;
    for (int i = 0; i < N; i++) {
        if (mediciones[i] > media) {
            por_encima++;
        }
    }
    
    printf("\n--- Resultados ---\n");
    printf("Media aritmetica: %.2f\n", media);
    printf("Cantidad de observaciones por encima de la media: %d\n", por_encima);
    
    return 0;
}
