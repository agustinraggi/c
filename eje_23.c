/*23- Escribir los enunciados necesarios para ingresar por teclado las variables:
● x de tipo entera e y de tipo flotante, separadas por una , (coma)*/

#include<stdio.h>

int main(){
    int x;
    float y;

    printf("ingresar los valores de x e y separados por una coma: \n");
    scanf("%d,%f",&x,&y);
    printf("los numeros ingresados son %d y %.2f \n",x,y);

    system("pause");
    return 0;
}