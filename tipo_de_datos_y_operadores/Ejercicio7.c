#include <stdio.h>

int main() {
    
    float precioPorHora;
    float tiempoTrabajadoEnHoras;
    float sueldo;
    
    

    printf("Ingrese el valor del precio por hora trabajada: ");
    scanf("%f", &precioPorHora);

    printf("Ingrese el tiempo trabajado en horas: ");
    scanf("%f", &tiempoTrabajadoEnHoras);

    sueldo = precioPorHora * tiempoTrabajadoEnHoras;

    printf("El sueldo que se le debe abonar al trabajador es: $%.2f", sueldo);

    return 0;
}