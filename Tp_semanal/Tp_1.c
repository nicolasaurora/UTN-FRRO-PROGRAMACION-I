#include <stdio.h>
#include <stdlib.h>


int main() {
   
    int numeroLegajo, turno, modalidad;
    float montoTotal, recargo;
    float arancelBase = 25000;
    int error = 0;
   
    printf("\nIngrese su numero de legajo: \n");
    scanf("%d", &numeroLegajo);
   
    if (numeroLegajo >= 1000 && numeroLegajo <= 9999) {

        printf("\nSeleccione turno que desea cursar: \n");
        printf("\n1 - Mañana\n");
        printf("\n2 - Tarde\n");
        printf("\n3 - Noche\n");
        scanf("%d", &turno);
       
        switch (turno) {

            case 1:
            printf("\nSeleccione modalidad: \n");
            printf("\n1 - Presencial\n");
            printf("\n2 - Virtual\n");
            scanf("%d", &modalidad);

            switch (modalidad) {

                case 1:
                montoTotal = arancelBase + arancelBase * 0.10;
                break;
               
                case 2:
                montoTotal = arancelBase + arancelBase * 0.05;
                break;
               
                default:
                printf("Opcion invalida.");
                error = 1;
                break;
            }
            break;
           
            case 2:
            printf("\nSeleccione modalidad: \n");
            printf("\n1- Presencial\n");
            printf("\n2 - Virtual\n");
            scanf("%d", &modalidad);

            switch (modalidad) {

                case 1:
                montoTotal = arancelBase + arancelBase * 0.10;
                break;
               
                case 2:
                montoTotal = arancelBase + arancelBase * 0.05;
                break;
               
                default:
                printf("\nOpcion invalida.\n");
                error = 1;
                break;
               
            }
            break;
           
            case 3:
            modalidad = 1;
            montoTotal = arancelBase + arancelBase * 0.02;
            break;
           
            default:
            printf("\nLa opcion ingresada es invalida.\n");
            error = 1;
            break;
           
        }
       
        if (error == 0) {
           
            printf("\n--- RESUMEN DE INSCRIPCION ---\n");
            printf("\nLegajo: %d\n", numeroLegajo);
           
            switch (turno) {

                case 1:
                printf("\nTurno: Mañana.\n");
                break;
               
                case 2:
                printf("\nTurno: Tarde.\n");
                break;
               
                case 3:
                printf("\nTurno: Noche.\n");
                break;
            }
           
            switch (modalidad) {

                case 1:
                printf("\nModalidad: Presencial.\n");
                break;
               
                case 2:
                printf("\nModalidad: Virtual.\n");
                break;
            }
           
            printf("\nMonto total: %.2f\n", montoTotal);
        }
       
    } else {
        printf ("\nEl numero ingresado es invalido.\n");
    }
   
   
    return 0;
   
}