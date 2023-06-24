#include <stdio.h>

int main(){
int x,y;

   printf("%d\n",!(3>3 && 5!=4 || 9 == 9)); /* la primera parte 3>3 es falsa y segunda es verdadera y 
   como la primera expresion me da falso y despues el 9 si es igual a 9 entonces es verdadero y
   el verdadero se antenpodria sobre el falso de la primera negacion pero al tener el ! seria todo falso */ 
   printf("%d\n",!(7>8) && 7>8 || 7>8 );
   printf("%d\n", 13/13*2*5 + 5%2);// se divide en dos la primera parte da 10 y la segunda 1 por el resto de la division 
   printf("%d\n", x =(y=3, y+1));

   return 1;
} 