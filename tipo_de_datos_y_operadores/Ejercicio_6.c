#include <stdio.h>

int main() {
    
    float num1;
    float num2;
    float suma;
    float resta;
    float multiplicacion;

    printf("Ingrese un valor: ");
    scanf("%f", &num1);

    printf("Ingrese el segundo valor: ");
    scanf("%f", &num2);

    suma = num1 + num2;
    resta = num1 - num2;
    multiplicacion = num1 * num2;

    printf("La suma de ambos numeros es: %f", suma);
    printf("La resta del primer numero menos el segundo es: %f", resta);
    printf("La multiplicacion de ambos numeros es: %f", multiplicacion);

    return 0;
}