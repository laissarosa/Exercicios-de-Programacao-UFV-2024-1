#include <stdio.h>
int main () {

float matriz[3][3], soma=0;
int i,j;

for (i=0;i<3;i++) {
    for (j=0;j<3;j++) {
        printf ("Entre com matriz [%d][%d]: \n", i,j);
        scanf ("%f", &matriz[i][j]);
        soma+=matriz[i][j];
    }
}
printf ("A media eh: %.1f \n", soma/9);

return 0;
}
