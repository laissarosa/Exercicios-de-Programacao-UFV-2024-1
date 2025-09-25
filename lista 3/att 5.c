#include <stdio.h>

int main () {
int n,i;
 printf ("Entre com o valor de n: \n");
 scanf ("%d", &n);

 for (i=1;i<=n;i++) {
    printf (" %d", i);
 }

  printf (" \n \n ");

 for (i=n;i>=1;i--) {
    printf (" %d", i);
 }
  return 0;
}
