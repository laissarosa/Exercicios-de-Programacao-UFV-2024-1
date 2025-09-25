#include <stdio.h>
#include <stdlib.h>

int main () {
    int i;
    char **p = (char**)malloc(10*sizeof(char*));

    for (i=0; i<10; i++) {
        p[i] = (char*)malloc(20*sizeof(char));
    }
        for (i=0; i<10; i++) {
            printf ("Entre com a palavra %d: \n", i+1);
            gets(p[i]);
        }

    for (i=0; i<10; i++) {
            printf ("%s \n", p[i]);
    }

    for (i=0; i<10; i++) {
        free (p[i]);
    }

    free (p);

return 0;
}
