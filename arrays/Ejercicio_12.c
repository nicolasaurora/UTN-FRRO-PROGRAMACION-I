#include <stdio.h>
#include <string.h>

int main() {
   
    char nombre1[10], nombre2[10];
    
    printf("Ingrese el nombre 1(una sola palabra): ");
    scanf("%s", nombre1);
    
    printf("Ingrese el nombre 2(una sola palabra): ");
    scanf("%s", nombre2);
    
    if (strcmp(nombre1, nombre2) == 0) {
        printf("Son iguales");
    } else if (strcmp(nombre1, nombre2) < 0) {
        printf("%s precede a %s", nombre1, nombre2);
    } else {
        printf("%s precede a %s", nombre2, nombre1);
    }
   
    
    return 0;

}
