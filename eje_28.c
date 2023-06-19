/*28- Escribir un programa que ingrese un entero y muestre en forma tabulada el número, su
cuadrado y su cubo.
*/
#include<stdio.h>
#include<math.h>

int main(){
    int nro;
    // double cuadrado,cubo;

    printf("ingrese un numero: ");
    scanf("%d",&nro);
    //cuadrado =pow(nro,2); hace elevarlo a la 2
    //cubo = pow(nro,3); hace elevarlo a la 3

    printf("el cuadro del numero es: %d y el cubo del numero es: %d \n",nro*nro,nro*nro*nro);




    system("pause");
    return 1;
}