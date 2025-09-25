#include <stdio.h>

struct sData {
    int dia, mes, ano;
};

struct sEndereco {
    char rua[20], cidade[20], estado[3];
    int numero, CEP;
};

struct sPessoa {
    char nome[25], sexo[11];
    float peso;
    struct sData nascimento;
    struct sEndereco end;
};

int main () {

    struct sPessoa p;

    printf ("Entre com o nome: \n");
    fflush (stdin);
    gets (p.nome);
    printf ("Entre com o sexo: \n");
    gets (p.sexo);
    printf ("Entre com o peso: \n");
    scanf ("%f", &p.peso);
    printf ("Entre com o dia, mes e ano de nascimento: \n");
    fflush (stdin);
    scanf ("%d %d %d" , &p.nascimento.dia, &p.nascimento.mes, &p.nascimento.ano);
    printf ("Entre com o nome da rua: \n");
    fflush (stdin);
    gets (p.end.rua);
    printf ("Entre com o numero da casa: \n");
    scanf ("%d" , &p.end.numero);
    printf ("Entre com o nome da cidade: \n");
    fflush (stdin);
    gets (p.end.cidade);
    printf ("Entre com o estado: \n");
    gets (p.end.estado);
    do {
    printf ("Entre com o CEP: \n");
    scanf ("%d" , &p.end.CEP);
    } while (p.end.CEP<=0);

    printf (" \n %s \n %s \n %.2f \n %d/%d/%d \n %s \n %d \n %s \n %s \n %d", p.nome, p.sexo, p.peso, p.nascimento.dia, p.nascimento.mes, p.nascimento.ano, p.end.rua, p.end.numero, p.end.cidade, p.end.estado, p.end.CEP);

return 0;
}
