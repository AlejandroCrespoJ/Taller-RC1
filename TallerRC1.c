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

    for (j = 0; j < 3; j++) {
            printf("Ingrese la nota de la asignatura %d: ", j + 1);
            scanf("%f", &notas[i][j]);

            while (notas[i][j] < 0 || notas[i][j] > 10) {
                printf("La nota debe estar entre 0 y 10: ");
                scanf("%f", &notas[i][j]);
            }
        }
    }

    printf("\nRESULTADOS POR ESTUDIANTE\n");

 for (i = 0; i < estudiantes; i++) {
        suma = 0;
        mayor = notas[i][0];
        menor = notas[i][0];

        for (j = 0; j < 3; j++) {
            suma = suma + notas[i][j];

            if (notas[i][j] > mayor) {
                mayor = notas[i][j];
            }

            if (notas[i][j] < menor) {
                menor = notas[i][j];

         }
        }

        promedio = suma / 3;

        printf("\nEstudiante %d\n", i + 1);
        printf("Promedio: %.2f\n", promedio);
        printf("Nota mayor: %.2f\n", mayor);
        printf("Nota menor: %.2f\n", menor);
    }
 
    printf("\nRESULTADOS POR ASIGNATURA\n");

    for (j = 0; j < 3; j++) {
        suma = 0;
        aprobados = 0;
        reprobados = 0;
        mayor = notas[0][j];
        menor = notas[0][j];

        for (i = 0; i < estudiantes; i++) {
            suma = suma + notas[i][j];






}
