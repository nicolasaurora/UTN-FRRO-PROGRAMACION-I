#include <stdio.h>
#include <stdlib.h>


int main() {

    int i = 0;
    int sumaImpares = 0;
    int contador = 0;
    
    for (int i = 0; contador <= 20; i++) {
        
        if (i % 2 == 1) {
            sumaImpares += i;
            contador ++;
        } 
    
    } 
    
    printf("La suma de los 20 primeros numeros impares es: %d", sumaImpares);


    return 0;

}
