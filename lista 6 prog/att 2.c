#include <stdio.h>

struct sEndereco {
    char rua[20],cidade[20],estado[3];
    int num,CEP;
};

int main () {
struct sEndereco end;


printf ("Entre com o nome da rua: \n");
gets (end.rua);

printf ("Entre com o numero da casa: \n");
scanf ("%d" , &end.num);

printf ("Entre com o nome da cidade: \n");
fflush (stdin);
gets (end.cidade);

printf ("Entre com o estado: \n");
gets (end.estado);

do {
    printf ("Entre com o CEP: \n");
    scanf ("%d" , &end.CEP);
} while (end.CEP<0);

printf (" \n %s \n %d \n %s \n %s \n %d \n" , end.rua, end.num, end.cidade, end.estado, end.CEP);

return 0;
}

