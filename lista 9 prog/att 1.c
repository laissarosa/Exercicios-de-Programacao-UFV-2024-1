#include <stdio.h>
#include <stdlib.h>

struct sRegistro {
    char sobrenome[10];
    int matricula, ano_nasc;
};

int main () {

int num_alunos, i;

printf ("Entre com o numero de alunos: \n");
scanf ("%d", &num_alunos);

struct sRegistro *registro = ( struct sRegistro*)malloc (num_alunos*sizeof(struct sRegistro));
    if (registro == NULL) {
        printf ("Nao foi possivel alocar memoria!");
        return 1;
    }


for (i=0; i<num_alunos; i++) {
    printf ("Entre com o sobrenome do aluno %d: \n", i+1);
    fflush (stdin);
    gets (registro[i].sobrenome);

    printf ("Entre com a matricula do aluno %d: \n", i+1);
    scanf ("%d", &registro[i].matricula);

    printf ("Entre com o ano de nascimento do aluno %d: \n", i+1);
    scanf ("%d", &registro[i].ano_nasc);
}

for (i=0; i<num_alunos; i++) {
    printf ("DADOS DO ALUNO %d: \n %s \n %d \n %d \n", i+1, registro[i].sobrenome, registro[i].matricula, registro[i].ano_nasc);
}

 free (registro);
return 0;
}
