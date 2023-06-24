/*43- De 10 números ingresados indicar cuántos son mayores que cero y cuántos son menores
que cero.
*/

#include <stdio.h>

int main (){

    int nro, mayor = 0, menor = 0;

    for (int i = 1; i <= 10; i++)
    {
        printf("ingrese 10 numeros ");
        scanf("%d",&nro);
        if (nro > 0)
        {
            mayor ++;
        }else if (nro < 0){
            menor ++;
        }   
    }
    printf("se ingresaron %d nro mayores a 0 \n",mayor);
    printf("se ingresaron %d nro menores a 0 \n",menor);


    


}