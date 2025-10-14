#include <stdio.h>

void mensajeBienvenida(char inicial);

int main () {

    char ini;

    printf("Ingrese inicial: ");
    scanf("%c", &ini);

    mensajeBienvenida(ini);

    return 0;

}

void mensajeBienvenida(char inicial){
    printf("\n Bienvenido %c espero que tengas un lindo dia", inicial);
}