#include <stdio.h>

int main (void){
  int cont;
  float idade, avaliacao, idadetotal, otimo, regular, bom;

  avaliacao = 0;
  regular = 0;
  bom = 0;

  for(cont = 1; cont <= 15; cont ++){
    printf("Digite a idade e a opiniao da pessoa %d sobre o filme:\n", cont);
    scanf(" %f %f", &idade, &avaliacao);

    if (avaliacao == 3){
      idadetotal = idadetotal + idade;
      otimo = otimo + 1;

    }

    if (avaliacao == 1){
      regular = regular + 1;
    }
    
    if(avaliacao == 2){
      bom = bom + 1;
    }

  }

  printf("\nMédia da idade de quem disse que o filme era otimo: %.1f", idadetotal / otimo);

  printf("\nPessoas que acharam o filme regular: %.2g", regular);

  printf("\nPorcentagem de pessoas que acharam o filme bom: %.2g por cento", bom * 100 / 15);

    return (0);
}
