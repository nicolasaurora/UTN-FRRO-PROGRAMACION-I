#include <stdio.h>
#include <stdlib.h>

void mostrarMenu();
int validarAltura(float *altura);
void cargarAlturas(float alturas[], int tam);
void mostrarAlturaPromedio(float alturas[], int tam);
void mostrarAlturaMayor(float alturas[], int tam);
void mostrarCantMas170(float alturas[], int tam);

int main() {

    int tam = 6;
    float alturas[tam];
    int opcion;

    cargarAlturas(alturas, tam);

    do {
        mostrarMenu();
        printf("\nIngrese una opcion.\n");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
            mostrarAlturaPromedio(alturas, tam);
            break;

            case 2:
            mostrarAlturaMayor(alturas, tam);
            break;

            case 3:
            mostrarCantMas170(alturas, tam);
            break;

            case 4:
            printf("Saliendo...");
            break;

            default:
            printf("Opcion invalida.");
            break;
        }
    } while (opcion != 4);


    return 0;
}


void mostrarMenu() {
    printf("\n1. Mostrar altura promedio.");
    printf("\n2. Mostrar mayor altura.");
    printf("\n3. Cuantos miden mas de 1.70.");
    printf("\n4. Salir.");
}

void cargarAlturas(float alturas[], int tam) {
    for (int i = 0; i < tam; i ++) {
        do {
            printf("\nIngrese altura %d: ", i + 1);
            scanf("%f", &alturas[i]);
            if(validarAltura(&alturas[i]) == 0) {
                printf("\nLa altura ingresada debe ser entre 1.0 y 2.50");
            }
        } while (validarAltura(&alturas[i]) == 0);
        
    }
}

void mostrarAlturaPromedio(float alturas[], int tam) {
    float sumaTotal = 0;
    float alturaPromedio;

    for (int i = 0; i < tam; i ++) {
        sumaTotal += alturas[i];
    }
    alturaPromedio = sumaTotal / tam;
    printf("\nLa altura promedio es: %.2f", alturaPromedio);
}

void mostrarAlturaMayor(float alturas[], int tam) {
    float alturaMayor = alturas[0];
    for (int i = 0; i < tam; i ++) {
        if (alturas[i] > alturaMayor) {
            alturaMayor = alturas[i];
        }
    }

    printf("\nLa altura mayor registrada fue %.2f", alturaMayor);
}

void mostrarCantMas170(float alturas[], int tam) {
    int contadorMas170 = 0;
    for (int i = 0; i < tam; i ++) {
        if(alturas [i] > 1.70) {
            contadorMas170 ++;
        }
    }

    printf("\nLa cantidad de personas que superan 1.70m son: %d", contadorMas170);
}

int validarAltura(float *altura) {
    if(*altura >= 1.0 && *altura <= 2.50) {
        return 1;
    } else {
        return 0;
    }
}

