#include <stdio.h>
#include <stdlib.h>


int main() {
    
    int dni, medioDePago, tarjeta, cuotas;
    float venta, interes;
    
    venta = 4600;
    
    printf("\nBienvenido! \nIngrese su DNI: \n");
    scanf("%d", &dni);
    
    if (dni >= 1000000 && dni <= 99999999) {
        printf("\nSeleccione el medio de pago: \n");
        printf("1- Efectivo.\n");
        printf("2- Tarjeta.\n");
        scanf("%d", &medioDePago);

        if (medioDePago == 2) {
            printf("\nSeleccione tarjeta: \n");
            printf("1- Visa.\n");
            printf("2- American Express.\n");
            printf("3- Mercado pago.\n");
            printf("4- Cabal.\n");
            scanf("%d", &tarjeta);

            if (tarjeta >= 1 && tarjeta <= 4) {
                printf("\nSeleccione cantidad de cuotas: \n");
                printf("1- 1 cuota.\n");
                printf("2- 3 cuotas.\n");
                printf("3- 6 cuotas.\n");
                printf("4- 12 cuotas.\n");
                scanf("%d", &cuotas);
                
                switch (cuotas) {

                    case 1:
                    interes = 0;
                    break;
                    
                    case 2:
                    interes = 0.04;
                    venta = venta + (venta * interes);
                    break;
                    
                    case 3:
                    interes = 0.08;
                    venta = venta + (venta * interes);
                    break;
                    
                    case 4:
                    interes = 0.08;
                    venta = venta + (venta * interes);
                    break;
                    
                    default:
                    printf("La opcion ingresada es incorrecta\n");
                    break;  
                }

                printf("\nRESUMEN DE LA OPERACION: \n\n");
                printf("- DNI: %d\n", dni);

                switch (medioDePago) {
                    
                    case 1:
                    printf("- Medio de pago: Efectivo\n");
                    break;
                    
                    case 2:
                    printf("- Medio de pago: Tarjeta\n");
                    break;
                }
                
                switch (tarjeta) {
                    
                    case 1:
                    printf("- Tarjeta: Visa\n");
                    break;
                    
                    case 2:
                    printf("- Tarjeta: American Express\n");
                    break;
                    
                    case 3:
                    printf("- Tarjeta: Mercado pago\n");
                    break;
                    
                    case 4:
                    printf("- Tarjeta: Cabal\n");
                    break;
                    
                }
                
                switch (cuotas) {
                    
                    case 1:
                    printf("- Cuotas: 0\n");
                    break;
                    
                    case 2:
                    printf("- Cuotas: 3\n");
                    break;
                    
                    case 3:
                    printf("- Cuotas: 6\n");
                    break;
                    
                    case 4:
                    printf("- Cuotas: 12\n");
                    break;
                }
                
                printf("- Total: $%.2f\n", venta);

                } else {
                    printf("La opcion es invalida.");
                }
            
        } else if (medioDePago == 1) {
            
            interes = 0;
        
            printf("\nRESUMEN DE LA OPERACION: \n");
            printf("- DNI: %d\n", dni);
            printf("- Medio de pago: Efectivo\n");
            printf("- Tarjeta: --\n");
            printf("- Cuotas: --\n");
            printf("- Total: $%.2f\n", venta);

        } else {
            printf("La opcion ingresada es incorrecta\n");
        }
        
    } else {
        printf("El numero ingresado es invalido.\n");
    }
    
    return 0;
    
}
