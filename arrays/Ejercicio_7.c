#include <stdio.h>
#include <stdlib.h>

int main () {

    int cantidadNotas;
    float sumaTotal = 0;
    float promedio;

    printf("\nIngrese cantidad de notas a agregar en el array: \n");
    scanf("%d", &cantidadNotas);

    float notas[cantidadNotas];

    for (int i = 0; i < cantidadNotas; i++) {

        do {
            printf("\nIngrese la nota %d: \n", i + 1);
            scanf("%f", &notas[i]);
            if (notas[i] < 0 || notas[i] > 10) {
                printf("\nLa nota ingresada es invalida, Debe ser entre 0 y 10.\n");
            }
        } while (notas[i] < 0 || notas[i] > 10);
        
        sumaTotal += notas[i];
    }

    promedio = sumaTotal / cantidadNotas;

    printf("\nLa suma total es: %.2f\n", sumaTotal);
    printf("\nEl promedio es: %.2f\n", promedio);


    return 0;

}