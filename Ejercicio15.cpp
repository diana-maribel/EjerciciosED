/*
15. Un pequeño conjunto de datos contiene tres mediciones 
obtenidas de una misma variable. Desarrolle un programa 
en C que implemente una función calcular_promedio 
para recibir las tres mediciones, calcular su media y retornar 
el resultado. Además, implemente una segunda función que 
determine cuántas de las mediciones se encuentran por 
encima del promedio.
*/
#include <stdio.h>

/* Funcion que calcula y retorna la media aritmetica de tres mediciones */
float calcular_promedio(float m1, float m2, float m3) {
    return (m1 + m2 + m3) / 3.0f;
}

/* Funcion que determina cuantas de las tres mediciones superan el promedio */
int contar_superiores_promedio(float m1, float m2, float m3, float promedio) {
    int contador = 0;
    if (m1 > promedio) {
        contador++;
    }
    if (m2 > promedio) {
        contador++;
    }
    if (m3 > promedio) {
        contador++;
    }
    return contador;
}

int main() {
    float medicion1, medicion2, medicion3;
    
    printf("--- Registro de Tres Mediciones ---\n");
    printf("Ingrese la medicion 1: ");
    scanf("%f", &medicion1);
    
    printf("Ingrese la medicion 2: ");
    scanf("%f", &medicion2);
    
    printf("Ingrese la medicion 3: ");
    scanf("%f", &medicion3);
    
    float promedio = calcular_promedio(medicion1, medicion2, medicion3);
    int cantidad_mayores = contar_superiores_promedio(medicion1, medicion2, medicion3, promedio);
    
    printf("\n--- Resultados ---\n");
    printf("Mediciones ingresadas: %.2f, %.2f, %.2f\n", medicion1, medicion2, medicion3);
    printf("Promedio calculado: %.2f\n", promedio);
    printf("Cantidad de mediciones por encima del promedio: %d\n", cantidad_mayores);
    
    return 0;
}
