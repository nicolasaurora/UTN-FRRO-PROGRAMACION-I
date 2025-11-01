#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int validarPrecio(float *precio);
void cargarNombres(char productos[][15], int cantProductos);
void cargarPrecios(float precios[], int cantProductos);
void mostrarMenu();
void mostrarTodosLosProductos(float precios[], char productos[][15], int cantProductos);
void mostrarElProductoMasCaro(float precios[], char productos[][15], int cantProductos);
void mostrarPrecioPromedio(float precios[], int cantProductos);
void buscarProducto(char productos[][15],float precios[], int cantProductos);

int main() {
   
    int cantProductos = 10;  
    char productos[cantProductos][15];
    float precios[cantProductos];
    int opcion;
   
   
    cargarNombres(productos, cantProductos);
    cargarPrecios(precios, cantProductos);
   
    do {
        printf("\nElija una opcion: \n");
        mostrarMenu();
        scanf("%d", &opcion);
       
        switch (opcion) {
           
            case 1:
            mostrarTodosLosProductos(precios, productos, cantProductos);
            break;
           
            case 2:
            mostrarElProductoMasCaro(precios, productos, cantProductos);
            break;
           
            case 3:
            mostrarPrecioPromedio(precios, cantProductos);
            break;
           
            case 4:
            buscarProducto(productos, precios, cantProductos);
            break;
           
            case 5:
            printf("\nSaliendo...\n");
            break;
           
            default:
            printf("\nIngrese una opcion correcta.\n");
            break;
        }
       
    } while (opcion != 5);
   
   
   
   
    return 0;
}

int validarPrecio(float *precio) {
    if (*precio > 0) {
        return 1;
    } else {
        return 0;
    }
}

void cargarNombres(char productos[][15], int cantProductos) {
    for (int i = 0; i < cantProductos; i ++) {
        printf("\nIngrese nombre del producto %d: \n", i + 1);
        scanf(" %s", productos[i]);
    }
}

void cargarPrecios(float precios[], int cantProductos) {
    for (int i = 0; i < cantProductos; i ++) {
        do {
            printf("\nIngrese precio del producto %d: \n", i + 1);
            scanf("%f", &precios[i]);
            if (validarPrecio(&precios[i]) == 0) {
                printf("\nEl valor debe ser mayor que 0.\n");
            }
        } while (validarPrecio(&precios[i]) == 0);
       
    }
}

void mostrarMenu() {
   
    printf("\n1. Mostrar todos los productos con sus precios.\n");
    printf("\n2. Mostrar el producto más caro.\n");
    printf("\n3. Calcular y mostrar el precio promedio.\n");
    printf("\n4. Buscar un producto por nombre y mostrar su precio (o mensaje si no existe).\n");
    printf("\n5. Salir.\n");
}

void mostrarTodosLosProductos(float precios[], char productos[][15], int cantProductos) {
    for(int i = 0; i < cantProductos; i ++) {
        printf("\n%s: $%.2f\n", productos[i], precios[i]);
    }
}

void mostrarElProductoMasCaro(float precios[], char productos[][15], int cantProductos) {
    float precioProductoMasCaro = precios[0];
    int indiceProductoMasCaro = 0;
   
    for (int i = 0; i < cantProductos; i ++) {
        if (precios[i] > precioProductoMasCaro) {
            precioProductoMasCaro = precios[i];
            indiceProductoMasCaro = i;
        }
    }
   
    printf("\nEl producto mas caro es %s con un valor de $%.2f\n", productos[indiceProductoMasCaro], precioProductoMasCaro);
}

void mostrarPrecioPromedio(float precios[], int cantProductos) {
    float promedio;
    float sumaTotal = 0;
   
    for (int i = 0; i < cantProductos; i ++) {
        sumaTotal += precios[i];
    }
   
    promedio = sumaTotal / cantProductos;
   
    printf("\nEl precio promedio es: $%.2f\n", promedio);
}

void buscarProducto(char productos[][15],float precios[], int cantProductos) {
    char busqueda[15];
    int encontrado = 0;
   
    printf("\nIngrese nombre del producto: \n");
    scanf(" %s", busqueda);
   
    for (int i = 0; i < cantProductos; i ++) {
        if (strcmp(productos[i], busqueda) == 0) {
            printf("\n%s: $%.2f\n", productos[i], precios[i]);
            encontrado = 1;
            break;
        }
    }
   
    if (!encontrado) {
        printf("\nEl producto no existe.\n");
    }
}