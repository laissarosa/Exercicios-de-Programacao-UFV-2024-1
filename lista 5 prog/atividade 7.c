#include <stdio.h>

int main () {
    int mat[2][5];
    int i, j,impar;

    for (i=0;i<2;i++) {
        for (j=0;j<5;j++) {
            printf ("Entre com mat[%d][%d]: \n" , i, j);
            scanf ("%d", &mat[i][j]);
        }
    }
for (i=0;i<2;i++) {
        for (j=0;j<5;j++) {
            if (mat[i][j]%2!=0) {
                printf ("%d ", mat[i][j]);
                impar ++;
            }
        }
    }

printf ("\n Quantidade de impares: %d \n", impar);

return 0;
}
