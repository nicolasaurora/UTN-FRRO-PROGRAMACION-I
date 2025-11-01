#include <stdio.h>


int validacionPrecio(float *precio);
int cargarPrecios(float precios[], int tam);
void mostrarPrecioMasCaro(float precios[], int tam);


int main() {
   
    int tam = 50;
    float precios[tam];
    int cantPrecios;
   
   
    cantPrecios = cargarPrecios(precios, tam);
    mostrarPrecioMasCaro(precios, cantPrecios);

    return 0;
}

int cargarPrecios(float precios[], int tam) {
    int cantPrecios = 0;
   
    for (int i = 0; i < tam; i ++) {
        printf("\nIngrese el precio del producto %d: \n", i + 1);
        scanf("%f", &precios[i]);
       
        if (validacionPrecio(&precios[i]) == 1) {
            cantPrecios++;
        }
       
        if (validacionPrecio(&precios[i]) == 0 || cantPrecios == tam){
            printf("\nFinalizo el ingreso de precios.\n");
            return cantPrecios;
        }
    }
   
    return cantPrecios;
}


int validacionPrecio(float *precio) {
    if (*precio > 0 ) {
        return 1;
    }
   
    if (*precio <= 0) {
        return 0;
    }
}

void mostrarPrecioMasCaro(float precios[], int tam) {
    float precioMasCaro = precios[0];
    for (int i = 0 ; i < tam; i ++) {
        if (precios[i] > precioMasCaro) {
            precioMasCaro = precios[i];
        }
    }
   
    printf("\nEl precio mas caro cargado fue $%.2f\n", precioMasCaro);
}