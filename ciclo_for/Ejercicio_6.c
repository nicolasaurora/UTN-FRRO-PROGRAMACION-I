#include <stdio.h>
#include <stdlib.h>


int main() {

    int suma = 0;
    int contador = 0;
    
    for (int i = 0; contador <= 10; i++) {
        
        if (i % 3 == 0) {
            suma += i;
            contador ++;
        } 
    
    } 
    
    printf("La suma de los 10 primeros numeros multiplos de 3 es: %d", suma);


    return 0;

}
