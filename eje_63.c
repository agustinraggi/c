/*63- Escribir un programa que permita el ingreso de 1000 números, los almacene en un
arreglo, luego ingrese otro número y determine entre los anteriores cuales son
mayores o iguales al último número ingresado. Con los mayores calcular su sumatoria y
mostrar:
LA SUMATORIA DE LOS NÚMEROS MAYORES QUE nro_ingresado ES sumatoria.
*/
#include <stdio.h>

int main() {
    int num[1000], cantnum, sumatoria = 0;

    printf("Ingrese la cantidad de numeros que desea ingresar (menor o igual a 1000): ");
    scanf("%d", &cantnum);

    printf("Ingrese los numeros:\n");
    for (int i = 0; i < cantnum; i++) {
        scanf("%d", &num[i]);
    }

    printf("Ingrese el numero que desea evaluar: ");
    scanf("%d", &cantnum);

    for (int i = 0; i < cantnum; i++) {
        if (num[i] >= cantnum) {
            printf("%d\n", num[i]);
        }
        if (num[i] > cantnum) {
            sumatoria = sumatoria + num[i];
        }
    }

    printf("\nLa sumatoria de los numeros mayores que %d es %d\n", cantnum, sumatoria);

    return 0;
}
