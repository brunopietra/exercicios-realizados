#include <stdio.h>

#define mes 12


int main(){
  float precosP1[2], precosP2[2], quantidade[mes][2], lucroTotal = 0;
  char meses[mes][20] = {"janeiro", "fevereiro", "marco", "abril", "maio",
"junho", "julho", "agosto", "setembro", "outubro", "novembro",
"desembro"};


  printf("Digite o preco de fabricacao do produto 1: R$");
  scanf("%g", &precosP1[0]);
  printf("Digite o lucro recebido pelo produto 1: R$");
  scanf("%g", &precosP1[1]);

  printf("Digite o preco de fabricacao do produto 2: R$");
  scanf("%g", &precosP2[0]);
  printf("Digite o lucro recebido pelo produto 2: R$");
  scanf("%g", &precosP2[1]);

  printf("\n");

  for(int m = 0; m < mes; m++){
    printf("Unidades produzidas do produto 1, no mes de %s: ",  meses[m]);
    scanf("%g", &quantidade[m][0]);

    printf("Unidades produzidas do produto 2, no mes de %s: ",  meses[m]);
    scanf("%g", &quantidade[m][1]);
    
  }

  FILE *file;
  file = fopen("Controle.txt", "w");

  
 for(int m = 0; m < mes; m++){
    fprintf(file, "Custos do produto 1 em %s: R$%.2f\n ", meses[m], precosP1[0] * quantidade[m][0]);
    fprintf(file, "Lucro com a venda do produto 1 em %s: R$%.2f\n\n", meses[m], precosP1[1] * quantidade[m][0]);

    fprintf(file, "Custos do produto 2 em %s: R$%.2f\n", meses[m], precosP2[0] * quantidade[m][1]);
    fprintf(file, "Lucro com a venda do produto 2 em %s: R$%.2f\n\n", meses[m], precosP2[1] * quantidade[m][1]);
    
    lucroTotal += (precosP1[1] * quantidade[m][0]) + (precosP2[1] * quantidade[m][1]);
  }

  fprintf(file, "\n\nLucro total no ano: R$%.2f", lucroTotal);


  fclose(file);

  return(0);
}
