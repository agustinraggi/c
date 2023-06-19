/*79- Declarar un tipo de estructura de nombre alumnos para almacenar la siguiente
información:
· nombre del alumno char[20]
· nº de legajo int[5]
· domicilio char[15]
· turno char
*/
#include <stdio.h>
#include <string.h>

struct alumno {
    char nombre[20];
    char domicilio[20];
    char turno;
    int num_legajo;
};

int main() {
    struct alumno alu[300];

    strcpy(alu[0].nombre, "Agustin Raggi");
    alu[0].num_legajo = 50786;
    strcpy(alu[0].domicilio, "pellegrini 1111");
    alu[0].turno = 'M';

    printf("Nombre: %s\n", alu[0].nombre);
    printf("Legajo: %d\n", alu[0].num_legajo);
    printf("Domicilio: %s\n", alu[0].domicilio);
    printf("Turno: %c\n", alu[0].turno);

    return 0;
}
