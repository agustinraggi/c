/*68- Escribir un programa que ingrese una cadena, cuente cuántos de sus elementos son dígitos,
cuántos de ellos son blancos y muestre: */
#include <stdio.h>
#include <ctype.h>

int main() {
    char c, cadena[100];
    int no_digitos = 0, blancos = 0, i = 0;

    printf("Ingrese una cadena de caracteres: ");

    while ((c = getchar()) != '\n') {
        cadena[i] = c;
        i++;

        if (isdigit(c) == 0) {
            no_digitos++;
        }

        if (isspace(c) != 0) {
            blancos++;
        }
    }

    cadena[i] = '\0';

    printf("La cadena ingresada es: %s\n", cadena);
    printf("La cantidad de no digitos en la cadena es: %d\n", no_digitos);
    printf("La cantidad de blancos en la cadena es: %d\n", blancos);

    return 0;
}
