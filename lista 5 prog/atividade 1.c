#include <stdio.h>

int main () {

int i,j;
int matriz[4][4];

for (i=0;i<4;i++) {
    for (j=0;j<4;j++) {
        printf ("Entre com matriz [%d][%d] : \n\n" ,i,j);
        scanf ("%d", &matriz[i][j]);
    }
}

for (i=0;i<4;i++) {
    for (j=0;j<4;j++) {
        printf ("%d ", matriz[i][j]);
    }
    printf ("\n");
}
printf ("\n\n");

for (i=0;i<4;i++) {
    for (j=0;j<4;j++) {
            if (matriz[i][j]%2==0)
        printf ("%d %d \n", i,j);
    }

}
return 0;
}
