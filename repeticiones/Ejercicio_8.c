#include <stdio.h>
#include <stdlib.h>


int main() {

    float valorVenta, sumaVentas, comision;
    char codigoVendedor = 'A';
    
    sumaVentas = 0;
    
    while (codigoVendedor <= 'E') {
        
        sumaVentas = 0;
        comision = 0;
        printf("\nVendedor: %c\n", codigoVendedor);
        printf("\nSe solicitaran valores de venta, ingrese 0 para finalizar.\n");

        do {
            printf("\nIngrese valor de venta: \n");
            scanf("%f", &valorVenta);
            sumaVentas += valorVenta;
        } while (valorVenta != 0);

        comision = sumaVentas * 0.025;
        printf("\nResumen vendedor: %c\n", codigoVendedor);
        printf("total ventas: $%.2f\n", sumaVentas);
        printf("Comision: $%.2f\n", comision);
        printf("\n============================\n");
        codigoVendedor ++;
    }
   

    return 0;
}
