#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float num1;
    float num2;
    
    printf("Ingrese el primer numero: \n");
    scanf("%f", &num1);
    
    printf("Ingrese el segundo numero: \n");
    scanf("%f", &num2);
    
    
    if (num1 > num2) {
        printf("El numero mayor es el %.2f\n", num1);
    } else {
        printf("El numero mayor es el %.2f", num2);
    }

    return 0;
}
