#include<stdio.h>

/*Calcular la nota de un estudinate que posee una nota de 60 puntos y un examen de 40 puntos
Decir si está aprobado o reprobado.
Un estudiante aprueba si su nota es mayor o igual a 70*/

int calcFinalSc(int score, int exam);

void valFinalSc(int score);

void pedirNotas();

int main(int argc, char const *argv[])
{
    pedirNotas();   
    return 0;
}

void pedirNotas(){
    int acumulado, examen, notafinal;
    printf("Dime el acumulado: \n");
    scanf("%d", &acumulado);
    printf("Dime la nota del examen: \n");
    scanf("%d", &examen);
    notafinal= calcFinalSc(acumulado, examen);
    printf("Nota final %d\n", notafinal);
    valFinalSc(notafinal);
}
int calcFinalSc(int score, int exam){
    return score + exam;
}

void valFinalSc(int score){
    if(score>= 70) printf("Aprobado...");
    else printf("Reprobado :(");
}