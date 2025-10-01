#include <stdlib.h>
#include <stdio.h>


int main() {
   
    int numeros[5], numeros2[5];

    for (int i = 0; i < 5; i ++) {

        printf("Ingrese un numero: ");
        scanf("%d", &numeros[i]);
        numeros2[i] = numeros[i] * 2;
    }
   
    for (int i = 0; i < 5; i++) {

        if (i == 4) {
            printf("%d. ", numeros2[i]);
        } else {
        printf("%d, ", numeros2[i]);
        }
    }
   

    return 0;
    
}