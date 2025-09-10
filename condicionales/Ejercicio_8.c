#include <stdio.h>
#include <stdlib.h>

int main() {
    
    float saldo;
    float retiro;
    float saldoDisponible;
    
    printf("Ingrese el saldo: \n");
    scanf("%f", &saldo);
    
    if(saldo <= 0){
        printf("El valor es invalido.\n");
        exit(EXIT_FAILURE);
    } else {
        saldoDisponible = saldo;
    }
    
    
    printf("Saldo actual: $%.2f\n", saldoDisponible);
    
    printf("Ingrese el monto que desea retirar: \n");
    scanf("%f", &retiro);
    
    if (retiro <= saldoDisponible) {
        saldoDisponible = saldoDisponible - retiro;
    } else {
        printf("No dispone de fondos suficientes para realizar esa operacion.\n");
    }
    
    printf("Su saldo es: $%.2f\n", saldoDisponible);
    
    return 0;
}
