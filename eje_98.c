/*98- Ingresar desde el main una cadena, y a través de una función mostrar cuántos dígitos
tiene la cadena y también su longitud. La función recibe dos parámetros, un puntero a
char para recibir la cadena, y un puntero a entero que devuelve al main la cantidad de
dígitos que tiene la cadena. La función retorna un entero con la cantidad de caracteres
que tiene la cadena (su longitud).
El prototipo de la función es el siguiente: int verificaDigitos (char *, int *);*/

#include <stdio.h>
#include <ctype.h>
#include <string.h>

int verificaDigitos(char *, int *);

int main() {
    char cadena[30];
    int cantDigitos = 0;
    int cant_caracteres_cadena = 0;
    printf("Ingrese una cadena: \n");
    scanf("%s", cadena);

    cant_caracteres_cadena = verificaDigitos(cadena, &cantDigitos);
    printf("La cadena %s \n tiene una longitud de %i \n y contiene %i digitos", cadena, cant_caracteres_cadena, cantDigitos);

    return 0;
}

int verificaDigitos(char *palabra, int *cantidadDigitos) {
    int i;

    for (int i = 0; i < strlen(palabra); i++) {
        if (isdigit(palabra[i])) {
            (*cantidadDigitos)++;
        }
    }
    return strlen(palabra);
}
