#include <stdio.h>
#include <ctype.h>

int main(void){
  char acao = 0;
  int cont = 0;
  float compra = 0, venda = 0, lucrototal = 0, lucro1000 = 0, lucro200 = 0;
 
 

  for(cont = 1; cont != 0; cont ++){
    printf("\nDigite o tipo da acao numero %d: ", cont);
    scanf(" %c", &acao);
    acao = toupper(acao);

    if(acao == 'F'){
      printf("Digite o valor de compra da acao: R$");
      scanf("%f", &compra);
    
      printf("Digite o valor de venda da acao: R$");
      scanf("%f", &venda);

      lucrototal = lucrototal + (venda - compra);

      if(venda - compra > 1000){
        lucro1000 ++;

      }else if(venda - compra < 200){
        lucro200 ++;

      }

      printf("Lucro da acao %c: R$%.2f", acao, venda - compra);
      
      break;

    }else{
    printf("Digite o valor de compra da acao: R$");
    scanf("%f", &compra);
    
    printf("Digite o valor de venda da acao: R$");
    scanf("%f", &venda);

    lucrototal = lucrototal + (venda - compra);
    
    if(venda - compra > 1000){
      lucro1000 ++;

    }else if(venda - compra < 200){
      lucro200 ++;
        
    }

    printf("Lucro da acao %c: R$%.2f", acao, venda - compra);
    
    }
  }

  printf("\nNumero de acoes com lucro maior que 1000 reias: %.0f", lucro1000);
  printf("\nNumero de acoes com lucro menor que 200 reias: %.0f", lucro200);
  printf("\nLucro total da empresa: R$%.2f", lucrototal);

  return (0);

  }
