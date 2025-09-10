#include <stdio.h>
#include <stdlib.h>


int main() {
    
    float venta;
    float descuento;
    float total;
    
    printf("Ingrese el valor de la venta: \n");
    scanf("%f", &venta);
    
    if (venta <= 0) {
        printf("La venta debe superar el valor 0.\n");
    } else if (venta >= 100000) {
        descuento = 0.15;
        total = venta - (venta * descuento);
    } else {
        descuento = 0.10;
        total = venta - (venta * descuento);
    }
    
    printf("El total de la venta es: $%.2f\n", total);
    
    return 0;
}
