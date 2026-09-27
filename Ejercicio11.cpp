/*
11. Durante la carga manual de datos, el sistema requiere una 
clave numérica de acceso. Desarrolle un programa en C ++ 
que solicite repetidamente la contraseña mediante un ciclo 
while, contabilice el número de intentos realizados y 
finalice cuando se ingrese la clave correcta.
*/
#include <stdio.h>

int main() {
    const int CLAVE_CORRECTA = 2026;
    int clave_ingresada = 0;
    int intentos = 0;
    
    printf("--- Acceso al Sistema de Carga de Datos ---\n");
    
    while (clave_ingresada != CLAVE_CORRECTA) {
        printf("Ingrese la clave numerica: ");
        scanf("%d", &clave_ingresada);
        intentos++;
        
        if (clave_ingresada != CLAVE_CORRECTA) {
            printf("Clave incorrecta. Intente nuevamente.\n\n");
        }
    }
    
    printf("\nAcceso concedido exitosamente.\n");
    printf("Numero total de intentos realizados: %d\n", intentos);
    
    return 0;
}
