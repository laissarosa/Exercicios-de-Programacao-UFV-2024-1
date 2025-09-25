#include <stdio.h>

struct Shora {
    int horas,minutos,segundos;
};

int main () {
struct Shora horario;

printf ("Digite as horas: \n");
scanf ("%d", &horario.horas);
printf ("Digite os minutos: \n");
scanf ("%d", &horario.minutos);
printf ("Digite os segundos: \n");
scanf ("%d", &horario.segundos);

printf ("%d:%d:%d" , horario.horas , horario.minutos , horario.segundos);

return 0;
}
