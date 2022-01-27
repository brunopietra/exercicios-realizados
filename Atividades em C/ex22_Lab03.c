#include <stdio.h>
#include <ctype.h>

int main(void){
  char opcao;
  int cont;
  float salario;
  
  for(cont = 1; cont != 0; cont ++){
    
    printf("\n\nDigite a opcao desejada:\n\n");
    printf("Aumento de 8 por cento(a)\nAumento de 11 porcento(b)\nAumento de R$450.00(c)\nSair do programa(d)\n\n");
    scanf(" %c", &opcao);
    
    opcao = toupper(opcao);
    
    if (opcao == 'A'){
      printf("\nDigite o salario do funcionario: R$");
      scanf(" %f", &salario);

      printf("Salario novo: R$%.2f", salario * 1.08);

    }
    else if (opcao == 'B'){
      printf("\nDigite o salario do funcionario: R$");
      scanf(" %f", &salario);

      printf("Salario novo: R$%.2f", salario * 1.11);
    }
    else if (opcao == 'C'){
      printf("\nDigite o salario do funcionario: R$");
      scanf(" %f", &salario);

      printf("Salario novo: R$%.2f", salario + 450);

    }
    else if (opcao == 'D'){
      break;

    }
    else{
      printf("\nOpcao invalida");

    }
  }

  return (0);

  }
