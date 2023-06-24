/*31- Hacer el algoritmo que nos permita introducir un número por teclado y nos informe si es
positivo o negativo.*/

#include <stdio.h>

int main(){
    int num;
    printf("ingrese un numero ");
    scanf("%d",&num);
    if (num>0)
    {
        printf("el numero es positivo ");        
    }
    else if (num<=0)
    {
        printf("el numero es negativo o cero ");
    }
    return 0;
}