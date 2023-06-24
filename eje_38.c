/*38- Mostrar una tabla que contenga los valores de peso y costo, variando el peso desde 2
hasta 20 con un incremento de 6, si el costo mínimo es de $50 y se incrementa en $15 y
cada 6 kg. Utilizar un bucle for y constantes simbólicas donde se considere útil.*/

#include <stdio.h>
#define incremento_costo 15

int main (){
int costo=50;

    printf("PESO\t\tcosto\t\n");
    for (int peso = 2; peso <= 20; peso+=6)
    {
        costo += incremento_costo; 
       printf("%d\t\t",peso);
       printf("%d\t\n",costo);
        
    }
    


    return 0;
}