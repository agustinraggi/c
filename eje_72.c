/*72- Leer 20 números enteros (positivos y negativos) distintos de cero. Mostrar el vector
tal como fue ingresado y luego mostrar los positivos ordenados en forma decreciente
y por último mostrar los negativos ordenados en forma creciente.*/

#include<stdio.h>

int main(){


 int a[20], aux = 0, band = 0, i;
 printf("ingrese valores numericos");
 for (i = 0; i < 20; i++)
 {
     printf("ingrese el vector %d: \n",i + 1);
     scanf("%d",&a[i]);
     while (a[i] == 0)
     {
         printf("error ingrese un numero distinto a 0 \n");
         scanf("%d",&a[i]);
     }
 }
 printf("vector ingresado: ");
 for (i = 0; i < 20; ++i)
 {
  printf("%i \t %i ",i,a[i]);  
 }
 //ordenado de mayor a menor
 for (i = 0; i < 20 - 1; ++i)
 {
     for (int j = i + 1; j < 20; ++j)
     {
         if (a[i] < a[j])
         {
             aux = a[i];
             a[i] = a[j];
             a[j] = aux;
         }
         
     }  
 }
 for (i = 0; i < 20; ++i)
 {
    if (a[i]>0)
    {
        if (band == 0)
        {
            printf("numeros positivos descrecientes");
            band = 1;
        }
        printf("\n %i \t %i",i,a[i]);
    }else{
        printf("\n numeros negativos ");
        break;
    }
    
 }
 for (int j = 20 - 1; j >= i; j--)
 {
    printf("\n  %i \t %i",j,a[j]);
 }
}