#include <stdio.h>
#include <math.h>

int main() {

    float lado1;
    float lado2;
    float perimetro;
    float superficie;
    float hipotenusa;
    

    printf("Ingrese el valor del primer lado del triangulo: ");
    scanf("%f", &lado1);

    printf("Ingrese el valor del segundo lado del triangulo: ");
    scanf("%f", &lado2);

    hipotenusa = sqrt(pow(lado1,2) + pow(lado2,2));

    perimetro = lado1 + lado2 + hipotenusa;

    superficie = (lado1 * lado2) / 2;

    printf("La hipotenusa del triangulo es: %.2f\n", hipotenusa);
    printf("El perimetro del triangulo es: %.2f\n", perimetro);
    printf("La superficie del triangulo es: %.2f\n", superficie);

    return 0;
}