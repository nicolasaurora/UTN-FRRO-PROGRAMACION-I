#include <stdio.h>
#include <stdlib.h>


int main() {
   
    int numeroLegajo, turno, modalidad;
    float montoTotal, recargo;
    float arancelBase = 25000;
    char registroMultiple;
    int cantidadInscripciones = 0;
    int cantidadTurnoMañana = 0;
    int cantidadTurnoTarde = 0;
    int cantidadTurnoNoche = 0;
    int cantidadVirtual = 0;
    int cantidadPresencial = 0;
    float recaudacionTotal = 0;
   
    do {
       
        do {
            printf("\nIngrese su numero de legajo: \n");
            scanf("%d", &numeroLegajo);
           
        } while (numeroLegajo < 1000 || numeroLegajo > 9999);
       
        do {
            printf("\nSeleccione turno que desea cursar: \n");
            printf("\n1 - Mañana\n");
            printf("\n2 - Tarde\n");
            printf("\n3 - Noche\n");
            scanf("%d", &turno);
           
        } while (turno < 1 || turno > 3);  
       
            switch (turno) {

                case 1:
                do {
                    printf("\nSeleccione modalidad: \n");
                    printf("\n1 - Presencial\n");
                    printf("\n2 - Virtual\n");
                    scanf("%d", &modalidad);
                   
                } while (modalidad < 1 || modalidad > 2);
               
                switch (modalidad) {

                    case 1:
                    montoTotal = arancelBase + arancelBase * 0.10;
                    cantidadTurnoMañana ++;
                    cantidadPresencial ++;
                    break;
                   
                    case 2:
                    montoTotal = arancelBase + arancelBase * 0.05;
                    cantidadTurnoMañana ++;
                    cantidadVirtual ++;
                    break;
                   
                }
                break;
               
                case 2:
                do {

                    printf("\nSeleccione modalidad: \n");
                    printf("\n1- Presencial\n");
                    printf("\n2 - Virtual\n");
                    scanf("%d", &modalidad);
                   
                } while (modalidad < 1 || modalidad > 2);
               
                switch (modalidad) {

                    case 1:
                    montoTotal = arancelBase + arancelBase * 0.10;
                    cantidadTurnoTarde ++;
                    cantidadPresencial ++;
                    break;
                   
                    case 2:
                    montoTotal = arancelBase + arancelBase * 0.05;
                    cantidadTurnoTarde ++;
                    cantidadVirtual ++;
                    break;
                   
                }
                break;
               
                case 3:
                modalidad = 1;
                montoTotal = arancelBase + arancelBase * 0.10;
                montoTotal = montoTotal - montoTotal * 0.08;
                cantidadTurnoNoche ++;
                cantidadPresencial ++;
                break;
            }
       
        cantidadInscripciones ++;
        recaudacionTotal += montoTotal;

        do {
            printf("\nDesea registrar otro usuario? (s/n)\n");
            scanf(" %c", &registroMultiple);
        } while (registroMultiple != 's' && registroMultiple != 'S' && registroMultiple != 'n' && registroMultiple != 'N');
       
       
    } while (registroMultiple == 's' || registroMultiple == 'S');
   
    printf("\n---- Resumen registros ----\n");
    printf("\n- Cantidad total de inscripciones: %d\n", cantidadInscripciones);
    printf("\n- Cantidad de alumnos turno mañana: %d\n", cantidadTurnoMañana);
    printf("\n- Cantidad de alumnos turno tarde: %d\n", cantidadTurnoTarde);
    printf("\n- Cantidad de alumnos turno noche: %d\n", cantidadTurnoNoche);
    printf("\n- Cantidad de alumnos modalidad presencial: %d\n", cantidadPresencial);
    printf("\n- Cantidad de alumnos modalidad virtual: %d\n", cantidadVirtual);
    printf("\n- Recaudacion total: $%.2f\n", recaudacionTotal);
   
   
   
    return 0;
   
}