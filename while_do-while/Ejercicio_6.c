#include <stdio.h>
#include <stdlib.h>


int main() {

    float nota, sumaNotas, promedio;
    int respuesta, contador;
    
    sumaNotas= 0;
    contador = 0;
    promedio = 0;
    
    do {
        printf("Desea ingresar una nota? elija 1 o 2: \n");
        printf("1- Si\n");
        printf("2- No\n");
        scanf("%d", &respuesta);
        
        if (respuesta == 1) {
            printf("Ingrese nota: \n");
            scanf("%f", &nota);
            sumaNotas += nota;
            contador ++;
        }

    } while (respuesta != 2);
    
    if (promedio == 0) {
        printf("Usted no ingreso ninguna nota.");
    } else {
        promedio = sumaNotas / contador;
        printf("El promedio de las notas es: %.2f", promedio);
    }


    return 0;
}
