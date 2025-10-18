#include <stdio.h>
#include <string.h>

#define MAX_LEN 30

int main() {

    int cantidadPersonas;
    char nombreYApellidoIngresado[25];
    char apellidoIngresado[15];
    char menuIngresado[15];
    
    
    printf("\nIngrese la cantidad de personas del evento: \n");
    scanf("%d", &cantidadPersonas);
    
    char listadoPersonasTotal[cantidadPersonas][MAX_LEN];
    
    for (int i = 0; i < cantidadPersonas; i++) {
        printf("\nIngrese nombre y apellido de la persona %d: \n", i + 1);
        scanf(" %[^\n]", nombreYApellidoIngresado);
        printf("\nIngrese el menu de la persona %d: \n", i + 1);
        scanf(" %[^\n]", menuIngresado);
        
        strcpy(listadoPersonasTotal[i], nombreYApellidoIngresado);
        strcat(listadoPersonasTotal[i], ": ");
        strcat(listadoPersonasTotal[i], menuIngresado);
        strcat(listadoPersonasTotal[i], ".");
    }
    
    for (int i = 0; i < cantidadPersonas; i++) {
        printf("- %s\n", listadoPersonasTotal[i]);
    }

    return 0;
}
