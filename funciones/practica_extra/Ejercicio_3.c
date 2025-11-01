#include <stdio.h>
#include <stdlib.h>

#define CANT_VENTAS 5

void cargarVentas(float ven[], int tam);
float totalVendido(float ven[], int tam);
void diaDeMayorVenta(float ven[], int tam, float *montoMayor, int *diaMayorVenta);
float promedioDeVentas(float ven[], int tam, float *promedio);
int diasMasQuePromedio(float ven[], int tam, float promedio);


int main() {
   
    float ventas[CANT_VENTAS];
    float totalVentas = 0;
    int diaMasVenta;
    float montoMaximo;
    float promedioVentas;
    int cantDiasPorEncimaPromedio = 0;
   
    cargarVentas(ventas, CANT_VENTAS);
   
    totalVentas = totalVendido(ventas, CANT_VENTAS);
   
    diaDeMayorVenta(ventas, CANT_VENTAS, &montoMaximo, &diaMasVenta);
   
    promedioVentas = promedioDeVentas(ventas, CANT_VENTAS, &promedioVentas);
   
    cantDiasPorEncimaPromedio = diasMasQuePromedio(ventas, CANT_VENTAS, promedioVentas);
   
    printf("\nEl valor total de ventas es de %.2f\n", totalVentas);
    printf("\nEl dia de mayor venta es el dia %d de la semana, con $%.2f \n", diaMasVenta + 1, montoMaximo);
    printf("\nEl promedio de ventas es de $%.2f diarios\n", promedioVentas);
    printf("\nLa cantidad de dias que se vendieron por encima del promedio son: %d \n", cantDiasPorEncimaPromedio);

    return 0;
}

void cargarVentas(float ven[], int tam) {
    for(int i = 0; i < tam; i ++) {
        do {
            printf("\nIngrese total ventas del dia %d: \n", i + 1);
            scanf("%f", &ven[i]);  
            if (ven[i] < 0) {
                printf("\nLa venta debe ser mayor o igual que 0\n");
            }
        } while (ven[i] < 0);
    }
}

float totalVendido(float ven[], int tam) {
    float totalVent;
    for (int i = 0; i < tam; i ++) {
        totalVent += ven[i];
    }
   
    return totalVent;
}

void diaDeMayorVenta(float ven[], int tam, float *montoMayor, int *diaMayorVenta) {
    for (int i = 0; i < tam; i++) {
        if ( i == 0) {
            *montoMayor = ven[i];
            *diaMayorVenta = i;
        } else if (ven[i] > *montoMayor) {
            *montoMayor = ven[i];
            *diaMayorVenta = i;
        }
    }
   
}

float promedioDeVentas(float ven[], int tam, float *promedio) {
    for (int i = 0; i < tam; i ++) {
        *promedio += ven[i];
    }
   
    *promedio = *promedio / tam;
   
    return *promedio;
}

int diasMasQuePromedio(float ven[], int tam, float promedio) {
    int contador = 0;
   
    for (int i = 0; i < tam; i ++) {
        if( ven [i] > promedio) {
            contador ++;
        }
    }
   
    return contador;
}