/*41- Ingresar n números y calcular su media. media = (nromayor + nromenor) / 2.
*/

#include <stdio.h>

int main(){
    int n, media,numMayor, numMenor ;

    printf("ingrese un numero o 0 para finalizar ");
    scanf("%d",&n);
    numMayor=n;
    numMenor=n;
    while (n != 0)
    {
        scanf("%d",&n);
        if (n>numMayor)
        {
            numMayor=n;
        }
        else if (n<numMenor && n != 0)
        numMenor=n;
    }
    media = (numMayor + numMenor)/2;
    printf("la media del numero es %d ",media);


    system("pause");
}