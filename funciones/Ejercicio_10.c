#include <stdio.h>

void ingresarDatos(char nombre[], char apellido[], int *edad);
void mostrarDatos(char nombre[], char apellido[], int edad);

int main() {
   
   
    char nombre[30];
    char apellido[30];
    int edad;
   
    ingresarDatos(nombre,apellido,&edad);
    mostrarDatos(nombre,apellido,edad);
   

    return 0;
}

void ingresarDatos(char nombre[], char apellido[], int *edad){
    printf("\nIngrese su nombre: \n");
    scanf("%s", nombre);
   
    printf("\nIngrese su apellido: \n");
    scanf("%s", apellido);
   
    printf("\nIngrese su edad: \n");
    scanf("%d", edad);
}

void mostrarDatos(char nombre[], char apellido[], int edad) {
    printf("\nNombre: %s\n", nombre);
    printf("\nApellido: %s\n", apellido);
    printf("\nEdad: %d\n", edad);
}