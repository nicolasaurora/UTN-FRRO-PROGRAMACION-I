#include <stdlib.h>
#include <stdio.h>


int main() {
   
    int numeros[3][3], sumaMatriz;

    for (int i = 0; i < 3; i ++) {

        for (int j = 0; j < 3; j++) {
            
            printf("\nIngrese el numero de la posicion %d - %d\n", i,j);
            scanf("%d", &numeros[i][j]);
            if (i != j) {
                sumaMatriz += numeros[i][j];
            }
        }
    }
   
    printf("\nLa suma de la matriz es: %d\n", sumaMatriz);
   

    return 0;

}