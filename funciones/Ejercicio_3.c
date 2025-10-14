#include <stdio.h>

int esPar(int numero);

int main() {

    int num1;

    printf("Ingrese un numero: ");
    scanf("%d", &num1);

    if(esPar(num1)) {
        printf("El numero ingresado es par.");
    } else {
        printf("El numero ingresado es impar");
    }


    return 0;

}

int esPar(int numero) {
    return (numero %2 == 0);
}