/*58- Ingresar un texto de caracteres utilizando la función getchar( ). Indicar la cantidad de
caracteres, palabras, y líneas que lo forman. Mostrar lo pedido con carteles aclaratorios.
Considerar como separadores de palabras válidos: espacio, tabulador y <enter> y tener
en cuenta que contar palabras no es contar cantidad de separadores.*/

#include <stdio.h>

int main(){
    int contc=0, contl=0, contp=0;
    char c,caracAnterior;

    printf("ingrese un texto: \n\n");
    c = getchar();
    while (c != EOF)
    {
        contc++;
        if (c == '\n')  contl++;

        if ((c == '\t' || c ==' ' || c == ',' || c == ';' || c == '.' || c == '\n') && caracAnterior != '\t' && caracAnterior != ' ' && caracAnterior != ',' && caracAnterior != ' ;' && caracAnterior != '\n' )
        {
            contp++;
        } 
        caracAnterior = c;
        c = getchar();
    }
    printf("caracteres= %d\n",contc);
    printf("lineas= %d\n",contl);
    printf("palabras= %d\n",contp);

    return 0;
    system("pause");
}