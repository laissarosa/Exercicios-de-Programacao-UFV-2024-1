#include <stdio.h>

struct sAluno {
    char nome[20];
    int matricula;
    float notas[3], media;
};

int main () {
    struct sAluno aluno[5];
    int i,j,exibir;
    float menormed= 100.0, maiormed=0, maiorp1=0;

    for (i=0;i<5;i++) {
        printf ("Entre com a matricula do aluno %d: \n", i+1);
        scanf ("%d", &aluno[i].matricula);
        fflush (stdin);
        printf ("Entre com o nome do aluno %d: \n", i+1);
        gets (aluno[i].nome);

        for (j=0;j<3;j++) {
            printf ("Entre com as notas do aluno %d: \n", i+1);
            scanf ("%f", &aluno[i].notas[j]);
        }

    }

    for (i=0;i<5;i++) {
            aluno[i].media= (aluno[i].notas[0] + aluno[i].notas[1] + aluno[i].notas[2])/3;
    }

    for (i=0; i<5; i++){

        if (aluno[i].notas[0]>maiorp1) {
            maiorp1=aluno[i].notas[0];
            exibir=i;
            }
    }

    printf ("Aluno com maior nota da p1: %s \n", aluno[exibir].nome );

            for (i=0; i<5; i++) {
            if (aluno[i].media<menormed) {
                menormed= aluno[i].media;
                exibir=i;
            }
             }
    printf ("Aluno com menor media: %s \n", aluno[exibir].nome );

             for (i=0; i<5; i++) {
            if (aluno[i].media > maiormed){
                maiormed = aluno[i].media;
                exibir=i;
            }
             }

             printf ("Aluno com maior media: %s \n", aluno[exibir].nome );

        for (i=0; i<5; i++) {
            if (aluno[i].media >= 60.0) {
                printf ("aprovado \n");
          }  else {
                printf ("reprovado \n");
          }
    }

    return 0;
}
