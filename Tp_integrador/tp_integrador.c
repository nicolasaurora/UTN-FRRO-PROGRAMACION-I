#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CANT_MAX 35

int validarDNI(int dni);
int validarSede(char sede[]);
int validarMembresia(char membresia[]);
void ingresarDNI(int *dni, int numeroSocio);
void ingresarNombreCompleto(char apellidoYNombre[], int numeroSocio);
void ingresarEdad(int *edad, int numeroSocio);
void ingresarSede(char sede[], int numeroSocio, int *contadorSociosCba, int *contadorSociosRos, int *contadorSociosMdp, int *contadorSociosBue);
void ingresarMembresia(char membresia[], int numeroSocio);
int ingresarMetodoPago();
float calcularMontoMembresia(char membresia[], int edad, int metodoPago);
void mostrarMenu();
void listarSociosPorNombre(int dni[], char apellidoYNombre[][CANT_MAX], int edad[], char sede[][10], char membresia[][10], float importeMensual[], int cantidadSocios);
void listarSociosPorSede(int dni[], char apellidoYNombre[][CANT_MAX], int edad[], char sede[][10], char membresia[][10], float importeMensual[], int cantidadSocios);
void listarSucursales(int contadorSociosCba, float recaudacionCba, int contadorSociosRos, float recaudacionRos, int contadorSociosMdp, float recaudacionMdp, int contadorSociosBue, float recaudacionBue);
void buscarSocioPorDNI(int dni[], char apellidoYNombre[][CANT_MAX], int edad[], char sede[][10], char membresia[][10], float importeMensual[], int cantidadSocios);
void mostrarEstadisticas(int contadorSociosCba, int contadorSociosRos, int contadorSociosMdp, int contadorSociosBue, int cantidadMenoresCba, int cantidadMenoresRos, int cantidadMenoresMdp, int cantidadMenoresBue);

int main() {
    
    // Cantidad de socios y datos de distintas sedes
    int cantidadSocios;
    
    //CORDOBA
    int contadorSociosCba = 0;
    float recaudacionCba = 0;
    int cantidadMenoresCba = 0;
    float porcentajeSociosCba;
    float porcentajeMenoresCba;

    //ROSARIO
    int contadorSociosRos = 0;
    float recaudacionRos = 0;
    int cantidadMenoresRos = 0;
    float porcentajeSociosRos;
    float porcentajeMenoresRos;

    //MAR DEL PLATA
    int contadorSociosMdp = 0;
    float recaudacionMdp = 0;
    int cantidadMenoresMdp = 0;
    float porcentajeSociosMdp;
    float porcentajeMenoresMdp;

    //BUENOS AIRES
    int contadorSociosBue = 0;
    float recaudacionBue = 0;
    int cantidadMenoresBue = 0;
    float porcentajeSociosBue;
    float porcentajeMenoresBue;



    float montoMembresia;
    int metodoPago;
    int opcion;
    
    printf("\nBienvenido al Sistema de Gestion de Socios: FitnessPlus\n");
    printf("\nIngrese la cantidad de socios: \n");
    scanf("%d", &cantidadSocios);
    
    // Arrays para almacenar datos de TODOS los socios.
    int dni[cantidadSocios];
    char apellidoYNombre[cantidadSocios][CANT_MAX];
    int edad[cantidadSocios];
    char sede[cantidadSocios][10];
    char membresia[cantidadSocios][10];
    float importeMensual[cantidadSocios];
   
   
    for (int i = 0; i < cantidadSocios; i++) {
        
        ingresarDNI(&dni[i], i + 1);
        ingresarNombreCompleto(apellidoYNombre[i], i + 1);
        ingresarEdad(&edad[i], i + 1);
        ingresarSede(sede[i], i + 1, &contadorSociosCba, &contadorSociosRos, &contadorSociosMdp, &contadorSociosBue);
        ingresarMembresia(membresia[i], i + 1);
        
        metodoPago = ingresarMetodoPago();
        montoMembresia = calcularMontoMembresia(membresia[i], edad[i], metodoPago);
        importeMensual[i] = montoMembresia;

        if (strcmp(sede[i], "cba") == 0 || strcmp(sede[i], "CBA") == 0) {

            contadorSociosCba++;
            recaudacionCba += montoMembresia;
            if (edad[i] < 18) {
                cantidadMenoresCba++;
            }

        } else if (strcmp(sede[i], "ros") == 0 || strcmp(sede[i], "ROS") == 0) {

            contadorSociosRos++;
            recaudacionRos += montoMembresia;
            if (edad[i] < 18) {
                cantidadMenoresRos++;
            }

        } else if (strcmp(sede[i], "mdp") == 0 || strcmp(sede[i], "MDP") == 0) {

            contadorSociosMdp++;
            recaudacionMdp += montoMembresia;
            if (edad[i] < 18) {
                cantidadMenoresMdp++;
            }

        } else if (strcmp(sede[i], "bue") == 0 || strcmp(sede[i], "BUE") == 0) {

            contadorSociosBue++;
            recaudacionBue += montoMembresia;
            if (edad[i] < 18) {
                cantidadMenoresBue++;
            }

        }
    }

    do {
        mostrarMenu();
        scanf("%d", &opcion);

        switch (opcion) {

            case 1:
                listarSociosPorNombre(dni, apellidoYNombre, edad, sede, membresia, importeMensual, cantidadSocios);
                break;

            case 2:
                listarSociosPorSede(dni, apellidoYNombre, edad, sede, membresia, importeMensual, cantidadSocios);
                break;

            case 3:
                listarSucursales(contadorSociosCba, recaudacionCba, contadorSociosRos, recaudacionRos, contadorSociosMdp, recaudacionMdp, contadorSociosBue, recaudacionBue);
                break;

            case 4:
                buscarSocioPorDNI(dni, apellidoYNombre, edad, sede, membresia, importeMensual, cantidadSocios);
                break;
            
            case 5:
                mostrarEstadisticas(contadorSociosCba, contadorSociosRos, contadorSociosMdp, contadorSociosBue, cantidadMenoresCba, cantidadMenoresRos, cantidadMenoresMdp, cantidadMenoresBue);
                break;

            case 6:
                printf("\nGracias por usar el sistema de gestion FitnessPlus.\n");
                break;

            default:
                printf("\nLa opcion ingresada es invalida.\n");
        }

    } while (opcion != 6);
   
    return 0;
}




int validarDNI(int dni) {

    if (dni > 19999999 && dni < 60000000) { 
        return 1;
    } else {
        return 0;
    }
}

int validarSede(char sede[]) {

    if (strcmp(sede, "cba") == 0 || strcmp(sede, "CBA") == 0 || 
        strcmp(sede, "ros") == 0 || strcmp(sede, "ROS") == 0 || 
        strcmp(sede, "mdp") == 0 || strcmp(sede, "MDP") == 0 || 
        strcmp(sede, "bue") == 0 || strcmp(sede, "BUE") == 0) {
        return 1;
    }
    return 0;
}

int validarMembresia(char membresia[]) {

    if (strcmp(membresia, "bas") == 0 || strcmp(membresia, "BAS") == 0 || 
        strcmp(membresia, "std") == 0 || strcmp(membresia, "STD") == 0 || 
        strcmp(membresia, "pre") == 0 || strcmp(membresia, "PRE") == 0) {
        return 1;
    }
    return 0;
}

void ingresarDNI(int *dni, int numeroSocio) {

    do {
        printf("\nIngrese DNI del socio %d: \n", numeroSocio);
        scanf("%d", dni); 
        if (validarDNI(*dni) == 0) {
            printf("\nEl dni ingresado es invalido.\n");
        }
    } while (validarDNI(*dni) == 0);
}

void ingresarNombreCompleto(char apellidoYNombre[], int numeroSocio) {

    char apellidoIngresado[15];
    char nombreIngresado[15];
    
    printf("\nIngrese apellido del socio %d: \n", numeroSocio);
    scanf("%s", apellidoIngresado);
    
    printf("\nIngrese nombre del socio %d: \n", numeroSocio);
    scanf("%s", nombreIngresado);
    
    strcpy(apellidoYNombre, apellidoIngresado);
    strcat(apellidoYNombre, " ");
    strcat(apellidoYNombre, nombreIngresado);
}

void ingresarEdad(int *edad, int numeroSocio) {
    printf("\nIngrese edad del socio %d: \n", numeroSocio);
    scanf("%d", edad);
}

void ingresarSede(char sede[], int numeroSocio, int *contadorSociosCba, int *contadorSociosRos, int *contadorSociosMdp, int *contadorSociosBue) {

    do {
        printf("\nIngrese sede del socio %d por codigo: \n", numeroSocio);
        printf("\nCodigo: ROS/ros - sede: Rosario.\n");
        printf("\nCodigo: CBA/cba - sede: Cordoba.\n");
        printf("\nCodigo: MDP/mdp - sede: Mar del plata.\n");
        printf("\nCodigo: BUE/bue - sede: Buenos Aires.\n");
        scanf("%s", sede);
        
        if (validarSede(sede) == 0) {
            printf("\nLa sede ingresada es incorrecta.\n");
        }
    } while (validarSede(sede) == 0);


    if ((strcmp(sede, "cba") == 0 || strcmp(sede, "CBA") == 0) && *contadorSociosCba >= 100) {

        do {
            printf("\nLa sede ingresada esta llena, elija otra sede: \n");
            printf("\n1. ros\n");
            printf("\n2. mdp\n");
            printf("\n3. bue\n");
            scanf("%s", sede);
            if (validarSede(sede) == 0) {
                printf("\nLa sede ingresada no es valida.\n");
            }
        } while (validarSede(sede) == 0 || strcmp(sede, "cba") == 0 || strcmp(sede, "CBA") == 0);
        
    } else if ((strcmp(sede, "bue") == 0 || strcmp(sede, "BUE") == 0) && *contadorSociosBue >= 120) {

        do {
            printf("\nLa sede ingresada esta llena, elija otra sede: \n");
            printf("\n1. ros\n");
            printf("\n2. mdp\n");
            printf("\n3. cba\n");
            scanf("%s", sede);
            if (validarSede(sede) == 0) {
                printf("\nLa sede ingresada no es valida.\n");
            }
        } while (validarSede(sede) == 0 || strcmp(sede, "bue") == 0 || strcmp(sede, "BUE") == 0);
        
    } else if ((strcmp(sede, "ros") == 0 || strcmp(sede, "ROS") == 0) && *contadorSociosRos >= 80) {

        do {
            printf("\nLa sede ingresada esta llena, elija otra sede: \n");
            printf("\n1. bue\n");
            printf("\n2. mdp\n");
            printf("\n3. cba\n");
            scanf("%s", sede);
            if (validarSede(sede) == 0) {
                printf("\nLa sede ingresada no es valida.\n");
            }
        } while (validarSede(sede) == 0 || strcmp(sede, "ros") == 0 || strcmp(sede, "ROS") == 0);
        
    } else if ((strcmp(sede, "mdp") == 0 || strcmp(sede, "MDP") == 0) && *contadorSociosMdp >= 90) {

        do {
            printf("\nLa sede ingresada esta llena, elija otra sede: \n");
            printf("\n1. bue\n");
            printf("\n2. ros\n");
            printf("\n3. cba\n");
            scanf("%s", sede);
            if (validarSede(sede) == 0) {
                printf("\nLa sede ingresada no es valida.\n");
            }
        } while (validarSede(sede) == 0 || strcmp(sede, "mdp") == 0 || strcmp(sede, "MDP") == 0);
    }
}

void ingresarMembresia(char membresia[], int numeroSocio) {

    do {
        printf("\nIngrese tipo de membresia del socio %d por codigo: \n", numeroSocio);
        printf("\nCodigo: BAS/bas - Membresia: Basica.\n");
        printf("\nCodigo: STD/std - Membresia: Standard.\n");
        printf("\nCodigo: PRE/pre - Membresia: Premium.\n");
        scanf("%s", membresia);
        
        if (validarMembresia(membresia) == 0) {
            printf("\nLa membresia ingresada no es valida.\n");
        }
    } while (validarMembresia(membresia) == 0);
}

int ingresarMetodoPago() {

    int metodoPago;
    
    do {
        printf("\nIngrese metodo de pago: \n");
        printf("\n1. Efectivo.\n");
        printf("\n2. Tarjeta de credito.\n");
        scanf("%d", &metodoPago);
        if (metodoPago != 1 && metodoPago != 2) {
            printf("\nIngrese un metodo de pago correcto.\n");
        }
    } while (metodoPago != 1 && metodoPago != 2);
    
    return metodoPago;
}

float calcularMontoMembresia(char membresia[], int edad, int metodoPago) {

    float montoMembresia = 0;
    
    if (strcmp(membresia, "bas") == 0 || strcmp(membresia, "BAS") == 0) {
        montoMembresia = 12000;
    } else if (strcmp(membresia, "std") == 0 || strcmp(membresia, "STD") == 0) {
        montoMembresia = 18000;
    } else if (strcmp(membresia, "pre") == 0 || strcmp(membresia, "PRE") == 0) {
        montoMembresia = 25000;
    }
    
    if (edad < 18) {
        montoMembresia = montoMembresia - montoMembresia * 0.20;
    }
    
    if (metodoPago == 2) {
        montoMembresia = montoMembresia + montoMembresia * 0.05;
    }
    
    return montoMembresia;
}

void mostrarMenu() {
    printf("\n==============================================================\n");
    printf("\n1. Mostrar lista de socios ordenada por Apellido y Nombre.\n");
    printf("\n2. Mostrar lista de socios ordenada por Sede y Apellido-Nombre.\n");
    printf("\n3. Mostrar lista de Sucursales con cantidad de socios e importe total recaudado.\n");
    printf("\n4. Buscar un socio por DNI.\n");
    printf("\n5. Mostrar estadisticas generales.\n");
    printf("\n6. Salir.\n");
}

void listarSociosPorNombre(int dni[], char apellidoYNombre[][CANT_MAX], int edad[], char sede[][10], char membresia[][10], float importeMensual[], int cantidadSocios) {
    
    int dniTemp[cantidadSocios];
    char apellidoYNombreTemp[cantidadSocios][CANT_MAX];
    int edadTemp[cantidadSocios];
    char sedeTemp[cantidadSocios][10];
    char membresiaTemp[cantidadSocios][10];
    float importeMensualTemp[cantidadSocios];
    
    
    for (int i = 0; i < cantidadSocios; i++) {

        dniTemp[i] = dni[i];
        strcpy(apellidoYNombreTemp[i], apellidoYNombre[i]);
        edadTemp[i] = edad[i];
        strcpy(sedeTemp[i], sede[i]);
        strcpy(membresiaTemp[i], membresia[i]);
        importeMensualTemp[i] = importeMensual[i];
    }
    
    
    for (int i = 0; i < cantidadSocios - 1; i++) {

        for (int j = 0; j < cantidadSocios - i - 1; j++) {

            if (strcmp(apellidoYNombreTemp[j], apellidoYNombreTemp[j + 1]) > 0) {
                
                int dniAux = dniTemp[j];
                dniTemp[j] = dniTemp[j + 1];
                dniTemp[j + 1] = dniAux;
                
                
                char nombreAux[CANT_MAX];
                strcpy(nombreAux, apellidoYNombreTemp[j]);
                strcpy(apellidoYNombreTemp[j], apellidoYNombreTemp[j + 1]);
                strcpy(apellidoYNombreTemp[j + 1], nombreAux);
                
                
                int edadAux = edadTemp[j];
                edadTemp[j] = edadTemp[j + 1];
                edadTemp[j + 1] = edadAux;
                
                
                char sedeAux[10];
                strcpy(sedeAux, sedeTemp[j]);
                strcpy(sedeTemp[j], sedeTemp[j + 1]);
                strcpy(sedeTemp[j + 1], sedeAux);
                
                
                char membresiaAux[10];
                strcpy(membresiaAux, membresiaTemp[j]);
                strcpy(membresiaTemp[j], membresiaTemp[j + 1]);
                strcpy(membresiaTemp[j + 1], membresiaAux);
                
                
                float importeAux = importeMensualTemp[j];
                importeMensualTemp[j] = importeMensualTemp[j + 1];
                importeMensualTemp[j + 1] = importeAux;
            }
        }
    }
    
    
    for (int i = 0; i < cantidadSocios; i++) {

        printf("\n %s - %d - %d anios - %s - %s - $%.2f \n", 
        apellidoYNombreTemp[i], dniTemp[i], edadTemp[i], 
        sedeTemp[i], membresiaTemp[i], importeMensualTemp[i]);
    }
}

void listarSociosPorSede(int dni[], char apellidoYNombre[][CANT_MAX], int edad[], char sede[][10], char membresia[][10], float importeMensual[], int cantidadSocios) {
    
    int dniTemp[cantidadSocios];
    char apellidoYNombreTemp[cantidadSocios][CANT_MAX];
    int edadTemp[cantidadSocios];
    char sedeTemp[cantidadSocios][10];
    char membresiaTemp[cantidadSocios][10];
    float importeMensualTemp[cantidadSocios];
    
    
    for (int i = 0; i < cantidadSocios; i++) {
        dniTemp[i] = dni[i];
        strcpy(apellidoYNombreTemp[i], apellidoYNombre[i]);
        edadTemp[i] = edad[i];
        strcpy(sedeTemp[i], sede[i]);
        strcpy(membresiaTemp[i], membresia[i]);
        importeMensualTemp[i] = importeMensual[i];
    }
    
    
    for (int i = 0; i < cantidadSocios - 1; i++) {

        for (int j = 0; j < cantidadSocios - i - 1; j++) {
            
            int comparacionSede = strcmp(sedeTemp[j], sedeTemp[j + 1]);
            
            
            if (comparacionSede > 0 || (comparacionSede == 0 && strcmp(apellidoYNombreTemp[j], apellidoYNombreTemp[j + 1]) > 0)) {
                
                
                int dniAux = dniTemp[j];
                dniTemp[j] = dniTemp[j + 1];
                dniTemp[j + 1] = dniAux;
                
                char nombreAux[CANT_MAX];
                strcpy(nombreAux, apellidoYNombreTemp[j]);
                strcpy(apellidoYNombreTemp[j], apellidoYNombreTemp[j + 1]);
                strcpy(apellidoYNombreTemp[j + 1], nombreAux);
                
                int edadAux = edadTemp[j];
                edadTemp[j] = edadTemp[j + 1];
                edadTemp[j + 1] = edadAux;
                
                char sedeAux[10];
                strcpy(sedeAux, sedeTemp[j]);
                strcpy(sedeTemp[j], sedeTemp[j + 1]);
                strcpy(sedeTemp[j + 1], sedeAux);
                
                char membresiaAux[10];
                strcpy(membresiaAux, membresiaTemp[j]);
                strcpy(membresiaTemp[j], membresiaTemp[j + 1]);
                strcpy(membresiaTemp[j + 1], membresiaAux);
                
                float importeAux = importeMensualTemp[j];
                importeMensualTemp[j] = importeMensualTemp[j + 1];
                importeMensualTemp[j + 1] = importeAux;
            }
        }
    }
    
    
    for (int i = 0; i < cantidadSocios; i++) {
        printf("\n %s - %s - %d - %s - $%.2f \n", sedeTemp[i], apellidoYNombreTemp[i], dniTemp[i], membresiaTemp[i], importeMensualTemp[i]);
    }
}

void listarSucursales(int contadorSociosCba, float recaudacionCba, int contadorSociosRos, float recaudacionRos, int contadorSociosMdp, float recaudacionMdp, int contadorSociosBue, float recaudacionBue) {
    
    printf("\nCBA - %d - %.2f\n", contadorSociosCba, recaudacionCba);
    printf("\nROS - %d - %.2f\n", contadorSociosRos, recaudacionRos);
    printf("\nMDP - %d - %.2f\n", contadorSociosMdp, recaudacionMdp);
    printf("\nBUE - %d - %.2f\n", contadorSociosBue, recaudacionBue);
}

void buscarSocioPorDNI(int dni[], char apellidoYNombre[][CANT_MAX], int edad[], char sede[][10], char membresia[][10], float importeMensual[], int cantidadSocios) {

    int dniIngresado;
    int encontrado = 0;
    
    do {
        printf("\nIngrese DNI del socio: \n");
        scanf("%d", &dniIngresado);

        if (validarDNI(dniIngresado) == 0) {
            printf("\nEl DNI ingresado no es valido.\n");
        }

    } while(validarDNI(dniIngresado) == 0);
    
    
    
    
    for (int i = 0; i < cantidadSocios; i++) {
        if (dni[i] == dniIngresado) {
            printf("\n%s - %d - %d - %s - %s - $%.2f\n", apellidoYNombre[i], dni[i], edad[i], sede[i], membresia[i], importeMensual[i]);
            encontrado = 1;
            break;
        }
    }

    if (encontrado == 0) {
        printf("\nNo existe socio con ese DNI.\n");
    }
    
}

void mostrarEstadisticas(int contadorSociosCba, int contadorSociosRos, int contadorSociosMdp, int contadorSociosBue, int cantidadMenoresCba, int cantidadMenoresRos, int cantidadMenoresMdp, int cantidadMenoresBue) {

    float porcentajeSociosCba, porcentajeSociosRos, porcentajeSociosMdp, porcentajeSociosBue;
    float porcentajeMenoresCba, porcentajeMenoresRos, porcentajeMenoresMdp, porcentajeMenoresBue;
    
    printf("\nCBA - %.2f%% de usuarios asociados\n", porcentajeSociosCba = contadorSociosCba * 100.0 / 100);
    printf("\nROS - %.2f%% de usuarios asociados\n", porcentajeSociosRos = contadorSociosRos * 100.0 / 80);
    printf("\nMDP - %.2f%% de usuarios asociados\n", porcentajeSociosMdp = contadorSociosMdp * 100.0 / 90);
    printf("\nBUE - %.2f%% de usuarios asociados\n", porcentajeSociosBue = contadorSociosBue * 100.0 / 120);

    if (contadorSociosBue > contadorSociosCba && contadorSociosBue > contadorSociosMdp && contadorSociosBue > contadorSociosRos) {
        printf("\nSede con mayor cantidad de socios: BUE\n");
    } else if (contadorSociosCba > contadorSociosMdp && contadorSociosCba > contadorSociosRos) {
        printf("\nSede con mayor cantidad de socios: CBA\n");
    } else if (contadorSociosMdp > contadorSociosRos) {
        printf("\nSede con mayor cantidad de socios: MDP\n");
    } else {
        printf("\nSede con mayor cantidad de socios: ROS\n");
    }



    if (cantidadMenoresCba > 0) {
        printf("\nCBA - %.2f%% de socios menor de edad\n", porcentajeMenoresCba = cantidadMenoresCba * 100.0 / contadorSociosCba);
    } else {
        printf("\nCBA - %%0 de socios menores de edad.\n");
    }

    if (cantidadMenoresRos > 0) {
        printf("\nROS - %.2f%% de socios menor de edad\n", porcentajeMenoresRos = cantidadMenoresRos * 100.0 / contadorSociosRos);
    } else {
        printf("\nROS - %%0 de socios menores de edad.\n");
    }
    
    if (cantidadMenoresMdp > 0) {
        printf("\nMDP - %.2f%% de socios menor de edad\n", porcentajeMenoresMdp = cantidadMenoresMdp * 100.0 / contadorSociosMdp);
    } else {
        printf("\nMDP - %%0 de socios menores de edad.\n");
    }

    if (cantidadMenoresBue > 0) {
        printf("\nBUE - %.2f%% de socios menor de edad\n", porcentajeMenoresBue = cantidadMenoresBue * 100.0 / contadorSociosBue);
    } else {
        printf("\nBUE - %%0 de socios menores de edad.\n");
    }
    
}