#include <stdlib.h>
#include <stdio.h>

int main () {

    int total = 0;
    int marcasCorredores[10];
    int promedio;
    int cantMayor = 0; 
    int cantMenor = 0;

    for(int i = 0; i < 10; i ++) {
        printf("\nIngrese la marca en segundos del corredor %d: \n", i + 1);
        scanf("%d", &marcasCorredores[i]);
        total += marcasCorredores[i];
    }

    promedio = total / 10;

    printf("\nEl promedio es: %d\n segundos", promedio);

    for(int i = 0; i < 10; i ++) {
        if (marcasCorredores[i] < promedio) {
            cantMenor ++;
        } else if (marcasCorredores[i] > promedio){
            cantMayor ++;
        }
    }

    printf("\nLa cantidad de corredores que estan por debajo del promedio son: %d\n", cantMenor);
    printf("\nLa cantidad de corredores que estan por encima del promedio son: %d\n", cantMayor);


    return 0;

}