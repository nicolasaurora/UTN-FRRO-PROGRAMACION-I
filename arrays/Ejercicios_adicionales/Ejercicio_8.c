#include <stdio.h>


int main() {

    int matriz[3][3];
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("\nIngrese numero de la posicion %d - %d: \n", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if(i == j) {
                printf("%d ", matriz[i][j]);
            }
        }
    }
    
    return 0;
}
