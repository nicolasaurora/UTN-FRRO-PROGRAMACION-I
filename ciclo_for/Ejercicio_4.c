#include <stdio.h>
#include <stdlib.h>



int main() {

    int sumaImpares;
    
    for (int i = 10; i >= 1; i--) {
        if (i % 2 == 1) {
            sumaImpares += i;
        }
        
    }
    
    printf("La suma de los numeros impares que hay del 1 al 10 es: %d", sumaImpares);


    return 0;

}
