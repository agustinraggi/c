/*32- Hacer el algoritmo que nos permita introducir un número por teclado y nos informe si es
par o impar.*/

#include<stdio.h>

int main(){
    int num;
    printf("ingrese un numero ");
    scanf("%d",&num);
    if (num % 2 == 0)
    {
        printf("el numero es par");
    }
    else if(num%2 == 1 )
    {
        printf("el numero es impar");
    }
    


   return num;
}