#include <stdio.h>

int main() {
    
    float precioPorHora = 800;
    float tiempoTrabajadoEnHoras;
    float sueldo;
    

    printf("Ingrese el tiempo trabajado en horas: ");
    scanf("%f", &tiempoTrabajadoEnHoras);

    sueldo = precioPorHora * tiempoTrabajadoEnHoras;

    printf("El sueldo que se le debe abonar al contador es: $%.2f", sueldo);

    return 0; 
}