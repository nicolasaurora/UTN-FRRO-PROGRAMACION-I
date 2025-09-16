#include <stdio.h>
#include <stdlib.h>


int main() {

    float num;
    float suma = 0;
    float contador = 0;
    
    while (contador < 10) {
        
        do {
            printf("Ingrese un numero real positivo: \n");
            scanf("%f", &num);

            if (num < 0) {

            printf("El numero ingresado es negativo.\n");

            } else if (num == 0) {
                printf("El numero es nulo.\n");
            } else {
                suma += num;
                contador ++;
            } 

        } while (num < 1);
    }
    
    printf("La suma total de los numeros ingresados es: %.2f", suma);
    

    return 0;
}
