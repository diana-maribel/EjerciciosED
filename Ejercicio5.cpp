/*
5. Un conjunto de datos contiene un determinado número de 
registros que deben distribuirse entre varios nodos de 
procesamiento. Desarrolle un programa en C que solicite el 
número total de registros y el número de nodos, determine 
cuántos registros procesa cada nodo y cuántos quedan sin 
distribuir uniformemente.
*/
#include <stdio.h>

int main() {
    int total_registros, nodos;
    
    printf("Ingrese el numero total de registros: ");
    scanf("%d", &total_registros);
    
    printf("Ingrese el numero de nodos de procesamiento: ");
    scanf("%d", &nodos);
    
    if (nodos <= 0) {
        printf("Error: El numero de nodos debe ser mayor a 0.\n");
        return 1;
    }
    
    int registros_por_nodo = total_registros / nodos;
    int sin_distribuir = total_registros % nodos;
    
    printf("\n--- Distribucion de Carga ---\n");
    printf("Registros que procesa cada nodo: %d\n", registros_por_nodo);
    printf("Registros restantes sin distribuir uniformemente: %d\n", sin_distribuir);
    
    return 0;
}
