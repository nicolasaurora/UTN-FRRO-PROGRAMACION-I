#include <stdio.h>
#include <string.h>

#define MAX_LEN 2000

int main() {
    
    int cantidadDePersonas;
    
    
    printf("Ingrese la cantidad de personas del evento: ");
    scanf("%d", &cantidadDePersonas);
    
    char listaInvitados[cantidadDePersonas][MAX_LEN];
    char nombreIngresado[cantidadDePersonas][20];
    char apellidoIngresado[cantidadDePersonas][20];
    
    
    for (int i = 0; i < cantidadDePersonas; i++) {
        printf("\nIngrese nombre de la persona %d: \n", i + 1);
        scanf("%s", nombreIngresado[i]);
        
        printf ("\nIngrese apellido de la persona %d: \n", i + 1);
        scanf("%s", apellidoIngresado[i]);
        
        
        strcpy(listaInvitados[i], nombreIngresado[i]);
        strcat(listaInvitados[i], " ");
        strcat(listaInvitados[i], apellidoIngresado[i]);
        strcat(listaInvitados[i], ".");
        
    }
    
    printf("\nLista de invitados:\n");
    
    for (int i = 0; i < cantidadDePersonas; i++) {
        printf("\n%d- %s \n",i + 1, listaInvitados[i]);
    }

    return 0;
}
