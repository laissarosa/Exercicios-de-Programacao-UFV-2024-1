#include <stdio.h>
#include <locale.h>

void exibir () {
    setlocale (LC_ALL, "portuguese");
    printf (" ================================== \n +Programação (SIN110)+ \n +---------------------------------------------------------+ \n +Universidade Federal de Viçosa+ \n +Campus Rio Paranaiba+ \n ================================== \n ");
}
int main () {

exibir();

return 0;
}

