#include <stdio.h>

int main() {
    
    int A = 65;
    int B = 66;
    int C = 67;
    char caracter1;
    char caracter2;
    char caracter3;
    int suma;

    
    printf("Codigo ASCII de \"A\": %d\n", A);
    printf("Codigo ASCII de \"B\": %d\n", B);
    printf("Codigo ASCII de \"C\": %d\n", C);

    printf("Ingrese el primer caracter en mayuscula: \n");
    scanf(" %c", &caracter1);

    printf("Ingrese el segundo caracter en mayuscula: \n");
    scanf(" %c", &caracter2);

    suma = caracter1 + caracter2;
    printf("La suma de ambos caracteres en codigo ASCII es: %d\n", suma);

    printf("Ahora ingrese otro caracter en mayuscula: \n");
    scanf(" %c", &caracter3);

    if(caracter3 == A) {
        printf("a");
    } else if(caracter3 == B) {
        printf("b");
    } else {
        printf("c");
    }



    return 0; 
}