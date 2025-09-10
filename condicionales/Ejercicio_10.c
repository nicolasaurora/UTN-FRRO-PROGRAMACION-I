#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int num;
    
    
    printf("Ingrese un numero del 1 al 12: \n");
    scanf("%d", &num);
    
    if (num < 1 || num > 12){
        printf("El valor es invalido.\n");
        exit(EXIT_FAILURE);
    }
    
    if (num == 1) {
        printf("El mes es: Enero\n");
    } else if (num == 2) {
        printf("El mes es: Febrero\n");
    } else if (num == 3) {
        printf("El mes es: Marzo\n");
    } else if (num == 4) {
        printf("El mes es: Abril\n");
    } else if (num == 5) {
        printf("El mes es: Mayo\n");
    } else if (num == 6) {
        printf("El mes es: Junio\n");
    } else if (num == 7) {
        printf("El mes es: Julio\n");
    } else if (num == 8) {
        printf("El mes es: Agosto\n");
    } else if (num == 9) {
        printf("El mes es: Septiembre\n");
    } else if (num == 10) {
        printf("El mes es: Octubre\n");
    } else if (num == 11) {
        printf("El mes es: Noviembre\n");
    } else {
        printf("El mes es: Diciembre\n");
    }
    
    
    return 0;
}
