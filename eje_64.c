/*64- Escribir un programa que ingrese y almacene 1000 números y que los muestre
ordenados según un indicador de criterio de ordenamiento que también debe
ingresarse por teclado.*/

#include <stdio.h>
#define cant 1000

int main() {
    int arreglo[cant], aux = 0;
    char orden;
    printf("Ingrese los numeros del arreglo: \n");
    for (int i = 0; i < cant; i++) {
        scanf("%d", &arreglo[i]);
    }
    do {
        fflush(stdin);
        printf("Ingrese el ordenamiento (< para ordenar de menor a mayor, > para ordenar de mayor a menor): \n");
        orden = getchar();
        if (orden == '<') {
            printf("Los numeros se ordenan de menor a mayor.\n");
        } else if (orden == '>') {
            printf("Los numeros se ordenan de mayor a menor.\n");
        }
    } while (orden != '<' && orden != '>');

    for (int i = 0; i < cant - 1; ++i) {
        for (int j = i + 1; j < cant; ++j) {
            if (orden == '>') {
                if (arreglo[i] < arreglo[j]) {
                    aux = arreglo[i];
                    arreglo[i] = arreglo[j];
                    arreglo[j] = aux;
                }
            } else if (orden == '<') {
                if (arreglo[i] > arreglo[j]) {
                    aux = arreglo[i];
                    arreglo[i] = arreglo[j];
                    arreglo[j] = aux;
                }
            }
        }
    }

    printf("Arreglo ordenado:\n");
    for (int i = 0; i < cant; ++i) {
        printf("%d\n", arreglo[i]);
    }

    return 0;
}
