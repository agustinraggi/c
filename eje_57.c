/*57- Escribir un programa que genere y muestre en pantalla la tabla ASCII.*/
#include <stdio.h>

int main() {

    printf("Tabla ASCII\n");
    printf("-----------\n");
    printf("Dec\tChar\n");

    for (int i = 0; i <= 127; i++) {
        printf("%d\t%c\n", i, i);
    }

    system("pause");
    return 0;
}