#include <stdio.h>
#include <stdlib.h>


int main() {
    
    float num1;
    float num2;
    int operaciones;
    
    
    printf("Ingrese el primer numero: \n");
    scanf("%f", &num1);
    
    printf("Ingrese el segundo numero: \n");
    scanf("%f", &num2);
    
    printf("Seleccione una opcion: \n");
    printf("1- Informar su suma.\n");
    printf("2- Informar su resta.\n");
    printf("3- Informar su multiplicacion.\n");
    printf("4- Informar su division.\n");
    printf("5- Salir.\n");
    scanf("%d", &operaciones);
    
    
    switch (operaciones) {
        
        case 1: 
        printf("La suma de los numeros es: %.2f\n", num1 + num2);
        break;
        
        case 2: 
        printf("La resta de los numeros es: %.2f\n", num1 - num2);
        break;
        
        case 3: 
        printf("La multiplicacion de los numeros es: %.2f\n", num1 * num2);
        break;
        
        case 4: 
        printf("La division de los numeros es: %.2f\n", num1 / num2);
        break;
        
        case 5: 
        printf("Saliendo...\n");
        break;
        
        default:
        printf("El numero ingresado es invalido.\n");
        break;
    }
    
    
    return 0;
}
