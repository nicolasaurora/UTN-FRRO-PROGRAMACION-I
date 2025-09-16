#include <stdio.h>
#include <stdlib.h>


int main() {

    int dni = 38632584;
    float nota = 7;
    int dniIngresado;
    int intentos = 1;
    int ingresaCorrectamente = 0;
   
    do {
        printf("Ingrese numero de dni: \n");
        scanf("%d", &dniIngresado);

        if (dniIngresado == dni) {
            printf("El dni ingresado es correcto.\n");
            printf("Su nota de parcial es: %.2f\n", nota);
            ingresaCorrectamente = 1;
        } else {
            printf("El dni ingresado es invalido.\n");
            intentos ++;
        }
       
    } while (intentos < 4 && !ingresaCorrectamente);
   

    if (intentos == 4) {
        printf("Se agotaron los intentos de ingresar su DNI.\n");
    }
   
   
    return 0;
}
