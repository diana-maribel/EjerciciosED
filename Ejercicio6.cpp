/*
6. Durante un proceso iterativo, una variable representa el 
número acumulado de registros válidos. Desarrolle un 
programa en C que inicialice la variable en 4, incremente 
su valor en 3 y posteriormente duplique el resultado. 
Muestre el estado de la variable después de cada operación.
*/
#include <stdio.h>

int main() {
    int registros_validos = 4;
    printf("--- Estado de la Variable ---\n");
    printf("Estado inicial: %d\n", registros_validos);
    
    registros_validos += 3;
    printf("Despues de incrementar en 3: %d\n", registros_validos);
    
    registros_validos *= 2;
    printf("Despues de duplicar el resultado: %d\n", registros_validos);
    
    return 0;
}
