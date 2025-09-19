#include <stdio.h>
#include <stdlib.h>

int main() {
   
    float inflacion[12] = {0.8, 0.1, 0.3, 0.4, 0.3, 0.6, 0.5, 0.3, 0.7, 0.3, 0.2, 0.9};
    float inflacionAnual = 0;
    float inflacionMasBaja, inflacionMasAlta;
    int indiceInflacionMasBaja, indiceInflacionMasAlta;
   
    for (int i = 0; i < 12; i++) {
        inflacionAnual += inflacion[i];
    }
   
    printf("La inflacion anual es de: %.2f%%\n", inflacionAnual);
    printf("\n==========================================\n");
   
    for (int i = 0; i < 12; i++) {
        if ( i == 0) {
            inflacionMasBaja = inflacion[i];
            indiceInflacionMasBaja = i;
        } else if ( inflacion[i] < inflacionMasBaja) {
            inflacionMasBaja = inflacion[i];
            indiceInflacionMasBaja = i;
        }
    }
   
    printf("\nLa inflacion mas baja es Mes %d: %.2f\n", indiceInflacionMasBaja, inflacionMasBaja);
    printf("\n==========================================\n");
   
    for (int i = 0; i < 12; i++) {
        if ( i == 0) {
            inflacionMasAlta = inflacion[i];
            indiceInflacionMasAlta = i;
        } else if ( inflacion[i] > inflacionMasAlta) {
            inflacionMasAlta = inflacion[i];
            indiceInflacionMasAlta = i;
        }
    }
   
    printf("\nLa inflacion mas alta es Mes %d: %.2f\n", indiceInflacionMasAlta, inflacionMasAlta);
    printf("\n==========================================\n");
   
    return 0;
    
}
