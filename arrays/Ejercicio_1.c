#include <stdio.h>
#include <stdlib.h>


int main() {
    
    int numeros[5] = {1,2,3,4,5};
    
    for (int i = 0; i < 5; i++) {
        printf("\nIndice: %d, Valor: %d\n", i, numeros[i]);
    }

    return 0;
}
