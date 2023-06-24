/*29- Escribir un programa que lea el radio de un círculo y que imprima el diámetro del mismo,
su circunferencia y su área. Utilice el valor constante 3.14159 para “PI” y defina al mismo
como constante simbólica.*/

#include<stdio.h>
#include<math.h>
#define pi 3.14159

int main(){
    float radio,diametro,circuferencia,area;

    printf("introduce el radio de un circulo: \n");
    scanf("%f",&radio);
    diametro = radio * 2;
    circuferencia = diametro * pi;
    area = pi * pow(radio,2);
    printf("el diametro del circulo es: %5.2f \n",diametro);
    printf("la circuferencia del circulo es %5.f \n",circuferencia);
    printf("el area del circulo es: %5.2f \n",area);


    system("pause");
    return 1;
}