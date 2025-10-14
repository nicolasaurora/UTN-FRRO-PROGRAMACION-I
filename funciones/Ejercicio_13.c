#include <stdio.h>

int validarDni(int *dni);

int main() {
   
    char nombre[15];
    char apellido[15];
    int dni;
   
    printf("Ingrese nombre: ");
    scanf("%s", nombre);
   
    printf("Ingrese apellido: ");
    scanf("%s", apellido);
   
    printf("Ingrese dni: ");
    scanf("%d", &dni);
   
    if (validarDni(&dni) == 1) {
        printf("El dni es valido.");
    } else {
        printf("El dni es invalido.");
    }
   
   

    return 0;
}


int validarDni(int *dni) {
    if (*dni > 99999 && *dni < 100000000) {
        return 1;
    } else {
        return 0;
    }
}