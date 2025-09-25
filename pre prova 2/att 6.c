#include <stdio.h>

int main () {

int mat [5][4];
int i, j, soma[1][4];

for (i=0;i<5;i++) {
    for (j=0;j<4;j++){
            if (i==0 && j<4) {
        printf ("Entre com a matricula: \n");
        scanf ("%d", &mat [i][j]);
            }
            else if (i==1 && j<4) {
                printf ("Entre com a media das provas: \n");
                scanf ("%d", &mat[i][j]);
            }
            else if (i==2 && j<4) {
                printf ("Entre com a media dos trabalhos: \n");
                scanf ("%d", &mat[i][j]);
            }
            else if (i==3 && j<4) {
                for (i=0;i<4;i++) {
                    for(j=0;j<4;j++) {
                   soma[i][j]+=mat[i][j];
                    }
                }
            }

    }



}


return 0;
}
