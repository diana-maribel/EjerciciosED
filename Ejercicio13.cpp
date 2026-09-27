/*
13. Un conjunto de datos contiene las edades de 10 
participantes de un estudio. Desarrolle un programa en C 
que almacene los valores en un arreglo y determine la edad 
mínima, edad máxima, media y número de participantes 
cuya edad supera la media del grupo.
*/
#include <stdio.h>

int main() {
    const int N = 10;
    int edades[10];
    int suma = 0;
    
    printf("--- Registro de Edades de 10 Participantes ---\n");
    for (int i = 0; i < N; i++) {
        printf("Ingrese la edad del participante %d: ", i + 1);
        scanf("%d", &edades[i]);
        suma += edades[i];
    }
    
    int min_edad = edades[0];
    int max_edad = edades[0];
    
    for (int i = 1; i < N; i++) {
        if (edades[i] < min_edad) {
            min_edad = edades[i];
        }
        if (edades[i] > max_edad) {
            max_edad = edades[i];
        }
    }
    
    float media = (float)suma / (float)N;
    
    int superan_media = 0;
    for (int i = 0; i < N; i++) {
        if (edades[i] > media) {
            superan_media++;
        }
    }
    
    printf("\n--- Estadisticas del Estudio ---\n");
    printf("Edad minima: %d\n", min_edad);
    printf("Edad maxima: %d\n", max_edad);
    printf("Edad media: %.2f\n", media);
    printf("Participantes con edad superior a la media: %d\n", superan_media);
    
    return 0;
}
