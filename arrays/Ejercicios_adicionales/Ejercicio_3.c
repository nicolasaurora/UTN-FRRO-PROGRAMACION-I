#include <stdlib.h>
#include <stdio.h>

int main () {

    float numReales[4][3];
    float sumaTotal = 0;

    for(int i = 0; i < 4; i ++) {
        for(int j = 0; j < 3; j ++) {
            printf("\nIngrese el numero de la posicion %d - %d: \n", i + 1, j + 1);
            scanf("%f", &numReales[i][j]);
            sumaTotal += numReales[i][j];
        }
    }

    printf("\nLa suma total es: %.2f\n", sumaTotal);

    return 0;

}