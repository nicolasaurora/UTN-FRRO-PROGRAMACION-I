/*Realizar un programa que permita ver información a un cliente de un banco. Para ello el cliente deberá ingresar su usuario (número de DNI) y contraseña (número entero), validar que los datos ingresados sean correctos, se permitirá al cliente 3 intentos de ingreso de contraseña. Al loguarse correctamente presentar un menú con las siguientes opciones*/

#include <stdio.h>
#include <stdlib.h>

int main() {

    int dni = 35654123;  
    int pass = 1234;  
    int saldo = 150000;  
    int cbu = 986323456;  
    int dniIngresado = 0;  
    int passIngresado = 0;  
    int intentos = 1;  
    int ingresaCorrectamente = 0;
    
    do {

        printf("Ingrese su usuario: \n");
        scanf("%d", &dniIngresado);

        if (dniIngresado == dni) {
            printf("Usuario correcto! \n");

            printf("Ingrese su contrasenia: \n");
            scanf("%d", &passIngresado);

            if (passIngresado != pass) {
                printf("La contrasenia ingresada no es valida.\n");
                intentos ++;
            } else {
                printf("Acceso permitido!\n");
            }

        } else {
            printf("El usuario ingresado no es valido. \n");
        }

       
    } while ( intentos <= 3 && passIngresado != pass);
    
    if (intentos <= 3 && passIngresado == pass) {

        int opcion;

        printf("1- Consultar saldo.\n");
        printf("2- Consultar CBU.\n");
        printf("3- Salir.\n");
        scanf("%d", &opcion);

        switch (opcion) {

            case 1: 
            printf("Su saldo es: %d\n", saldo);
            break;

            case 2:
            printf("Su CBU es: %d\n", cbu);
            break;

            case 3:
            printf("Saliendo...\n");
            break;

            default:
            printf("La opcion ingresada no es valida.\n");
            break;

        }

        
    } else {
        printf("Se agotaron los intentos.\n");
    }

    

    return 0;
}