/*56- Escribir un programa que solicite el ingreso de un número entero y a partir de él, genere
una cuenta regresiva hasta cero, mostrando los sucesivos valores hasta el último luego
de lo cual emitirá un pitido.*/
#include<stdio.h>

int main(){
    int x;
    
    printf("ingrese un numero mayor a 0: ");
    scanf("%d",&x);

    while (x>0)
    {
        printf("-%d-",x);
        x--;
    }
    


    system("pause");
    return 1;
}