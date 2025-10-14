#include <stdio.h>

float calcularAreaCuadrado(float numero);

int main() {

    float ladoCuadrado;

    printf("Ingrese el valor del lado del cuadrado: ");
    scanf("%f", &ladoCuadrado);

    float areaCuadrado = calcularAreaCuadrado(ladoCuadrado);

    printf("El area del cuadrado es: %.2f", areaCuadrado);


    return 0;

}

float calcularAreaCuadrado(float numero) {
    return numero * numero;
}