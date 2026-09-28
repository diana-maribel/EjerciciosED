/*
1. Desarrolle un programa en C que registre las horas 
dedicadas por un analista al procesamiento de un conjunto 
de datos y el costo por hora. Calcule el costo total del 
procesamiento y muestre un resumen con las horas 
trabajadas, tarifa aplicada y costo final.
*/
#include <stdio.h>

int main() {
    float horas;
    float costo_por_hora;
    
    printf("Ingrese las horas dedicadas: ");
    scanf("%f", &horas);
    
    printf("Ingrese el costo por hora: ");
    scanf("%f", &costo_por_hora);
    
    float costo_total = horas * costo_por_hora;
    
    printf("\n--- Resumen ---\n");
    printf("Horas trabajadas: %.2f\n", horas);
    printf("Tarifa aplicada: $%.2f\n", costo_por_hora);
    printf("Costo final: $%.2f\n", costo_total);
    
    return 0;
}
