#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cargaNombres(char vendedores[5][15], int cantVendedores);
void cargaVentasVendedores(float ventas[5][6], int cantVendedores, int cantMeses);
int validarVenta(float *venta);
void mostrarMenu();
void mostrarTotalVentasPorVendedor(char vendedores[5][15], float ventas[5][6], int cantVendedores, int cantMeses);
void mostrarVendedorMasVentasFebrero(char vendedores[5][15], float ventas[5][6], int cantVendedores, int cantMeses);
int buscarVendedor(char vendedores [5][15],int cantVendedores, char nombre[]);
void mostrarVentaSemestralVendedor(float ventas[5][6], int indiceVendedor, int cantMeses);

int main() {

    int cantMeses = 6;
    int cantVendedores = 5;
    char vendedores[5][15];
    float ventas[cantVendedores][cantMeses];
    int opcion;
    char nombreIngresado[15];
    int indiceVendedor;

    cargaNombres(vendedores, cantVendedores);
    cargaVentasVendedores(ventas, cantVendedores, cantMeses);

    do {
        printf("\nIngrese una opcion: \n");
        mostrarMenu();
        scanf("%d", &opcion);

        switch (opcion) {

            case 1:
            mostrarTotalVentasPorVendedor(vendedores, ventas, cantVendedores, cantMeses);
            break;

            case 2:
            mostrarVendedorMasVentasFebrero(vendedores, ventas, cantVendedores, cantMeses);
            break;

            case 3:
            printf("Ingrese un nombre: ");
            scanf("%s", nombreIngresado);
            indiceVendedor = buscarVendedor(vendedores, cantVendedores, nombreIngresado);
            if (indiceVendedor == -1) {
                printf ("El vendedor no existe.");
            } else {
                mostrarVentaSemestralVendedor(ventas, indiceVendedor, cantMeses);
            }
            break;
            

            case 4:
            printf("\nSaliendo...\n");
            break;

            case 5:
            printf("\nIngrese una opcion valida.\n");
            break;
        }

    } while (opcion != 4);
    

    
    

    return 0;
}

void cargaNombres(char vendedores[5][15], int cantVendedores) {
    for (int i = 0; i < cantVendedores; i ++) {
        printf("\nIngrese nombre del vendedor %d: \n", i + 1);
        scanf(" %s", vendedores[i]);
    }
}

void cargaVentasVendedores(float ventas[5][6], int cantVendedores, int cantMeses) {
    for ( int i = 0; i < cantVendedores; i ++) {
        for (int j = 0; j < cantMeses; j ++) {
            do {
                printf("\nIngrese venta vendedor %d, mes %d\n", i + 1, j + 1);
                scanf("%f", &ventas[i][j]);
                if (validarVenta(&ventas[i][j]) == 0) {
                    printf("\nLa venta debe ser 0 o mayor.\n");
                }
            } while (validarVenta(&ventas[i][j]) == 0); 
        }
    }
}


void mostrarTotalVentasPorVendedor(char vendedores[5][15], float ventas[5][6], int cantVendedores, int cantMeses) {
    
    for ( int i = 0; i < cantVendedores; i ++) {
        float totalVentas = 0;
        for (int j = 0; j < cantMeses; j ++) {
            totalVentas += ventas[i][j];
        }
        printf("\nVendedor %s, total ventas: %.2f\n", vendedores[i], totalVentas);
    }

}

void mostrarVendedorMasVentasFebrero(char vendedores[5][15], float ventas[5][6], int cantVendedores, int cantMeses) {
    char vendedorMasVentasFebrero[15];
    strcpy(vendedorMasVentasFebrero, vendedores[0]);
    float mayorVentaFebrero = ventas[0][1];

    for (int i = 0; i < cantVendedores; i ++) {
        if (ventas[i][1] > mayorVentaFebrero) {
            mayorVentaFebrero = ventas[i][1];
            strcpy(vendedorMasVentasFebrero, vendedores[i]);
        }
    }

    printf("El vendedor con mayor venta en febrero fue %s con un total de $%.2f en ventas.", vendedorMasVentasFebrero, mayorVentaFebrero);

}


int buscarVendedor(char vendedores [5][15],int cantVendedores, char nombre[]) {
    for (int i = 0; i < cantVendedores; i ++) {
        if (strcmp(vendedores[i], nombre) == 0) {
            return i;
        }
    }
    return -1;
    
}

void mostrarVentaSemestralVendedor(float ventas[5][6], int indiceVendedor, int cantMeses) {
    float totalVentasVendedor = 0;
    for (int i = 0; i < cantMeses; i ++) {
        totalVentasVendedor += ventas[indiceVendedor][i];
    }

    printf("El total de ventas es: $%.2f", totalVentasVendedor);
}


void mostrarMenu() {
    printf("\n1. Mostrar el total de ventas por vendedor.\n");
    printf("\n2. Mostrar que vendedor hizo mas ventas en febrero.\n");
    printf("\n3. Buscar un vendedor por nombre y mostrar su total semestral.\n");
    printf("\n4. Salir.\n");
}

int validarVenta(float *venta) {
    if (*venta >= 0) {
        return 1;
    } else {
        return 0;
    }
}
