/*
4. Desarrolle un programa en C que solicite dos valores 
enteros correspondientes al número de registros procesados 
por dos algoritmos. Calcule suma, diferencia, producto, 
división entera y residuo, y muestre los resultados de 
manera organizada.
*/
#include <stdio.h>

int main() {
    int reg1, reg2;
    
    printf("Ingrese el numero de registros del Algoritmo 1: ");
    scanf("%d", &reg1);
    
    printf("Ingrese el numero de registros del Algoritmo 2: ");
    scanf("%d", &reg2);
    
    printf("\n--- Resultados de las Operaciones ---\n");
    printf("Suma: %d\n", reg1 + reg2);
    printf("Diferencia: %d\n", reg1 - reg2);
    printf("Producto: %d\n", reg1 * reg2);
    
    if (reg2 != 0) {
        printf("Division entera: %d\n", reg1 / reg2);
        printf("Residuo: %d\n", reg1 % reg2);
    } else {
        printf("Division entera: No definida (division por cero)\n");
        printf("Residuo: No definido (division por cero)\n");
    }
    
    return 0;
}
