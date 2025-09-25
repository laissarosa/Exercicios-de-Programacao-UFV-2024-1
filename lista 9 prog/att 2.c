#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    int i,j;

    char **mat = (char**)malloc(10*sizeof(char*));
        if (mat== NULL) {
            printf ("Nao foi possivel alocar memoria! \n");
            return 1;
        }

    for (i=0; i<10; i++) {
        mat[i] = malloc(20*sizeof(char));
        if (mat[i]==NULL) {
            printf ("Nao foi possivel alocar memoria! \n");
            return 1;
        }
    }

    for (i=0; i<10; i++) {
            printf ("Entre com mat[%d]: \n", i+1);
           scanf ("%s", mat[i]);
    }

    for (i=0; i<10; i++) {
            printf ("%s \n", mat[i]);
    }

    for (i=0; i<10; i++) {
        free(mat[i]);
    }
    free(mat);
return 0;
}
