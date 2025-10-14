#include <stdio.h>

float calcularCubo(float numero);

int main() {

    float num1;

    printf("Ingrese un numero real: ");
    scanf("%f", &num1);

    float cubo = calcularCubo(num1);

    printf("El cubo del numero ingresado es: %.2f", cubo);

    return 0;

}

float calcularCubo(float numero) {
    return numero * numero * numero;
}

