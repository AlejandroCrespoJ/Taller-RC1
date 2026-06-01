#include <stdio.h>

int main() {


 int estudiantes, i, j;
    float notas[50][3];
    float suma, promedio;
    float mayor, menor;
    int aprobados, reprobados;

    printf("Ingrese la cantidad de estudiantes: ");
    scanf("%d", &estudiantes);

    while (estudiantes <= 0 || estudiantes > 50) {
        printf("Cantidad incorrecta. Ingrese otra vez: ");
        scanf("%d", &estudiantes);
    }

    for (i = 0; i < estudiantes; i++) {
        printf("\nEstudiante %d\n", i + 1);




}
