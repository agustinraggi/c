#include<stdio.h>

int main(){
    /*
    int a = 3 ;
    int * p; // asi se declara un puntero 
    int * p5;// asi se declara un puntero 

    p=&a;// le deamos el valor de a al puntero p
    p5=&a;// le deamos el valor de a al puntero p5

    printf("%p\n",&p);//mostramos dondo esta parado p
    printf("%p\n",&p5); // mostramos donde esta parado p5
    printf("%p\n",p);// vemos que direccion de memoria va a tener el a 
    printf("%p\n",p5);// vemos que direccion de memoria va a tener el a  el p y p5 tienen que coincidir 
    printf("%d\n",*p);//mostramos el valor que tendria en este caso a
    printf("%d\n",*p5);// mostramos el valor que tendria en este caso a
    *p=5;// le cambiamos el numero que apunto que ahora queremos que sea 5
    printf("%d\n",a);// va a mostrar que ahora a vale 5
    */
   //puntero con arreglo
   /*
   char texto[5]="hola";

   printf("%p\n",&texto[0]);
   printf("%p\n",&texto[1]);
   printf("%p\n",&texto[2]);
   printf("%p\n",&texto[3]);
   printf("%p\n",&texto[4]);

   printf("%p\n",texto);
   printf("%p\n",texto+1);
   printf("%p\n",texto+2);
   printf("%p\n",texto+3);
   printf("%p\n",texto+4);
    */
   
   
   char *nombre="Agustin";
   printf("%p\n",nombre);
   printf("%p\n",nombre+1);
   printf("%p\n",nombre+2);

   printf("%c",*nombre);
   printf("%c",*(nombre+1));
   printf("%c",*(nombre+2));
    
   


    return 0;
}