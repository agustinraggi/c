/*45- Codificar en C un programa que lea 20 caracteres indique cuántas "a" se ingresaron,
cuantas "e, i, o, u"*/
#include <stdio.h>

int main() {
    char caracter;
    int contA = 0, contE = 0, contI = 0, contO = 0, contU = 0;

    for (int i = 0; i < 20; i++) {
        caracter = getchar();
        getchar();  // Captura el carácter de nueva línea '\n' después de leer el carácter ingresado

        switch (caracter) {
            case 'a':
                contA++;
                break;
            case 'e':
                contE++;
                break;
            case 'i':
                contI++;
                break;
            case 'o':
                contO++;
                break;
            case 'u':
                contU++;
                break;
            default:
                break;
        }
    }

    printf("Las palabras que contenian 'a' fueron %d\n", contA);
    printf("Las palabras que contenian 'e' fueron %d\n", contE);
    printf("Las palabras que contenian 'i' fueron %d\n", contI);
    printf("Las palabras que contenian 'o' fueron %d\n", contO);
    printf("Las palabras que contenian 'u' fueron %d\n", contU);
    
    return 0;
}
