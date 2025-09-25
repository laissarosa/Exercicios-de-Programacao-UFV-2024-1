#include <stdio.h>
#include <math.h>

int calculoKN (int k, int n) {

    if (n == 0)
        return 1;
    else
        return pow (k, n)*calculoKN(k , n-1);

}

int main () {
    int k1, n1;

    printf ("Entre com 2 numeros: \n");
    scanf ("%d %d", &k1 , &n1);

    printf ("Resultado: %d" , calculoKN (k1, n1));

return 0;
}
