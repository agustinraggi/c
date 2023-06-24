/*25- Escribir un programa que ingrese un carácter y muestre en pantalla el número
decimal que le corresponde en la tabla ASCII.
*/
#include<stdio.h>
int main(){
    char x;
    printf("ingrese un caracter para buscarla en la tabla ASCII:\n");
    scanf("%c",&x); //son dos maneras de hacerlo
    //x=getchar();
    system("cls");
    printf("el numero decimal de la tabla ASCII del caracter  %c  es %d \n\n ",x,x);

    system("pause");
    return 1;
}