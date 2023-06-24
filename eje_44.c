/*44- Leer sucesivamente de teclado, hasta que aparezca un número comprendido entre 1 y 5.
Desarrollar el algoritmo usando la función:
 a) getchar() b) scanf()*/

#include <stdio.h>

int main (){
int a = 0;

while (a < 1 || a > 5)
{
    a = getchar();
}
int b = 0;
while (b < 1 || b > 5)
{
    printf("ingrese un numero ");
    scanf("%d",&b);
}






}