#include <stdio.h>
#include <stdlib.h>

int main() {
   
    float facturacionTotal = 0;
    float promedio, facturacionMaxima, facturacionMinima, facturacionDelMes;

    for (int i = 0; i < 6; i++) {
        printf("\nIngrese la facturacion del mes %d: \n", i + 1);
        scanf("%f", &facturacionDelMes);
        printf("\nMes %d: $%.2f\n", i + 1, facturacionDelMes);
        facturacionTotal += facturacionDelMes;
        if (i == 0) {
            facturacionMaxima = facturacionDelMes;
            facturacionMinima = facturacionDelMes;
        } else if (facturacionDelMes > facturacionMaxima) {
            facturacionMaxima = facturacionDelMes;
        } else if (facturacionDelMes < facturacionMinima) {
            facturacionMinima = facturacionDelMes;
        }
    }

    printf("\n==========================================\n");
    printf("\nLa facturacion total semestral es de: $%.2f\n", facturacionTotal);

    printf("\n==========================================\n");
    promedio = facturacionTotal / 6;
    printf("\nEl promedio es: %.2f\n", promedio);

    printf("\n==========================================\n");
    printf("\nLa facturacion maxima del semestre es: $%.2f\n", facturacionMaxima);
    printf("\nLa facturacion minima del semestre es: $%.2f\n", facturacionMinima);


   
    return 0;
    
}
