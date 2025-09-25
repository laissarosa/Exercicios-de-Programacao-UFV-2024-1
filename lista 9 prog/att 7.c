#include <stdio.h>
#include <math.h>

int hip_fat (int n) {
    if (n==1)
        return 1;
    else
        return pow(n,n)*hip_fat (n-1);
}

int main () {
    int num;

    do {
        printf ("Entre com o numero para calcular o hiperfatorial: \n");
        scanf ("%d", &num);
    } while (num<0);

    printf ("%d" , hip_fat(num));

return 0;
}
