#include <stdio.h>
#include <string.h>


int main() {
   
    char nombres[10][20], apellidos[10][20], nombresCompletos[10][60];
    
    for(int i = 0; i < 10; i++) {
        printf("\nIngrese nombre %d: \n", i + 1);
        scanf("%s", nombres[i]);
    }
    
    for(int i = 0; i < 10; i++) {
        printf("\nIngrese apellido del nombre %d: \n", i + 1);
        scanf("%s", apellidos[i]);
    }
    
    for (int i = 0; i < 10; i++) {
        
        strcpy(nombresCompletos[i], nombres[i]);
        strcat(nombresCompletos[i], " ");
        strcat(nombresCompletos[i], apellidos[i]);
    }
    
    printf("\nNombres completos: \n");
    
    for ( int i = 0; i < 10; i++) {
        printf("\n%d: %s\n",i + 1, nombresCompletos[i]);
    }
   

    return 0;

}