  #include <stdio.h>
#include <stdlib.h>

int main () {
    int n, m, i, j;

    printf ("Entre com a quantidade de linhas: \n");
    scanf ("%d", &n);

    printf ("Entre com a quantidade de coluna: \n");
    scanf ("%d", &m);

    int **matriz = (int**)malloc(n*sizeof(int*));
    if (matriz == NULL) {
        printf ("Nao foi possivel alocar memoria! \n" );
        exit (1);
    }
    for (i=0; i<n; i++) {
        matriz[i] = (int*)malloc(m*sizeof (int));
        if (matriz[i] == NULL) {
            printf ("Nao foi possivel alocar memoria! \n");
            exit (1);
        }
    }

    int **transposta = (int**)malloc(n*sizeof(int*));
    if (transposta == NULL) {
        printf ("Nao foi possivel alocar memoria! \n");
        exit(1);
    }
    for (i=0; i<n; i++) {
        transposta[i] = (int*)malloc(m*sizeof(int));
        if (transposta[i] == NULL) {
            printf ("Nao foi possivel alocar memoria! \n");
            exit (1);
        }
    }

    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            printf ("Entre com os elementos da matriz [%d] [%d]: \n", i+1, j+1);
            scanf ("%d", &matriz[i][j]);
        }
    }

    for (i=0; i<n; i++) {
        for (j=0; j<m; j++){
            transposta[j][i] = matriz[i][j];
        }
    }

    printf (" \n MATRIZ NORMAL: \n");

     for (i=0; i<n; i++) {
        for (j=0; j<m; j++){
            printf ("%d ", matriz[i][j]);
        }
        printf ("\n");
    }

    printf (" \n MATRIZ TRANSPOSTA: \n");

     for (i=0; i<n; i++) {
        for (j=0; j<m; j++){
            printf ("%d ", transposta[i][j]);
        }
        printf ("\n");
    }

    for (i=0; i<n; i++) {
        free (matriz[i]);
    }
    free (matriz);

    for (i=0; i<n; i++) {
        free (transposta[i]);
    }
    free (transposta);

return 0;
}
