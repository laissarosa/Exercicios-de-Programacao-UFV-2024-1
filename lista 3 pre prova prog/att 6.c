#include <stdio.h>

int catalan(int n) {
    if (n == 0)
        return 1;
    else
        return (2*(2*n-1)*catalan(n-1))/(n+1);
}

int main () {
    int num;

    do {
    printf ("Entre com um numero: \n");
    scanf ("%d", &num);
    } while (num<0);

    printf ("%d", catalan(num) );

return 0;
}
