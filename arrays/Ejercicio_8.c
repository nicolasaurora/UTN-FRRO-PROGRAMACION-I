#include <stdio.h>
#include <stdlib.h>

int main () {

    int array1[5], array2[5], array3[10];

    for(int i = 0; i < 10; i++) {

        printf("\nIngrese un numero: \n");
        if(i < 5) {
            scanf("%d", &array1[i]);
            array3[i] = array1[i];
        } else {
            scanf("%d", &array2[i]);
            array3[i] = array2[i];
        }
    }

    printf("\n");

    for(int i = 0; i < 10; i ++) {
        printf("%d, ", array3[i]);
    }

    return 0;

}