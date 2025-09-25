
#include <stdio.h>

int main () {
int mat[5][5];
int i,j,soma;

for (i=0; i<5;i++) {
    for (j=0;j<5;j++) {
        printf ("Entre com mat [%d] [%d] \n", i,j);
        scanf ("%d", &mat[i] [j]);
    }
}

//
for (i=0; i<5;i++) {
    for (j=0;j<5;j++) {
            if (i+j==4) {
                printf ("%d \n", mat[i][j]);
                soma+=mat[i][j];
            }

    }
}


printf (" Soma da diagonal secundaria: %d", soma);


return 0;
}
