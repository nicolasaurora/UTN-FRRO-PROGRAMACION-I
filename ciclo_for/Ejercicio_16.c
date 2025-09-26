#include <stdio.h>
#include <stdlib.h>


int main() {
    
    int i = 0;
    int j = 0;
    int cantidadDeEmpleados, turnoEmpleado;
    float cantidadDeHorasEmpleado;
    float cantidadDeHorasDepartamento = 0;
    float cantidadHorasTurnoMañana = 0; 
    float cantidadHorasTurnoTarde = 0;
    
    float cantidadDeHoras;
    
    for (i = 0; i < 5; i++) {
        
        float cantidadDeHorasDepartamento = 0;
        
        printf ("\nIngrese cantidad de empleados en el departamento %d: \n", i + 1);
        scanf("%d", &cantidadDeEmpleados);
        
        for (j = 0; j < cantidadDeEmpleados; j ++) {
            printf("\nIngrese cantidad de horas trabajadas por el empleado %d: \n", j + 1);
            scanf("%f", &cantidadDeHorasEmpleado);
            cantidadDeHorasDepartamento += cantidadDeHorasEmpleado;
            do {
                printf("\nIngrese turno del empleado %d: \n", j +1);
                printf("1 - Turno mañana.\n");
                printf("2 - Turno tarde.\n");
                scanf("%d", &turnoEmpleado);
                if (turnoEmpleado == 1) {
                    cantidadHorasTurnoMañana += cantidadDeHorasEmpleado;
                } else if (turnoEmpleado == 2) {
                    cantidadHorasTurnoTarde += cantidadDeHorasEmpleado;
                } else { 
                    printf("\nLa opcion ingresada es invalida.\n");
                }
            } while(turnoEmpleado < 1 || turnoEmpleado > 2);
            
        }
        
        printf("\n- Cantidad de horas trabajadas en el departamento %d: %.2f\n", i+1, cantidadDeHorasDepartamento);
        printf("\n==============================================================\n");
    }
    
    printf("\n- Cantidad de horas trabajadas turno mañana: %.2f\n", cantidadHorasTurnoMañana);
    printf("\n- Cantidad de horas trabajadas turno tarde: %.2f\n", cantidadHorasTurnoTarde);

    return 0;
}
