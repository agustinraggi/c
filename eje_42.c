/*42- Escribir el algoritmo necesario para calcular y mostrar el cuadrado de un número
ingresado por teclado. El número debe ser mayor que cero, en caso de error que aparezca
el mensaje "ERROR, el número debe ser mayor que cero". El programa termina su
ejecución cuando se ingresa un 0.
*/
#include <stdio.h>

int main (){
    int num,cuadrado;

    printf("ingrese un numero: ");
    scanf("%d",&num);

    while (num != 0)
    {
        while (num < 0)
        {
            printf("ERROR, el numero debe ser mayor que 0\n ingrese un numero: ");
            scanf("%d",&num);
        }
        cuadrado = num * num;
        printf("el cuadrado de %d  es %d: ",num,cuadrado);

        
        system("pause");
        system("cls");
        printf("ingrese un numero: ");
        scanf("%d",&num);
    }
    
    system("pause");

}