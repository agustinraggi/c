/*Diseñar el algoritmo necesario para que habiéndose leído el valor de 2 variables
NUM1 y NUM2 se intercambien los valores de las variables, es decir que el valor
que tenía NUM1 ahora lo contenga NUM2 y viceversa.
*/
#include <stdio.h>

int main(){
    int num1,num2,aux;
    printf("ingresar el valor del primer numero \n");
    scanf("%d",&num1);
    printf("ingresar el valor del segundo numero \n\n");
    scanf("%d",&num2);
    aux=num1;
    num1=num2;
    num2=aux;
    printf("el valor de num1 es %d y el valor de num2 es %d ",num1,num2);

    system("pause");
    return 1;
}