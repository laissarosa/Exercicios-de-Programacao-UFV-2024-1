#include <stdio.h>

int main () {
int mat[3][3];
int i,j, maior=0, menor;

for(i=0;i<3;i++) {
    for (j=0;j<3;j++) {
        printf ("Entre com mat[%d][%d]: \n", i,j);
        scanf ("%d", &mat[i][j]);
        if (menor>mat[i][j]) {
            menor=mat[i][j];
        } else if (maior<mat[i][j]) {
        maior = mat[i][j];
        }
    }
}

printf ("Maior numero: %d: \n Menor numero: %d \n", maior, menor);

return 0;
}
