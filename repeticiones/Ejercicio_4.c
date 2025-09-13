#include <stdio.h>
#include <stdlib.h>


int main() {

    float nota;
    float sumNotas = 0;
    float promedio = 0;
    float promedioGeneral = 0;
    int cantidadAlumnos;
    int cantidadParciales;
    int contadorAlumnos = 0;
    int contadorParciales = 0;

    
    printf("Ingrese la cantidad de alumnos: \n");
    scanf("%d", &cantidadAlumnos);
    
    printf("Ingrese la cantidad de parciales: \n");
    scanf("%d", &cantidadParciales);

    
    while (contadorAlumnos < cantidadAlumnos) {

        sumNotas = 0;
        promedio = 0;
        contadorParciales = 0;

        while (contadorParciales < cantidadParciales) {

            do {
                printf("Ingrese la nota %d del alumno %d:\n", contadorParciales +1, contadorAlumnos +1);
                scanf("%f", &nota);
                
            } while(nota < 1 || nota > 10);
                sumNotas += nota;
                contadorParciales ++;
        }

        promedio = sumNotas / cantidadParciales;
        printf("El promedio del alumno %d es: %.2f\n", contadorAlumnos +1, promedio);
        contadorAlumnos ++;
        promedioGeneral += promedio;

    }

    
    promedioGeneral = promedioGeneral / cantidadAlumnos;
    printf("El promedio general es: %.2f", promedioGeneral);
    

    return 0;
}
