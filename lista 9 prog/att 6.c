#include <stdio.h>
#include <stdlib.h>

int main () {
 int cont_zeros=1, i;
 int *ptr = (int*)calloc(500,sizeof(int));

 if (ptr== NULL) {
    printf ("Nao foi possivel alocar memoria! \n");
    exit (1);
     }
    ptr[5] = 1;

for (i=0; i<500; i++) {
    if (ptr[i] != 0)
        cont_zeros = 0;
        break;
}

if (cont_zeros == 1) {
    printf ("Correto! \n ");
}
 else
printf ("Incorreto! \n ");

for (i=0; i<500; i++) {
    ptr[i]=i;
}
for (i=0; i<500; i++) {
    printf ("%d ", ptr[i]);
}

for (i=499; i>489; i--) {
     printf ("%d ", ptr[i]);
}

free (ptr);
return 0;
}
