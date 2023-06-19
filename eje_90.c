/*90- Ingresar dos números enteros y luego presentar el siguiente menú de opciones:
1- SUMAR
2- RESTAR
3- MULTIPLICAR
4- DIVIDIR
A esto el usuario debe responder con la opción correspondiente a la operación que desee
hacer entre los números y el programa debe devolver el resultado. Utilizar funciones para
las llamadas a cada punto del menú de opciones. El programa debe ser iterativo. 
*/
#include <stdio.h>
#include <stdlib.h>

void sumar(int, int);
void restar(int, int);
void dividir(int, int);
void multiplicar(int, int);

int main() {
    int num1 = 0, num2;
    int op = 0;

    printf("Ingrese una opción:\n");
    printf(" 1-Sumar\n 2-Restar\n 3-Dividir\n 4-Multiplicar\n 0-Salir\n");

    scanf("%d", &op);
    printf("Ingrese el primer número:\n");
    scanf("%d", &num1);
    printf("Ingrese el segundo número:\n");
    scanf("%d", &num2);

    while (op != 0) {
        switch (op) {
            case 1:
                sumar(num1, num2);
                break;
            case 2:
                restar(num1, num2);
                break;
            case 3:
                if (num2 != 0) {
                    dividir(num1, num2);
                } else {
                    printf("No se puede dividir por cero.\n");
                }
                break;
            case 4:
                multiplicar(num1, num2);
                break;
            default:
                printf("Opción inválida.\n");
        }

        printf("\nIngrese una opción:\n");
        printf(" 1-Sumar\n 2-Restar\n 3-Dividir\n 4-Multiplicar\n 0-Salir\n");

        scanf("%d", &op);
        if (op != 0) {
            printf("Ingrese el primer número:\n");
            scanf("%d", &num1);
            printf("Ingrese el segundo número:\n");
            scanf("%d", &num2);
        }
    }
}
