#include <stdio.h>
#include <stdlib.h>


int validarPuntaje(int *puntaje);
void cargaPuntajes(int puntajes[], int cantClientes);
void mostrarPromedio(int puntajes[], int cantClientes);
void mostrarCantidadDeClientes5(int puntajes[], int cantClientes);
void mostrarMenosFrecuente(int puntajes[], int cantClientes);

int main() {
   
    int cantClientes = 10;
    int puntajes[cantClientes];
    int cantFrecuencias = 5;
    int frecuencias[cantFrecuencias][2];
   
    cargaPuntajes(puntajes, cantClientes);
    mostrarPromedio(puntajes, cantClientes);
    mostrarCantidadDeClientes5(puntajes, cantClientes);
    mostrarMenosFrecuente(puntajes, cantClientes);

    return 0;
}

int validarPuntaje(int *puntaje) {
   
    if (*puntaje > 0 && *puntaje < 6) {
        return 1;
    } else {
        return 0;
    }
   
}

void cargaPuntajes(int puntajes[], int cantClientes) {
    for (int i = 0;i < cantClientes; i ++) {
        do {
            printf("\nIngrese el puntaje de satisfaccion (1-5), del cliente %d: \n", i + 1);
            scanf("%d", &puntajes[i]);
            if(validarPuntaje(&puntajes[i]) == 0) {
                printf("\nEl puntaje ingresado es incorrecto, debe ser entre 1 y 5\n");
            }
        } while (validarPuntaje(&puntajes[i]) == 0);
    }
}

void mostrarPromedio(int puntajes[], int cantClientes) {
    int sumaTotal = 0;
    float promedio;
   
    for (int i = 0; i < cantClientes; i ++) {
        sumaTotal += puntajes[i];
    }
    promedio = sumaTotal / cantClientes;
    printf("\nEl promedio de satisfaccion es de: %.2f\n", promedio);
}

void mostrarCantidadDeClientes5(int puntajes[], int cantClientes) {
    int cantCon5 = 0;
   
    for (int i = 0; i < cantClientes; i ++) {
        if(puntajes[i] == 5) {
            cantCon5 ++;
        }
    }
    printf("\nLa cantidad de clientes que puntuaron con 5 fueron: %d\n", cantCon5);
}

void mostrarMenosFrecuente(int puntajes[], int cantClientes) {
   int frecuencias[5] = {0};  

    for (int i = 0; i < cantClientes; i++) {
        int puntaje = puntajes[i];
        frecuencias[puntaje - 1]++;
    }

    int menorFrecuencia = frecuencias[0];
    int puntajeMenosFrecuente = 1;
    for (int i = 1; i < 5; i++) {
        if (frecuencias[i] < menorFrecuencia) {
            menorFrecuencia = frecuencias[i];
            puntajeMenosFrecuente = i + 1;
        }
    }

    printf("\nEl puntaje con menor frecuencia fue: %d (con %d apariciones)\n", puntajeMenosFrecuente, menorFrecuencia);
}