#include <stdio.h>
#include <string.h>

int main () {

    char cadena[20];

    printf("Ingrese una palabra: ");
    scanf("%s", cadena);

    int longitudCadena = strlen(cadena);
    

    for (int i = longitudCadena; i >= 0; i --) {
        printf("%c", cadena[i]);
    }
    

    return 0;

}
