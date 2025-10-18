
#include <stdio.h>

int main() {
    
    int longitudArray;
    
    do {
        printf("Ingrese la longitud del array: ");
        scanf("%d", &longitudArray);
        if (longitudArray < 2) {
            printf("La longitu debe ser mayor a 2.");
        }
        
    }while (longitudArray < 2);
    
    int array1[longitudArray];
    int array2[longitudArray];
    int array3[longitudArray];
    int sumaElementosArray1y2;
    int sumaNumeros;
    
    for(int i = 0; i < longitudArray; i++) {
        sumaNumeros = 0;
        
        printf("Ingrese valor %d del array 1: ", i + 1);
        scanf("%d", &array1[i]);
        printf("Ingrese valor %d del array 2: ", i + 1);
        scanf("%d", &array2[i]);
        
        sumaElementosArray1y2 = array1[i] + array2[i];
        sumaNumeros += sumaElementosArray1y2;

        array3[i] = sumaNumeros;
        
    }
    
    for ( int i = 0; i < longitudArray; i ++) {
        printf("%d, ", array3[i]);
    }
    
    return 0;
}
