#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float num1, num2, num3;
    
    printf("Ingrese el primer numero: \n");
    scanf("%f", &num1);
    
    printf("Ingrese el segundo numero: \n");
    scanf("%f", &num2);
    
    printf("Ingrese el tercer numero: \n");
    scanf("%f", &num3);
    
    
    if (num1 > num2 && num1 > num3) {
        printf("El numero mayor es el %.2f\n", num1);
    } else if (num2 > num1 && num2 > num3){
        printf("El numero mayor es el %.2f\n", num2);
    } else {
        printf("El mayor es el numero %.2f\n", num3);
    }

    return 0;
}
