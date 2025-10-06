#include <stdio.h>
#include <string.h>


int main() {
   
    char cadena[30];
    int vocales = 0;
    
    printf("Ingrese una cadena de texto: ");
    scanf("%s", cadena);
    
    for(int i = 0; i < strlen(cadena); i++) {
        if (cadena[i] == 'a' || cadena[i] == 'e' || cadena[i] == 'i' || cadena[i] == 'o' || cadena[i] == 'u' || cadena[i] == 'A' || cadena[i] == 'E' || cadena[i] == 'I' ||     cadena[i] == 'O' || cadena[i] == 'U') {
            vocales ++;
        }
    }
    
    if (vocales > 0) {
        printf("La cadena ingresada contiene %d cantidad de vocales", vocales);
    } else {
        printf("La cadena ingresada no incluye vocales.");
    }
    
   
    return 0;
    
}
