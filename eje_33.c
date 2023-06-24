/*33- Escribir el algoritmo que me permita leer un número decimal que representa una
cantidad de grados Celsius y convierta dicho valor a la cantidad equivalente en
grados Fahrenheit. La salida del programa puede ser de la siguiente forma: 100
grados Celsius son 212 grados Fahrenheit.*/

#include <stdio.h>

int main(){
    float fahrenheit;
    int celsius;
    printf("ingresa la temperatura de hoy: ");
    scanf("%d",&celsius);
    fahrenheit = (celsius * 9/5) + 32;
    printf("la tempera en grados celsius es %d y en grados Fahrenheit es %0.2f",celsius,fahrenheit);


    return 1;
}