#include <stdio.h>
#include <math.h>

int main() {

    float lado1;
    float lado2;
    float perimetro;
    float superficie;
    float diagonalPrincipal;
    

    printf("Ingrese el valor de un lado del rectangulo: ");
    scanf("%f", &lado1);

    printf("Ingrese el valor de otro lado del rectangulo: ");
    scanf("%f", &lado2);

    diagonalPrincipal = sqrt(pow(lado1,2) + pow(lado2,2));

    perimetro = lado1 * 2 + lado2 * 2;

    superficie =  lado1 * lado2;

    printf("La medida de la diagonal principal del rectangulo es: %.2f\n", diagonalPrincipal);
    printf("El perimetro del rectangulo es: %.2f\n", perimetro);
    printf("La superficie del rectangulo es: %.2f\n", superficie);

    return 0;
}