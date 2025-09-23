#include <stdio.h>
#include <stdlib.h>

int main () {

    float salarioBase,montoBonificacion;
    int puntajeDesempenio;
    int desempenio;
    int desempenioExcelente = 0;
    int desempenioBueno = 0;
    int desempenioRegular = 0;
    int desempenioDeficiente = 0;

    

    for (int i = 0; i < 3; i ++) {
        printf("\nIngrese el salario base del empleado %d: \n", i + 1);
        scanf("%f", &salarioBase);

        do {
            printf("\nIngrese el puntaje de desempenio(1 a 10) del empleado %d: \n", i + 1);
            scanf("%d", &puntajeDesempenio);

        } while (puntajeDesempenio < 1 || puntajeDesempenio > 10);
        
        if (puntajeDesempenio >= 9 && puntajeDesempenio <= 10) {
            montoBonificacion = (salarioBase * 20) / 100;
            desempenioExcelente ++;
            desempenio = 1;
            
        } else if (puntajeDesempenio >= 7 && puntajeDesempenio <= 8) {
            montoBonificacion = (salarioBase * 10) / 100;
            desempenioBueno ++;
            desempenio = 2;
            
        } else if (puntajeDesempenio >= 5 && puntajeDesempenio <=6) {
            montoBonificacion = (salarioBase * 5) / 100;
            desempenioRegular ++;
            desempenio = 3;
            
        } else {
            montoBonificacion = 0;
            desempenioDeficiente ++;
            desempenio = 4;
        }

        printf("\nResultados empleado %d: \n", i + 1);
        printf("\n- Salario base: $%.2f\n", salarioBase);

        switch (desempenio) {
            case 1:
            printf("\n- Categoria de desempenio: Excelente.\n");
            break;

            case 2:
            printf("\n- Categoria de desempenio: Bueno.\n");
            break;

            case 3:
            printf("\n- Categoria de desempenio: Regular.\n");
            break;

            default:
            printf("\n- Categoria de desempenio: Deficiente.\n");
            break;
        }

        printf("\n- Monto de la bonificacion: $%.2f\n", montoBonificacion);
        printf("\n======================================\n");
    }

    printf("\n- Numero de empleados con desempenio Excelente: %d.\n", desempenioExcelente);
    printf("\n- Numero de empleados con desempenio Bueno: %d.\n", desempenioBueno);
    printf("\n- Numero de empleados con desempenio Regular: %d.\n", desempenioRegular);
    printf("\n- Numero de empleados con desempenio Deficiente: %d.\n", desempenioDeficiente);

    return 0;

}