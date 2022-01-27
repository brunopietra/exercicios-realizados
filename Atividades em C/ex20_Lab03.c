#include <stdio.h>

int main(void){
  int opcao, cont;
  float num1, num2, num3, peso1, peso2, peso3;
  
  for(cont = 1; cont != 0; cont ++){
    
    printf("\n\nDigite a opcao desejada:\n");
    printf("Media aritmetica (1)\nMedia ponderada (2)\nSair(3)\n\n");
    scanf("%d", &opcao);
    
    if (opcao == 1){
      printf("\nDigite dois numeros:\n");
      scanf("%f %f", &num1, &num2);
      
      printf("Media aritmetica: %.2f", (num1 + num2)/ 2);

    }
    else if (opcao == 2){
      printf("\nDigite uma nota e seu peso:\n");
      scanf("%f %f", &num1, &peso1);
      printf("Digite outra nota e seu peso:\n");
      scanf("%f %f", &num2, &peso2);
      printf("Digite outra nota e seu peso:\n");
      scanf("%f %f", &num3, &peso3);

      printf("Media ponderada: %.2f", ((num1 * peso1) + (num2 * peso2) + (num3 * peso3)) / (peso1 + peso2 + peso3));
    }
    else if (opcao == 3){
      break;

    }
    else{
      printf("\nOpcao invalida\n");

    }
  }

  return (0);

  }
