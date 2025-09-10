#include <stdio.h>

int main() {
    
    int num1;
    int num2;
    int suma;

    printf("Ingrese un valor entero: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo valor entero: ");
    scanf("%d", &num2);

    suma = num1 + num2;

    printf("La suma de ambos numeros es: %d", suma);

    return 0;
}