#include <stdio.h>
#include <stdlib.h>


int main() {

    int i = 0;
    int j = 0;
    float nota, promedioGeneral;
    float promedio = 0;
    float sumaPromedios = 0;

    for (i = 0; i < 5; i ++) {

        promedio = 0;

        for (j = 0; j < 3; j ++) {

            do {
                printf("\nIngrese la nota %d del alumno %d: \n", j + 1, i + 1);
                scanf("%f", &nota);
                promedio += nota;

                if (nota < 0 || nota > 10) {
                    printf("\nNota invalida. Debe ser entre 0 y 10.\n");
                }
            } while (nota < 0 || nota > 10);
            
        }
        promedio = promedio / 3;
        printf("\nEl promedio del alumno %d es: %.2f\n", i + 1, promedio);
        sumaPromedios += promedio;  
    }

    promedioGeneral = sumaPromedios / 5;
    printf("El promedio general es: %.2f", promedioGeneral);


    return 0;
    
}