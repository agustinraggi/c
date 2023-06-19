/*66- Escribir un programa que ingrese 10 números enteros, los cargue en un arreglo
unidimensional, busque el mayor de ellos, calcule el promedio y muestre:
LOS NÚMEROS INGRESADOS SON : ...................
EL MAYOR DE ELLOS ES: ....................................
SU PROMEDIO ES : ............................................*/
#include<stdio.h>

int main(){
    int vector[10],  i, maximo, suma=0;
    float promedio;
    
    for (i = 0; i < 10; i++)
    {
        printf("introduzca el valor del nro:%d ",i);
        scanf("%d",&vector[i]);
    }
    
    //calcular numero mayor
    maximo = vector[0];
    for(i=1; i<10; i++)
    {
        if(vector[i]> maximo)
        maximo=vector[i];
    }


    //calcular suma
    for (i = 0; i <= 10; i++)
    {
        suma= suma + vector[i];
        promedio = suma / (float) 10;
    }

    printf("los numeros ingresados son: \n");
    for(i=0; i<10; i++)  printf("%d  ",vector[i]);
    {
       
        printf("\n el numero mayor de todos los ingresados es: %d\n",maximo);
        printf("el promedio es:%5.2f \n",promedio);
        return 0;
        //system("pause");
    }
    return 0;
    //system("pause");
}