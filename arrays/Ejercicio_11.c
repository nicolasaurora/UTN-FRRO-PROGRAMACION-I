#include <stdio.h>
#include <string.h>

int main() {
   
    char cadena1[20], cadena2[20], cadena3[20];
    
    printf("\nIngrese la primer cadena de texto(una sola palabra): \n");
    scanf("%s", cadena1);
    
    printf("\nIngrese la segunda cadena de texto(una sola palabra): \n");
    scanf("%s", cadena2);
    
    printf("\nIngrese la tercera cadena de texto(una sola palabra): \n");
    scanf("%s", cadena3);
    
    printf("\nLa longitud de la cadena 1 es: %d\n", strlen(cadena1));
    printf("\nLa longitud de la cadena 2 es: %d\n", strlen(cadena2));
    printf("\nLa longitud de la cadena 3 es: %d\n", strlen(cadena3));
   
    
    return 0;

}
