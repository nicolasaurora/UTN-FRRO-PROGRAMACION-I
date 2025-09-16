#include <stdio.h>
#include <stdlib.h>


int main() {

    int i = 0;
    int n1;

    printf("Ingrese un numero: ");
    scanf("%d", &n1);
    
    for (int i = 0; i <= 10; i++) {
        printf("%d x %d = %d\n", n1,i, n1 * i);
    } 
    

    return 0;

}
