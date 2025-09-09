#include <stdio.h>

int main() {
    
    float lado1;
    float lado2;
    float lado3;
    float perimetro;
    

    printf("Ingrese el valor del primer lado del triangulo: ");
    scanf("%f", &lado1);

    printf("Ingrese el valor del segundo lado del triangulo: ");
    scanf("%f", &lado2);

    printf("Ingrese el valor del tercer lado del triangulo: ");
    scanf("%f", &lado3);

    perimetro = lado1 + lado2 + lado3;

    printf("El perimetro del triangulo es: %.2f", perimetro);

    return 0;
}