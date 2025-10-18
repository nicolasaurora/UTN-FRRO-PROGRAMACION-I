#include <stdio.h>
#include <string.h>

#define MAX_LEN 20

int main() {

    char alumnos[30][MAX_LEN];
    char nombreIngresado[20];
    char apellidoIngresado[20];
    float notas[30];
    char aprobados[30][MAX_LEN];
    int cantidadAprobados = 0;
    char desaprobados[160][MAX_LEN];
    int cantidadDesaprobados = 0;
    
    
    for (int i = 0; i < 30; i++) {
        printf("\nIngrese nombre de la persona %d: \n", i + 1);
        scanf("%s", nombreIngresado);
        
        printf ("\nIngrese apellido de la persona %d: \n", i + 1);
        scanf("%s", apellidoIngresado);
        
        
        strcpy(alumnos[i], nombreIngresado);
        strcat(alumnos[i], " ");
        strcat(alumnos[i], apellidoIngresado);
        
        
        printf("\nIngrese nota del alumno %d: \n", i + 1);
        scanf("%f", &notas[i]);
        
    }
    
    for (int i = 0; i < 30; i++) {
      if (notas[i] >= 6) {
            strcpy(aprobados[cantidadAprobados], alumnos[i]);
            cantidadAprobados ++;
        } else {
            strcpy(desaprobados[cantidadDesaprobados], alumnos[i]);
            cantidadDesaprobados ++;
        }
    }
    
    
    printf("\nAlumnos aprobados: \n");
    for (int i = 0; i < cantidadAprobados; i++) {
        printf("- %s\n", aprobados[i]);
    }
    
    printf("\nAlumnos desaprobados: \n");
    for (int i = 0; i < cantidadDesaprobados; i++) {
        printf("- %s\n", desaprobados[i]);
    }

    return 0;
}
