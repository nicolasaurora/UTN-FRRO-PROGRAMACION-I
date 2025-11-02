#include <stdio.h>
#include <stdlib.h>

void cargarVentas(float ventas[], int cantVentas);
void totalVendido(float ventas[], int cantVentas);
void diaDeMayorVenta(float ventas[], int cantVentas);
float promedioDeVentas(float ventas[], int cantVentas);
int diasMasQuePromedio(float ventas[], int cantVentas, float promedio);


int main() {
   
    int cantVentas = 5;
    float ventas[cantVentas];
    float promedioVentas;
    int cantDiasPorEncimaPromedio = 0;
   
    cargarVentas(ventas, cantVentas);
    totalVendido(ventas, cantVentas);
    diaDeMayorVenta(ventas, cantVentas);
    promedioVentas = promedioDeVentas(ventas, cantVentas);
    printf("\nEl promedio de ventas es de $%.2f diarios\n", promedioVentas);
    cantDiasPorEncimaPromedio = diasMasQuePromedio(ventas, cantVentas, promedioVentas);
    printf("\nLa cantidad de dias que se vendieron por encima del promedio son: %d \n", cantDiasPorEncimaPromedio);

    return 0;
}

void cargarVentas(float ventas[], int cantVentas) {

    for (int i = 0; i < cantVentas; i ++) {
        
        do {
            printf("\nIngrese total ventas del dia %d: \n", i + 1);
            scanf("%f", &ventas[i]);  
            if (ventas[i] < 0) {
                printf("\nLa venta debe ser mayor o igual que 0\n");
            }
        } while (ventas[i] < 0);
    }
}

void totalVendido(float ventas[], int cantVentas) {

    float totalVentas;

    for (int i = 0; i < cantVentas; i ++) {
        totalVentas += ventas[i];
    }
   
    printf("\nEl valor total de ventas es de %.2f\n", totalVentas);
}

void diaDeMayorVenta (float ventas[], int cantVentas) {

    float montoMayorVenta = 0;
    int indiceDiaMayorVenta = 0;

    for (int i = 0; i < cantVentas; i++) {

        if(ventas[i] > montoMayorVenta) {
            montoMayorVenta = ventas[i];
            indiceDiaMayorVenta = i;
        }
    }

    printf("\nEl dia de mayor venta fue el dia %d con un total de $%.2f\n", indiceDiaMayorVenta + 1, montoMayorVenta);
   
}

float promedioDeVentas(float ventas[], int cantVentas) {

    float promedio = 0;

    for (int i = 0; i < cantVentas; i ++) {
        promedio += ventas[i];
    }
   
    promedio = promedio / cantVentas;
   
    return promedio;
}

int diasMasQuePromedio(float ventas[], int cantVentas, float promedio) {

    int contador = 0;
   
    for (int i = 0; i < cantVentas; i ++) {

        if( ventas [i] > promedio) {
            contador ++;
        }
    }
   
    return contador;
}