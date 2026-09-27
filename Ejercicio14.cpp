/*
14. Desarrolle un programa en C que permita ingresar un valor 
n y compare dos procedimientos: el primero debe realizar 
un solo recorrido de n elementos y el segundo debe utilizar 
dos ciclos anidados de n iteraciones. Utilice contadores para 
estimar el número de operaciones realizadas y relacione los 
resultados con complejidades aproximadas O(n) y O(n²).
*/
#include <stdio.h>

int main() {
    int n;
    
    printf("Ingrese el tamano del problema (n): ");
    scanf("%d", &n);
    
    if (n < 0) {
        printf("Error: El valor de n debe ser mayor o igual a 0.\n");
        return 1;
    }
    
    long long operaciones_lineal = 0;
    for (int i = 0; i < n; i++) {
        operaciones_lineal++;
    }
    
    long long operaciones_cuadratica = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            operaciones_cuadratica++;
        }
    }
    
    printf("\n--- Comparacion de Complejidades Algoritmicas ---\n");
    printf("Tamano de entrada (n): %d\n\n", n);
    printf("Procedimiento 1 (1 ciclo simple):\n");
    printf("  - Operaciones contadas: %lld\n", operaciones_lineal);
    printf("  - Complejidad teorica aproximada: O(n) [Tiempo lineal]\n\n");
    
    printf("Procedimiento 2 (2 ciclos anidados):\n");
    printf("  - Operaciones contadas: %lld\n", operaciones_cuadratica);
    printf("  - Complejidad teorica aproximada: O(n^2) [Tiempo cuadratico]\n\n");
    
    printf("Conclusion: Al duplicar o aumentar n, el crecimiento en O(n^2) es cuadratico\n");
    printf("mientras que en O(n) crece de manera proporcional a n.\n");
    
    return 0;
}
