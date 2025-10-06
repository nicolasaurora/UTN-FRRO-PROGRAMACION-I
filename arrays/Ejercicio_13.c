#include <stdio.h>
#include <string.h>

#define longitud 10

int main() {
   
    char nombres[longitud][20], apellidos[longitud][20], nombresCompletos[longitud][60];
    
    for(int i = 0; i < longitud; i++) {
        printf("\nIngrese nombre %d: \n", i + 1);
        scanf("%s", nombres[i]);
        printf("\nIngrese apellido del nombre %d: \n", i + 1);
        scanf("%s", apellidos[i]);
        strcpy(nombresCompletos[i], nombres[i]);
        strcat(nombresCompletos[i], " ");
        strcat(nombresCompletos[i], apellidos[i]);
    }
    
    printf("\nNombres completos: \n");
    
    for ( int i = 0; i < longitud; i++) {
        printf("\n%d: %s\n",i + 1, nombresCompletos[i]);
    }
   

    return 0;

}