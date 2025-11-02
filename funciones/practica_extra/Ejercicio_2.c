#include <stdio.h>


int cargaTemperaturas(float temperaturas[],int cantTemp);
void mostrarTemperaturaMasBaja(float temperaturas[], int cantTemp);
void diaTemperaturaMasBaja(float temperaturas[], int cantTemp);
void mostrarTemperaturaPromedio(float temperaturas[], int cantTemp);

int main() {
   
    int cantTemp = 31;
    float temperaturas[cantTemp];
    int cantTemperaturas;
    float temperaturaMasBaja;
   
   
    cantTemperaturas = cargaTemperaturas(temperaturas, cantTemp);
   
    mostrarTemperaturaMasBaja(temperaturas, cantTemperaturas);
   
    diaTemperaturaMasBaja(temperaturas, cantTemperaturas);
   
    mostrarTemperaturaPromedio(temperaturas, cantTemperaturas);

    return 0;
}

int cargaTemperaturas(float temperaturas[],int cantTemp) {
   
    int cantTemperaturas = 0;
   
    for ( int i = 0; i < cantTemp; i ++) {
        do {
            printf ("Ingrese temperatura dia %d: ", i + 1);
            scanf("%f", &temperaturas[i]);
           
            if (temperaturas[i] < 0) {
                printf("Se detuvo el ingreso de temperaturas.");
                return cantTemperaturas;
            }
           
            if (temperaturas[i] == 0 || temperaturas[i] > 50) {
                printf("El valor debe estar entre 0 y 50.");
            }
           
        } while (temperaturas[i] == 0 || temperaturas[i] > 50);
       
        cantTemperaturas ++;
    }
   
    return cantTemperaturas;
}

void mostrarTemperaturaMasBaja(float temperaturas[], int cantTemp) {
    float temperaturaMasBaja = temperaturas[0];
    for ( int i = 0; i < cantTemp; i ++) {
        if (temperaturas[i] < temperaturaMasBaja) {
            temperaturaMasBaja = temperaturas[i];
        }
    }
   
    printf("La temperatura mas baja es: %.2f", temperaturaMasBaja);
}

void diaTemperaturaMasBaja(float temperaturas[], int cantTemp) {
    int diaTempMinima = 0;
    float temperaturaMasBaja = temperaturas[0];
    for ( int i = 0; i < cantTemp; i ++) {
        if (temperaturas[i] < temperaturaMasBaja) {
            temperaturaMasBaja = temperaturas[i];
            diaTempMinima = i;
        }
    }
   
    printf("El dia de la temperatura mas baja es el dia %d del mes", diaTempMinima + 1);
}

void mostrarTemperaturaPromedio(float temperaturas[], int cantTemp) {
    float sumaTemp = 0;
    float tempPromedio;
   
    for ( int i = 0; i < cantTemp; i ++) {
        sumaTemp += temperaturas[i];
    }
   
    tempPromedio = sumaTemp / cantTemp;
   
    printf("La temperatura promedio es: %.2f", tempPromedio);
}