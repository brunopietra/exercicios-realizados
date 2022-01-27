#include <stdio.h>
#include <ctype.h>

int main (void){
    char variavel;
    float cont, tranzacao, V, P;

    V = 0;
    P = 0;
    
    for(cont = 1; cont <= 15; cont ++){
        printf("Digite o codigo e o valor da tranzacao %g:\n", cont);
        scanf(" %c %f", &variavel, &tranzacao);
        variavel = toupper(variavel);

        if (variavel == 'V' || variavel == 'P'){
          if (variavel == 'V'){
            V = V + tranzacao;

          }else if (variavel == 'P'){
            P = P + tranzacao;
          }

        }else{
            printf("Codigo invalido\n");

        }
    }
    printf("\nValor total das compras a vista: R$%.2f", V);
    printf("\nValor total das compras a prazo: R$%.2f", P);
    printf("\nValor total das compras efetuadas: R$%.2f", V + P);
    printf("\nValor da primeira prestacao do total das compras a prazo: R$%.2f", P / 3);
    
    return (0);
}
