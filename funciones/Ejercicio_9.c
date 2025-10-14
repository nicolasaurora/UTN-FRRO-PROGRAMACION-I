#include <stdio.h>

void piramide(char caracter, int numero);

int main() {
   
    char caracterIngresado;
    int numIngresado;
   
    printf("Ingrese un caracter: ");
    scanf(" %c", &caracterIngresado);
   
    printf("Ingrese un numero entero: ");
    scanf("%d", &numIngresado);
   
    piramide(caracterIngresado,numIngresado);

    return 0;
}


void piramide(char caracter, int numero) {
    for ( int i = numero; i > 0; i--) {
        printf("\n");
        for (int j = i; j > 0; j--) {
            printf("%c", caracter);
        }
    }
}