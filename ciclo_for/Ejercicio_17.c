#include <stdio.h>
#include <stdlib.h>


int main() {
    
    int i = 0;
    int cantidadProductos, esMiembro;
    float descuento = 0;
    float precioProducto, importeTotalMasDescuento;
    float importeTotal = 0;
    
    printf("\nIngrese cantidad de productos comprados: \n");
    scanf("%d", &cantidadProductos);
    
    for (i = 0; i < cantidadProductos; i++) {
        printf("\nIngrese precio del producto %d\n", i + 1);
        scanf("%f", &precioProducto);
        importeTotal += precioProducto;
    }
    
    if (cantidadProductos >= 15 && importeTotal > 149999) {
        descuento += 10;
    }
    
    printf("\nEs miembro de toco plus? \n");
    printf("1- Si\n");
    printf("2- No\n");
    scanf("%d", &esMiembro);
    
    if (esMiembro == 1) {
        descuento += 5;
    }
    
    importeTotalMasDescuento = importeTotal - (importeTotal * descuento / 100);
    
    printf("\nEl importe total a abonar es: $%.2f\n", importeTotal);
    printf("\nCantidad de productos: %d\n", cantidadProductos);
    printf("\nPosee un descuento de: %.2f%%\n", descuento);
    printf("\nImporte total + descuento: $%.2f\n", importeTotalMasDescuento);
   
    return 0;
    
}
