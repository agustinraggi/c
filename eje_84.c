/*84- Se dispone de registros con los siguientes. datos: código (5 caracteres), nombre (20),
domicilio (20), Saldo.
Se solicita cargar dichos datos (500 registros como máximo) y luego satisfacer un esquema
de consulta interactiva donde al ingresar un código se informan los datos restantes
correspondientes.*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>  // Se agregó la biblioteca para usar system("cls") y system("pause")

struct cliente {
    char cod[5];
    char nombre[50];
    char domicilio[20];
    float saldo;
};

int main() {
    struct cliente cli[500];
    char codCli[5];
    int cantcli, i, band;

    for (i = 0; i < 500; i++) {
        printf("Cliente nro. %d (Ingrese 0 para terminar la carga de clientes)\n", i + 1);
        scanf("%s", cli[i].cod);
        if (strcmp(cli[i].cod, "0") == 0) break;
        printf("Nombre: ");
        scanf("%s", cli[i].nombre);
        printf("Domicilio: ");
        scanf("%s", cli[i].domicilio);
        printf("Saldo: ");
        scanf("%f", &cli[i].saldo);
    }

    cantcli = i;

    do {
        band = 0;
        system("cls");
        printf("Ingrese el código del cliente a consultar (0 para finalizar): ");
        scanf("%s", codCli);
        if (strcmp(codCli, "0") == 0) break;
        for (i = 0; i < cantcli; i++) {
            if (strcmp(cli[i].cod, codCli) == 0) {
                printf("\nCódigo: %s, Nombre: %s, Saldo: %5.2f\n", cli[i].cod, cli[i].nombre, cli[i].saldo);
                system("pause");
                band = 1;
                break;
            }
        }
        if (band == 0 && strcmp(codCli, "0") != 0) {
            printf("El código del cliente no existe.\n");
        }
    } while (strcmp(codCli, "0") != 0);

    return 0;
}
