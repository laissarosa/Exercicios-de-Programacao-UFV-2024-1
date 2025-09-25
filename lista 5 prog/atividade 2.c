#include <stdio.h>

int main () {

int matriz [5][5];
int i, j;

for (i=0;i<5;i++) {
    for (j=0;j<5;j++) {
            printf ("Entre com os elementos da matriz[%d][%d] : \n", i,j);
    scanf ("%d", &matriz[i][j]);

    }
}
for (i=0;i<5;i++) {
    for (j=0;j<5;j++) {
            if (i==j)
            printf ("%d ", matriz[i][j]);

    }
}


return 0;
}
