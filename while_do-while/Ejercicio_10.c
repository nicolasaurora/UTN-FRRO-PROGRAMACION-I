#include <stdio.h>
#include <stdlib.h>\


int main() {

    float num1, num2;
    int opcion;
    int contador = 0;

    printf("Ingrese un numero: \n");
    scanf("%f", &num1);

    printf("\nIngrese otro numero: \n");
    scanf("%f", &num2);


    do {

        printf("\n1. Informar su suma \n");
        printf("2. Informar su resta \n");
        printf("3. Informar su multiplicacion \n");
        printf("4. Informar su division \n");
        printf("5. Informar cantidad de operaciones realizadas \n");
        printf("6. Salir \n");
        printf("Seleccione una operacion: \n");
        scanf("%d", &opcion);

        switch (opcion) {

            case 1:
            printf("\nLa suma de los numeros es: %.2f\n", num1 + num2);
            contador ++;
            break;

            case 2:
            printf("\nLa resta del primero menos el segundo es: %.2f\n", num1 - num2);
            contador ++;
            break;

            case 3:
            printf("\nLa multiplicacion de los numeros es: %.2f\n", num1 * num2);
            contador ++;
            break;

            case 4:
            printf("\nLa division (%.2f / %.2f) da como resultado: %.2f\n",num1, num2, num1 / num2);
            contador ++;
            break;

            case 5:
            contador ++;
            printf("\nCantidad de operaciones realizadas: %d \n", contador);
            break;

            case 6:
            printf("\nSaliendo...\n");
            break;

            default:
            printf("\nLa opcion ingresada es invalida.\n");
            break;
        }

    } while(opcion != 6);


    return 0;

}