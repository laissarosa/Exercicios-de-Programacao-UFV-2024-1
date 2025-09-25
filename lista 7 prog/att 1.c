#include <stdio.h>
#include <stdlib.h>
#include <time.h>

sortear () {
    return rand()%2;
}
int main () {
    srand (time(NULL));
int i, sorteio, cont_cara=0, cont_coroa=0;

for (i=0; i<100; i++){
    sorteio=sortear ();
    if (sorteio==0)
        cont_cara++;
    else
        cont_coroa++;
}

    printf ("CARA %d , COROA %d", cont_cara, cont_coroa);

return 0;
}


