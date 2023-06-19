/*89- Diseñar un programa en C para calcular el cubo de los números del 1 al 5 utilizando una
función definida por el usuario para realizar el cálculo del cubo. El prototipo de la función
es el siguiente:
int cubo (int base);*/
#include<stdio.h>
int cubo(int base);

int main(){
    int numero;

    for (numero= 1; numero <= 5; numero++)
    {
        printf("el cubo del numero %d es: %d\n", numero, cubo(numero));
    }
    

    return 0;
}
int cubo(int base){
    int potencia;
    potencia = base * base * base;
    return potencia;
}