#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void mostrarMenu();
void cargarNombres(char estudiantes[6][10], int cantEstudiantes);
void cargarAsistencia(int asistencias[6][5], int cantEstudiantes, int cantDias);
void mostrarCantidadAsistenciaEstudiantes(char estudiantes[6][10], int asistencias[6][5], int cantEstudiantes, int cantDias);
void mostrarEstudianteMayorAsistencia(char estudiantes[6][10], int asistencias[6][5], int cantEstudiantes, int cantDias);
void mostrarAsistenciaPorDia(int asistencias[6][5], int cantEstudiantes, int cantDias);

int main() {
   
    int cantEstudiantes = 6;
    int cantDias = 5;
    char estudiantes[cantEstudiantes][10];
    int asistencias[cantEstudiantes][cantDias];
    int opcion;
   
    cargarNombres(estudiantes, cantEstudiantes);
    cargarAsistencia(asistencias, cantEstudiantes, cantDias);
   
    do {
        mostrarMenu();
        scanf("%d", &opcion);
       
        switch(opcion) {
           
           
            case 1:
            mostrarCantidadAsistenciaEstudiantes(estudiantes, asistencias, cantEstudiantes, cantDias);
            break;
           
            case 2:
            mostrarEstudianteMayorAsistencia(estudiantes, asistencias, cantEstudiantes, cantDias);
            break;
           
            case 3:
            mostrarAsistenciaPorDia(asistencias, cantEstudiantes, cantDias);
            break;
           
            case 4:
            printf("\nSaliendo...\n");
            break;
           
            default:
            printf("\nOpcion invalida.\n");
            break;
         
        }
       
   
    } while (opcion != 4);

    return 0;
}


void mostrarMenu() {
    printf("\nSeleccione una opcion: \n");
    printf("\n1. Mostrar la cantidad total de asistencias por estudiante\n");
    printf("\n2. Mostrar qué estudiante asistió más veces\n");
    printf("\n3. Mostrar asistencia por día (cuántos estudiantes asistieron cada día)\n");
    printf("\n4. Salir\n");
     
}

void cargarNombres(char estudiantes[6][10], int cantEstudiantes) {
        for ( int i = 0 ; i < cantEstudiantes; i ++) {
            printf("\nIngrese el nombre del estudiante %d: \n", i + 1);
            scanf("%s", estudiantes[i]);
        }
}

void cargarAsistencia(int asistencias[6][5], int cantEstudiantes, int cantDias) {
    for (int i = 0; i < cantEstudiantes; i ++) {
        for (int j = 0; j < cantDias; j ++) {
            do {
                printf("\nIngrese asistencia del estudiante %d el dia %d: \n", i + 1, j + 1);
                printf("\nIngrese 1(Asistio) o 0(Ausente): \n");
                scanf("%d", &asistencias[i][j]);
                if (asistencias[i][j] < 0 || asistencias[i][j] > 1) {
                    printf("\nEl valor ingresado debe ser 1 o 0.\n");
                }
            } while (asistencias[i][j] < 0 || asistencias[i][j] > 1);
           
        }
    }
}

void mostrarCantidadAsistenciaEstudiantes(char estudiantes[6][10], int asistencias[6][5], int cantEstudiantes, int cantDias) {
    int asistenciaEstudiante = 0;
   
    for (int i = 0; i < cantEstudiantes; i ++) {
        asistenciaEstudiante = 0;
        for (int j = 0; j < cantDias; j ++) {
            if (asistencias[i][j] == 1) {
                asistenciaEstudiante ++;
            }
        }
        printf("\n%s, Asistencias = %d.\n", estudiantes[i], asistenciaEstudiante);
    }    
}

void mostrarEstudianteMayorAsistencia(char estudiantes[6][10], int asistencias[6][5], int cantEstudiantes, int cantDias) {
    int asistenciaEstudiante = 0;
    char estudianteConMasAsistencia[10];
    int mayorAsistencia = 0;
   
   
    for (int i = 0; i < cantEstudiantes; i ++) {
        asistenciaEstudiante = 0;
        for (int j = 0; j < cantDias; j ++) {
           
            if (asistencias[i][j] == 1) {
                asistenciaEstudiante ++;
            }
           
        }
       
        if(asistenciaEstudiante > mayorAsistencia) {
                mayorAsistencia = asistenciaEstudiante;
                strcpy(estudianteConMasAsistencia, estudiantes[i]);
            }
       
    }
   
    printf("\nEl estudiante %s obtuvo mas asistencias con un total de %d\n", estudianteConMasAsistencia, mayorAsistencia);
}

void mostrarAsistenciaPorDia(int asistencias[6][5], int cantEstudiantes, int cantDias) {
    int asistenciaPorDia = 0;
   
    for (int i = 0; i < cantDias; i ++) {
        asistenciaPorDia = 0;
        for (int j = 0; j < cantEstudiantes; j ++) {
            if (asistencias[j][i] == 1) {
                asistenciaPorDia ++;
            }
        }
       
        printf("\nDia %d, %d asistencias.\n", i + 1, asistenciaPorDia);
    }    
}