/*Escribe un programa que borre la pantalla y escriba en la primera línea su nombre y en la
segunda su apellido:*/

#include<stdio.h>


int main(){

 int fecha_nac,edad;

    puts("Agustin"); //esta funcion puts ya viene incorporado el salto en linea
    puts("Raggi");

    printf("ingrese el a%co de nacimiento:",164);
    scanf("%d",&fecha_nac); //en el scanf si ponemos ^ nos dejaria poner espacios seria asi scanf("%[^\n]s",cadena);
    printf("ingrese su edad:");
    scanf("%d", &edad);
    



    printf("agustin raggi nacio %d y tiene %d a%cos \n",fecha_nac,edad,164);/*se pone 
    .2 para restringir cuantos lugares queres ver despues de la coma */
    
    system("pause");
    return 1;
}