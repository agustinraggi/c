/*70- Leer dos vectores A y B de dimensión 10. Generar un tercer vector C de 10 elementos
donde la componente C[i] sea igual al mínimo valor de A[i] y B[j].
Mostrar los tres vectores.
*/

#include <stdio.h>

int main (){
    int a[10], b[10], c[10], i;
    printf("ingrese valor para a \n");

    for (i = 0; i < 10; i++)
    {
        scanf("%d",&a);
    }
    printf("ingrese valor para b \n");
    for (i = 0; i < 10; i++)
    {
        scanf("%d", &b);
    }
    printf("\n a \t b \t c \n");
    for (i = 0; i < 10; i++)
    {
        if (a[i]<b[i])
        {
            c[i] = a[i];
        }
        else
            c[i] = b[i];
        printf("%d \t %d \t %d \n",a[i],b[i],c[i]);
    }
    
    


}