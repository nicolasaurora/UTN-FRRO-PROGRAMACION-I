#include <stdio.h>
#include <stdlib.h>

int main() {
   
    int vector[6] = {10, 20, 5, 15, 30, 20};
    int sumaVector = 0;
    int mayor = 0;
    int conteoVeinte = 0;
   
    for (int i = 0; i < 6; i++) {
        printf("\nIndice: %d, Valor: %d\n", i, vector[i]);
    }
    printf("\n========================================\n");
   
    for (int i = 0; i < 6; i++) {
        sumaVector += vector[i];
    }
   
    printf("\nLa suma del vector es: %d\n", sumaVector);
    printf("\n========================================\n");
   
    for (int i = 0; i < 6; i++) {
        if (i %2 == 1) {
            printf("%d ", vector [i]);
        }
    }
    printf("\n========================================\n");
   
   
    for (int i = 0; i < 6; i++) {
        if (vector[i] % 2 == 1) {
            printf("%d ", i);
        }
    }
    printf("\n========================================\n");
   
    for (int i = 0; i < 6; i++) {
        if (i == 0) {
            mayor = vector[i];
        } else if (vector [i] > mayor) {
            mayor = vector [i];
        }
    }
    printf("El mayor numero es: %d", mayor);
    printf("\n========================================\n");
   
    for (int i = 0; i < 6; i++) {
        if (vector[i] == 20) {
            conteoVeinte ++;
        }
    }
    printf("El numero 20 aparece %d veces", conteoVeinte);
    printf("\n========================================\n");
   
   
    return 0;
    
}