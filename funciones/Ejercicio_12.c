#include <stdio.h>

void tipoDeTriangulo(float *lado1, float *lado2, float *lado3);

int main() {
   
    float lado1;
    float lado2;
    float lado3;
   
    printf("Ingrese longitud del lado 1 del triangulo: ");
    scanf("%f", &lado1);
   
    printf("Ingrese longitud del lado 2 del triangulo: ");
    scanf("%f", &lado2);
   
    printf("Ingrese longitud del lado 3 del triangulo: ");
    scanf("%f", &lado3);
   
    tipoDeTriangulo(&lado1, &lado2, &lado3);
   
   

    return 0;
}

void tipoDeTriangulo(float *lado1, float *lado2, float *lado3) {
    if (*lado1 == *lado2 && *lado1 == *lado3) {
        printf("El triangulo es equilatero.");
    } else if (*lado1 == *lado2 || *lado1 == *lado3 || *lado2 == *lado3) {
        printf(" El triangulo es isosceles.");
    } else {
        printf("El triangulo es escaleno.");
    }
}