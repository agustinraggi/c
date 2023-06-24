/*39- Incrementar una variable entera j desde 0 hasta n y luego mostrar el resultado. Hacerlo
utilizando 3 bucles diferentes.*/

#include <stdio.h>
#include <stdlib.h>
int main (){

int n,j;

printf("ingresa un valor ");
scanf("%d",&n);

for (int j = 0; j <= n; j++)
{
    printf("perro \n");
}
j=0;
while (j<=n)
{
    printf("perro loco \n");
    j++;
}
do
{
    printf("%d",j);
    j++;
} while (j<=n);




}
