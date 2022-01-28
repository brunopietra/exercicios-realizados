#include <stdio.h>

#define X 100

struct chapa
{
    char nome_chapa[20];
    char nome_rep[20];
    int nvotos;
};

int main(){
    struct chapa c1, c2;
    int voto;

    printf("Escreva o nome da chapa 1: ");
    scanf(" %s", &c1.nome_chapa);
    printf("Escreva o nome do representante da chapa 1: ");
    scanf(" %s", &c1.nome_rep);

    printf("\nEscreva o nome da chapa 2: ");
    scanf(" %s", &c2.nome_chapa);
    printf("Escreva o nome do representante da chapa 2: ");
    scanf(" %s", &c2.nome_rep);

    c1.nvotos = 0;
    c2.nvotos = 0;

    for(int c = 0; c < X; c++){
        printf("Digite o voto do aluno %d [chapa 1 = 1 || chapa 2 = 2]: ", c+1);
        scanf("%d", &voto);

        if(voto == 1){
            c1.nvotos++;

        }
        else if(voto == 2){
            c2.nvotos++;

        }
        else{
            printf("\nValor inválido. Voto incontabilizado.\n");

        }
    }

    if(c1.nvotos > c2.nvotos){
        printf("Chapa vencedora: %s \nRepresentante da Chapa: %s \nNumero de votos: %d", c1.nome_chapa, c1.nome_rep, c1.nvotos);

    }
    else if(c1.nvotos < c2.nvotos){
        printf("Chapa vencedora: %s \nRepresentante da Chapa: %s \nNumero de votos: %d", c2.nome_chapa, c2.nome_rep, c2.nvotos);

    }
    else{
        printf("Houve-se um empate entre chapas. Numero de votos para cada: %d", c1.nvotos);

    }
}