#include <stdio.h>

char devuelveInicial(char array[]);

int main() {

    char cadena[20];

    printf("Ingrese una palabra: ");
    scanf("%s", cadena);

    printf("La inicial de la palabra es: %c", devuelveInicial(cadena));

    return 0;

}

char devuelveInicial(char array[]) {
    return array[0];
}
