#include <stdio.h>

struct manic
{
    char nome[20];
    int pe;
    int mao;
    int podologia;
    float salario;
};

int main(){
    struct manic manic[3];

    FILE *file;
    file = fopen("Faturamento.txt", "w");

    for(int c = 0; c < 3; c++){
        printf("\nDigite o nome da manicure %d: ", c+1);
        scanf(" %s", &manic[c].nome);

        printf("Digite quantos pes a manicure %d fez: ", c+1);
        scanf(" %d", &manic[c].pe);

        printf("Digite quantas maos a manicure %d fez: ", c+1);
        scanf(" %d", &manic[c].mao);

        printf("Digite quantas podologias a manicure %d fez: ", c+1);
        scanf(" %d", &manic[c].podologia);

        manic[c].salario = ((manic[c].pe * 15) + (manic[c].mao * 20) + (manic[c].podologia * 30)) * 0.3;

    }


    for(int c = 0; c < 3; c++){
        fprintf(file, "\n\nNome da manicure: %s\n ", manic[c].nome);
        fprintf(file, "Salário: R$%.2f", manic[c].salario);

    }
}

