#include <stdio.h>
#include <string.h>

struct sEndereco {
    char rua[20], bairro[20], cidade[20], estado[3];
    int cep;
};

struct sCadastro {
    char nome[20], estado_civil[20], sexo[10];
    float salario;
    int identidade, idade;
    long int telefone, cpf;
    struct sEndereco end;
};

int main () {
    struct sCadastro cad[7];
    int i, maior_idade, MI, valor_id;
    char mida[20], masc[10]= "masculino";

    for (i=0; i<7; i++) {
        printf ("Entre com os dados da pessoa %d:\n NOME: ", i+1);
        fflush (stdin);
        gets (cad[i].nome);

        do {
        printf (" IDENTIDADE: ");
        scanf ("%d", &cad[i].identidade);
        } while (cad[i].identidade<=0);

       do {
            printf (" TELEFONE: ");
            scanf ("%ld", &cad[i].telefone);
        } while (cad[i].telefone<=0);

        printf (" ENDERECO-RUA: ");
        fflush (stdin);
        gets (cad[i].end.rua);

        printf (" BAIRRO: ");
        gets (cad[i].end.bairro);

        printf (" CIDADE: ");
        gets (cad[i].end.cidade);

        printf (" ESTADO: ");
        gets (cad[i].end.estado);

        do {
        printf (" CEP: ");
        scanf ("%d", &cad[i].end.cep);
        } while (cad[i].end.cep<=0);

        do {
        printf (" CPF: ");
        fflush (stdin);
        scanf ("%ld", &cad[i].cpf);
        } while (cad[i].cpf<=0);

        do {
            printf (" IDADE: ");
            scanf ("%d", &cad[i].idade);
        } while (cad[i].idade<=0);

        printf (" SALARIO: ");
        scanf ("%f", &cad[i].salario);

        printf (" ESTADO CIVIL: ");
        fflush (stdin);
        gets (cad[i].estado_civil);

        printf (" SEXO: ");
        gets (cad[i].sexo);

        }

        for (i=0; i<7 ;i++) {
           if (maior_idade<cad[i].idade) {
                maior_idade=cad[i].idade;
               MI=i;

            }
        }

        strcpy(mida,cad[MI].nome);
        printf (" Pessoa de maior idade: %s \n", mida);

        printf (" \n Pessoa(s) do sexo masculino: \n");

        for (i=0; i<7; i++) {

           if (strcmp (masc, cad[i].sexo)== 0) {
                printf ("%s \n", cad[i].nome);
            }
        }

        printf (" \n Pessoa(s) com salario maior que mil: \n");

            for (i=0; i<7; i++) {
            if (cad[i].salario > 1000.0) {
                printf ("%s \n", cad[i].nome);
            }
       }

             printf ("Entre com um valor: \n");
             scanf ("%d", &valor_id);

        for (i=0; i<7; i++) {
        if (valor_id == cad[i].identidade) {
            printf (" %s \n %d \n %ld \n %s \n %s \n %s \n %s \n %d \n %ld \n %d \n %.2f \n %s \n %s",
                     cad[i].nome, cad[i].identidade, cad[i].telefone, cad[i].end.rua, cad[i].end.bairro,
                     cad[i].end.cidade, cad[i].end.estado, cad[i].end.cep, cad[i].cpf, cad[i].idade,
                     cad[i].salario, cad[i].estado_civil, cad[i].sexo);
        }
        }

return 0;
}
