#include <stdio.h>

int main() {
    
    int num1;
    int num2;
    int num3;
    int suma;

    printf("Ingrese un valor entero: ");
    scanf("%d", &num1);

    printf("Ingrese el segundo valor entero: ");
    scanf("%d", &num2);

    printf("Ingrese el tercer valor entero: ");
    scanf("%d", &num3);

    suma = num1 + num2 + num3;

    printf("La suma de los numeros es: %d", suma);

    return 0;
}