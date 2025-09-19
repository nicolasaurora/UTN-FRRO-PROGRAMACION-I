#include <stdio.h>
#include <stdlib.h>


int main() {
    
    int numeros[5] = {};
    int cantidadCincos = 0;
    
    for (int i = 0; i < 5; i++) {
        printf("Ingrese el numero del indice %d: ", i);
        scanf("%d", &numeros[i]);
        if(numeros[i] == 5) {
            cantidadCincos++;
        }
    }
    
    printf("\nLa cantidad de cincos es: %d\n", cantidadCincos);

    return 0;
}
