#include <stdio.h>

int signo(float numero);

int main() {

    float numIngresado;

    printf("Ingrese un numero real: ");
    scanf("%f", &numIngresado);

    signo(numIngresado);

    return 0;

}

int signo(float numero) {
    int devuelve;
    if (numero < 0) {
        devuelve = -1;
        printf("%d", devuelve);
    } else if (numero > 0) {
        devuelve = 1;
        printf("%d", devuelve);
    } else {
        devuelve = 0;
        printf("%d", devuelve);
    }
}
