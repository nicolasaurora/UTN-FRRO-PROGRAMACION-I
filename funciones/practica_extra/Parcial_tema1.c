#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mostrarMenu();
void cargarNombres(char socios[5][15], int cantSocios);
void cargarAsistencia(int asistenciaSocios[5][6], int cantSocios, int cantDias);
void asistenciaPorSocio(char socios[5][15], int asistenciaSocios[5][6], int cantSocios, int cantDias);
void socioQueMasAsistio(char socios[5][15], int asistenciSocios[5][6], int cantSocios, int cantDias);
void porcentajePromedio(int asistenciaSocios[5][6], int cantSocios, int cantDias);
int buscarSocio(char socios[5][15], int cantSocios, char nombre[]);
void mostrarAsistenciaDiaria(int asistenciaSocios[5][6], int cantDias, int indiceSocioIngresado);


int main() {

    int cantSocios = 5;
    int cantDias = 6;

    char socios[cantSocios][15];
    int asistenciaSocios[cantSocios][cantDias];
    char nombreIngresado[15];
    int indiceSocioIngresado;
    int opcion;

    cargarNombres(socios, cantSocios);
    cargarAsistencia(asistenciaSocios, cantSocios, cantDias);
    
   
    do {
        mostrarMenu();
        scanf("%d", &opcion);
       
        switch(opcion) {

            case 1:
            asistenciaPorSocio(socios, asistenciaSocios, cantSocios, cantDias);
            break;

            case 2:
            socioQueMasAsistio(socios, asistenciaSocios, cantSocios, cantDias);
            break;

            case 3:
            porcentajePromedio(asistenciaSocios, cantSocios, cantDias);
            break;

            case 4:
            printf("\nIngrese nombre del socio: \n");
            scanf("%s", nombreIngresado);
            indiceSocioIngresado = buscarSocio(socios, cantSocios, nombreIngresado);
            if (indiceSocioIngresado == -1) {
                printf("\nEl socio ingresado no existe.\n");
            } else {
                mostrarAsistenciaDiaria(asistenciaSocios, cantDias, indiceSocioIngresado);
            }
            break;

            case 5:
            printf("\nSaliendo...\n");
            break;

            default:
            printf("\nLa opcion ingresada no es valida.\n");
           
        }
       
   
    } while (opcion != 5);

    return 0;
}


void mostrarMenu() {

    printf("\n1. Mostrar cantidad total de asistencia por socio.\n");
    printf("\n2. Mostrar nombre del socio que mas asistio en total.\n");
    printf("\n3. Mostrar el porcentaje de asistencia promedio de todo el gimnasio.\n");
    printf("\n4. Buscar un socio por nombre y mostrar su asistencia diaria (1 o 0).\n");
    printf("\n5. Salir.");

}

void cargarNombres(char socios[5][15], int cantSocios) {
    for (int i = 0; i < cantSocios; i ++) {
        printf("\nIngrese nombre del socio %d: \n", i + 1);
        scanf("%s", socios[i]);
    }
}


void cargarAsistencia(int asistenciaSocios[5][6], int cantSocios, int cantDias) {
    for (int i = 0; i < cantSocios; i ++) {
        for (int j = 0; j < cantDias; j ++) {
            do {
                printf("\nIngrese 1(asistencia) o 0(ausencia) para el socio %d dia %d: \n", i + 1, j + 1);
                scanf("%d", &asistenciaSocios[i][j]);
                if (asistenciaSocios[i][j] < 0 || asistenciaSocios[i][j] > 1) {
                    printf("\nEl valor ingresado debe ser 1 o 0\n");
                }
            } while (asistenciaSocios[i][j] < 0 || asistenciaSocios[i][j] > 1);
        }
    }
}


void asistenciaPorSocio(char socios[5][15], int asistenciaSocios[5][6], int cantSocios, int cantDias) {
    int totalAsistencia = 0;

    for (int i = 0; i < cantSocios; i ++) {
        totalAsistencia = 0;
        for (int j = 0; j < cantDias; j ++) {
            if (asistenciaSocios[i][j] == 1) {
                totalAsistencia ++;
            }
        }
        printf("\nAsistencias %s = %d.\n", socios[i], totalAsistencia);
    }
}


void socioQueMasAsistio(char socios[5][15], int asistenciSocios[5][6], int cantSocios, int cantDias) {
    int indiceSocioMasAsistio = 0;
    int totalAsistencia = 0;
    int mayorAsistencia = 0;

    for (int i = 0; i < cantSocios; i ++) {
        totalAsistencia = 0;
        for (int j = 0; j < cantDias; j ++) {
            if (asistenciSocios[i][j] == 1) {
                totalAsistencia ++;
            }
        }
        if (totalAsistencia > mayorAsistencia) {
            mayorAsistencia = totalAsistencia;
            indiceSocioMasAsistio = i;
        }
    }

    printf("\nSocio %s obtuvo mayor asistencia con un total de: %d.\n", socios[indiceSocioMasAsistio], mayorAsistencia);
}


void porcentajePromedio(int asistenciaSocios[5][6], int cantSocios, int cantDias) {
    int totalAsistencias = 0;
    float porcentajeAsistencia;

    for (int i = 0; i < cantSocios; i ++) {
        for(int j = 0; j < cantDias; j ++) {
            if (asistenciaSocios[i][j] == 1) {
                totalAsistencias ++;
            }
        }
    }

    porcentajeAsistencia = (totalAsistencias * 100) / (cantSocios * cantDias);

    printf("\nEl porcentaje de asistencia es %%%.2f.\n", porcentajeAsistencia);
}


int buscarSocio(char socios[5][15], int cantSocios, char nombre[]) {
    
    for (int i = 0; i < cantSocios; i ++) {
        if (strcmp(socios[i], nombre) == 0) {
            return i;
        }
    }

    return -1;
}


void mostrarAsistenciaDiaria(int asistenciaSocios[5][6], int cantDias, int indiceSocioIngresado) {
    
    for (int i = 0; i < cantDias; i ++) {
        printf("\nDia %d = %d\n", i + 1, asistenciaSocios[indiceSocioIngresado][i]);
    }
}
