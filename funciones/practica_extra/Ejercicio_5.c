#include <stdio.h>
#include <stdlib.h>

int cargaPuntajes(int puntajes[], int cantPuntajes);
void mostrarPuntajeMasAlto(int puntajes[], int cantPuntajes);
void mostrarPromedioGeneral(int puntajes[], int cantPuntajes);
int cantAprobados(int puntajes[], int cantPuntajes);
void mostrarPorcentajeDesaprobados(int puntajes[], int cantPuntajes, int *aprobados);

int main() {
   
    int cantPuntajes;
    int puntajes[cantPuntajes];
    int cantidadAprobados;
   
    cantPuntajes = cargaPuntajes(puntajes, cantPuntajes);
    mostrarPuntajeMasAlto(puntajes, cantPuntajes);
    mostrarPromedioGeneral(puntajes, cantPuntajes);
    cantidadAprobados = cantAprobados(puntajes, cantPuntajes);
    mostrarPorcentajeDesaprobados(puntajes,cantPuntajes, &cantidadAprobados);
   
    return 0;
}

int cargaPuntajes(int puntajes[], int cantPuntajes) {
    int totalPuntajes = 0;
   
    for (int i = 0; i < cantPuntajes; i ++) {
       
        printf("\nIngrese puntaje %d: \n", i + 1);
        scanf("%d", &puntajes[i]);
        if (puntajes[i] < 0 || puntajes[i] > 100 || totalPuntajes == 9) {
            return totalPuntajes;
        }
        totalPuntajes ++;
    }
   
    return totalPuntajes;
}

void mostrarPuntajeMasAlto(int puntajes[], int cantPuntajes) {
    int puntajeMasAlto = puntajes[0];
   
    for ( int i = 0; i < cantPuntajes; i ++) {
        if(puntajes[i] > puntajeMasAlto) {
            puntajeMasAlto = puntajes[i];
        }
    }
   
    printf("\nEl puntaje mas alto es: %d\n", puntajeMasAlto);
}

void mostrarPromedioGeneral(int puntajes[], int cantPuntajes) {
    int sumaPuntajes = 0;
    int promedioPuntajes;
   
    for ( int i = 0; i < cantPuntajes; i ++) {
        sumaPuntajes += puntajes[i];
    }
    promedioPuntajes = sumaPuntajes / cantPuntajes;
   
    printf("\nEl promedio es: %d\n", promedioPuntajes);
}

int cantAprobados(int puntajes[], int cantPuntajes) {
    int aprobados = 0;
   
    for ( int i = 0; i < cantPuntajes; i ++) {
        if(puntajes[i] >= 60) {
            aprobados++;
        }
    }
   
    return aprobados;
}

void mostrarPorcentajeDesaprobados(int puntajes[], int cantPuntajes, int *aprobados) {
    float porcentajeDesaprobados;
    float porcentajeAprobados;
   
    porcentajeAprobados = (*aprobados * 100) / cantPuntajes;
   
    porcentajeDesaprobados = 100 - porcentajeAprobados;
   
    printf("\nEl porcentaje de desaprobados es %.2f\n", porcentajeDesaprobados);
   
}