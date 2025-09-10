#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float altura;
    
    
    printf("Ingrese la altura de la persona en Cm: \n");
    scanf("%f", &altura);
    
    if (altura <= 150) {
        printf("Persona de altura por debajo de la media.\n");
    } else if ( altura >= 151 && altura <= 170) {
        printf("Persona de altura media.\n");
    } else {
        printf("Persona de altura por arriba de la media.\n");
    }
    
    
    return 0;
}
