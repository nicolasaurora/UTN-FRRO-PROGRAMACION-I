#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float nota;
    
    printf("Ingrese la nota del alumno: \n");
    scanf("%f", &nota);
    
    
    if (nota < 0 || nota > 10) {
        printf("La nota ingresada es invalida\n");
    } else if (nota < 4) {
        printf("El alumno esta reprobado.\n");
    } else if (nota < 6) {
        printf("El alumno esta regular.\n");
    } else {
        printf("El alumno esta aprobado.\n");
    }

    return 0;
}
