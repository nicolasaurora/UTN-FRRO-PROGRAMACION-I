#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int num1;
    
    printf("Ingrese un numero: \n");
    scanf("%d", &num1);
    
    
    if (num1 % 2 == 0) {
        printf("El numero %d es par.\n", num1);
    } else {
        printf("El numero %d es impar.\n", num1);
    }

    return 0;
}
