#include <stdio.h>
#include <stdlib.h>


int validarPrecio(float precio);
int cargarPrecios(float precios[], int cantProductos);
void mostrarPrecioMasAlto(float precios[], int cantProductos);
void mostrarPosicionProductoMasBarato(float precios[], int cantProductos);
float promedioDePrecios(float precios[], int cantProductos);
void cantProductosPorDebajoDePromedio(float precios[], int cantProductos, float promedio);

int main() {
   
    int cantProductos = 50;
    float precios[cantProductos];
    float promedio;
   
    cantProductos = cargarPrecios(precios,cantProductos);
   
    mostrarPrecioMasAlto(precios, cantProductos);
   
    mostrarPosicionProductoMasBarato(precios, cantProductos);
   
    promedio = promedioDePrecios(precios,cantProductos);
    printf("\nEl promedio de precios de los productos es %.2f\n", promedio);
   
    cantProductosPorDebajoDePromedio(precios,cantProductos, promedio);
   

    return 0;
}


int validarPrecio(float precio) {
   
    if(precio > 0) {
        return 1;
    } else {
        return 0;
    }
}

int cargarPrecios(float precios[], int cantProductos) {
   
    int contadorProductos = 0;
   
    for (int i = 0; i < cantProductos; i ++) {

        printf("\nIngrese precio producto %d: \n", i + 1);
        scanf("%f", &precios[i]);
        if (validarPrecio(precios[i]) == 1) {
            contadorProductos ++;
        }
       
        if (validarPrecio(precios[i]) == 0 || contadorProductos == cantProductos) {
            return contadorProductos;
        }
    }
   
    return contadorProductos;
}

void mostrarPrecioMasAlto(float precios[], int cantProductos) {

    float precioMasAlto = 0;
   
    for (int i = 0; i < cantProductos; i ++) {
        if (precios[i] > precioMasAlto) {
            precioMasAlto = precios[i];
        }
    }
   
    printf("\nEl precio mas alto fue: %.2f\n", precioMasAlto);
}

void mostrarPosicionProductoMasBarato(float precios[], int cantProductos) {

    int indiceProductoMasBarato = 0;
    float precioMasBajo = 999999999999;
   
    for(int i = 0; i < cantProductos; i ++) {
        if(precios[i] < precioMasBajo) {
            precioMasBajo = precios [i];
            indiceProductoMasBarato = i;
        }
    }
   
    printf("\nEl producto mas barato es el numero %d con un total de: %.2f\n", indiceProductoMasBarato + 1 ,precioMasBajo);
}

float promedioDePrecios(float precios[], int cantProductos) {

    float sumaPrecios = 0;
    float promedio;
   
    for (int i = 0; i < cantProductos; i ++) {
        sumaPrecios += precios[i];
    }
   
    promedio = sumaPrecios / cantProductos;
   
    return promedio;
}

void cantProductosPorDebajoDePromedio(float precios[], int cantProductos, float promedio) {
    
    int productosPorDebajoDePromedio = 0;
   
    for (int i = 0; i < cantProductos; i ++) {
        if (precios[i] < promedio) {
            productosPorDebajoDePromedio ++;
        }
    }
   
    printf("\nLa cantidad de productos que tienen precio por debajo del promedio son: %d\n", productosPorDebajoDePromedio);
}