#include <stdio.h>
#include <stdlib.h>


int main() {
   
    int opcion;
    float calificacion, calificacionMayor, calificacionMenor;
    float promedio = 0;
    int cantidadCalificaciones = 0;
   
    do {
       
        printf ("\n1- Ingresar calificaciones de un estudiante. \n");
        printf ("\n2- Mostrar el promedio de calificaciones ingresadas. \n");
        printf ("\n3- Mostrar la calificación más alta. \n");
        printf ("\n4- Mostrar la calificación más baja. \n");
        printf ("\n5- Salir. \n");
        scanf("%d", &opcion);
       
        switch (opcion) {
           
            case 1:
            do {
                printf("\nIngrese la calificacion: \n");
                scanf("%f", &calificacion);
            } while (calificacion < 0 || calificacion > 10);
            promedio += calificacion;
            cantidadCalificaciones ++;
           
            if (cantidadCalificaciones == 1) {
                calificacionMayor = calificacion;
            } else if (calificacion > calificacionMayor) {
                calificacionMayor = calificacion;
            }
           
            if (cantidadCalificaciones == 1) {
                calificacionMenor = calificacion;
            } else if (calificacion < calificacionMenor) {
                calificacionMenor = calificacion;
            }
            break;
           
            case 2:
            if (!calificacion) {
                printf("\nNo se registran datos ingresados!!\n");
            } else {
                printf("\nEl promedio es: %.2f\n", promedio / cantidadCalificaciones);
            }
            break;
           
            case 3:
            if (!calificacion) {
                printf("\nNo se registran datos ingresados!!\n");
            } else {
                printf("\nLa calificacion mayor es: %.2f\n", calificacionMayor);
            }
            break;
           
            case 4:
            if (!calificacion) {
                printf("\nNo se registran datos ingresados!!\n");
            } else {
                printf("\nLa calificacion menor es: %.2f\n", calificacionMenor);
            }
            break;
           
            case 5:
            printf("\nSaliendo...\n");
            break;
           
            default:
            printf("\nLa opcion ingresada es invalida.\n");
            break;
           
        }
       
       
    } while (opcion > 0 && opcion < 5);


    return 0;

}