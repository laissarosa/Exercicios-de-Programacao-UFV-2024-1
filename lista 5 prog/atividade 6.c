
#include <stdio.h>
int main () {
    int mat[5][2];
    int i,j, num2=0,num3=0,num5=0;

    for (i=0;i<5;i++) {
        for (j=0;j<2;j++){
            printf ("Entre com mat[%d][%d]: \n", i,j);
            scanf ("%d", &mat[i][j]);
            if (mat[i][j]<0 || mat[i][j]>9) {
                    printf ("Valor invalido! \n");
                    j--;
                }
        }
    }

for (i=0;i<5;i++) {
    for (j=0;j<2; j++) {
            if (mat[i][j]==2) {
            num2++;}
            else if (mat[i][j]==3){
                num3++;
            } else if (mat[i][j]==5) {
            num5++;}
    }
}

printf ("Quantidade de numeros 2: %d \n Quantidade de numeros 3: %d \n Quantidade de numeros 5: %d \n", num2,num3,num5);

return 0;
}
