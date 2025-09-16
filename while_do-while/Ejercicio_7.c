#include <stdio.h>
#include <stdlib.h>

int main() {

    float num;
    int contador = 0;

    do {
        printf("Ingrese un numero real: \n");
        scanf("%f", &num);

        contador ++;

    } while (num != 0);

    printf("Se han ingresado %d numeros reales.\n", contador);


    return 0;
}