#include <stdio.h>
#include <string.h>

struct sEndereco {
    char rua[25], bairro[25], complemento[25], cidade[15], estado[3], pais[15];
    int numero, cep;
};

struct telefone {
   int ddd, numTelefone;
};

struct data_de_aniversario {
    int dia, mes, ano;
};

struct sAgenda {
    char nome[15], e_mail[30], observacoes[50];
    struct sEndereco end;
    struct data_de_aniversario data;
    struct telefone ctt;
};

int main () {
    struct sAgenda agenda[100]; //tem que ser 100
    int i, mesNiver, diaNiver;
    char busc_nome[15];

    for (i=0; i<100; i++) {
        printf ("Entre com os dados da pessoa %d: \n",  i+1);
        printf ("NOME: ");
        gets (agenda[i].nome);
        printf ("E-MAIL: ");
        gets (agenda[i].e_mail);
        printf ("ENDERECO- RUA: ");
        gets (agenda[i].end.rua);
        printf ("NUMERO: ");
        scanf ("%d", &agenda[i].end.numero);
        printf ("COMPLEMENTO: ");
        fflush (stdin);
        gets (agenda[i].end.complemento);
        printf ("BAIRRO: ");
        gets (agenda[i].end.bairro);
        printf ("CEP: ");
        scanf ("%d", &agenda[i].end.cep);
        printf ("CIDADE: ");
        fflush (stdin);
        gets (agenda[i].end.cidade);
        printf ("ESTADO: ");
        gets (agenda[i].end.estado);
        printf ("PAIS: ");
        gets (agenda[i].end.pais);
        printf ("TELEFONE- DDD: ");
        scanf ("%d", &agenda[i].ctt.ddd);
        printf ("NUMERO: ");
        scanf ("%d", &agenda[i].ctt.numTelefone);
        printf ("DATA DE ANIVERSARIO- DIA: ");
        scanf ("%d", &agenda[i].data.dia);
        printf ("DATA DE ANIVERSARIO- MES: ");
        scanf ("%d", &agenda[i].data.mes);
        printf ("DATA DE ANIVERSARIO- ANO: ");
        scanf ("%d", &agenda[i].data.ano);
        printf ("OBSERVACOES: ");
        fflush (stdin);
        gets(agenda[i].observacoes);
    }

    printf ("Busque pelo primeiro nome: \n");
    gets (busc_nome);

    for (i=0; i<100; i++) {
            if (strcmp (agenda[i].nome, busc_nome) == 0) {
                printf ("DADOS DA PESSOA COM ESSE NOME: %s \n %s \n %s \n %d \n %s \n %s \n %d \n % s \n %s \n %s \n (%d)%d \n %d/%d/%d \n %s \n",agenda[i].nome, agenda[i].e_mail, agenda[i].end.rua, agenda[i].end.numero, agenda[i].end.complemento, agenda[i].end.bairro,agenda[i].end.cep, agenda[i].end.cidade, agenda[i].end.estado, agenda[i].end.pais, agenda[i].ctt.ddd, agenda[i].ctt.numTelefone, agenda[i].data.dia, agenda[i].data.mes,  agenda[i].data.ano, agenda[i].observacoes);
            }
    } // ate aqui tudo certo =)
    printf ("Busque pelo mes de aniversario: \n");
    scanf ("%d", &mesNiver);

    for (i=0; i<100; i++) {
        if (agenda[i].data.mes == mesNiver) {
             printf ("DADOS DA PESSOA NASCIDA NESSE MES: %s \n %s \n %s \n %d \n %s \n %s \n %d \n % s \n %s \n %s \n (%d)%d \n %d/%d/%d \n %s \n",agenda[i].nome, agenda[i].e_mail, agenda[i].end.rua, agenda[i].end.numero, agenda[i].end.complemento, agenda[i].end.bairro,agenda[i].end.cep, agenda[i].end.cidade, agenda[i].end.estado, agenda[i].end.pais, agenda[i].ctt.ddd, agenda[i].ctt.numTelefone, agenda[i].data.dia, agenda[i].data.mes,  agenda[i].data.ano, agenda[i].observacoes);
        }
    }

    printf ("Busque pelo dia e mes de aniversario: \n");
    scanf ("%d %d", &diaNiver, &mesNiver);

    for (i=0; i<100; i++) {
        if (agenda[i].data.dia == diaNiver && agenda[i].data.mes == mesNiver) {
             printf ("DADOS DA PESSOA NASCIDA EM %d/%d: %s \n %s \n %s \n %d \n %s \n %s \n %d \n % s \n %s \n %s \n (%d)%d \n %d/%d/%d \n %s \n",diaNiver, mesNiver, agenda[i].nome, agenda[i].e_mail, agenda[i].end.rua, agenda[i].end.numero, agenda[i].end.complemento, agenda[i].end.bairro,agenda[i].end.cep, agenda[i].end.cidade, agenda[i].end.estado, agenda[i].end.pais, agenda[i].ctt.ddd, agenda[i].ctt.numTelefone, agenda[i].data.dia, agenda[i].data.mes,  agenda[i].data.ano, agenda[i].observacoes);
        }
    }

return 0;
}
