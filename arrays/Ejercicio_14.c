#include <stdio.h>
#include <string.h>

int main() {
   
    char cadena[30];
    
    printf("Ingrese una cadena de texto: ");
    scanf("%s", cadena);
    
    printf("La cadena ingresada tiene %d cantidad de caracteres", strlen(cadena));
   
    return 0;
}
