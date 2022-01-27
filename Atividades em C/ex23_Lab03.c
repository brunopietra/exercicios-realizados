#include <stdio.h>
#include <ctype.h>

int main(void){
  char opcao;
  int cont;
  float salario, meses;
  
  for(cont = 1; cont != 0; cont ++){
    
    printf("\n\nDigite a opcao desejada:\n\n");
    printf("Novo salario(1)\nFerias(2)\nDecimo terceiro(3)\nSair(4)\n\n");
    scanf(" %c", &opcao);
    
    opcao = toupper(opcao);
    
    if (opcao == '1'){
      printf("\nDigite o salario atual do funcionario: R$");
      scanf(" %f", &salario);

      if (salario <= 210){
        printf("Salario novo: R$%.2f", salario * 1.15);

      }
      else if (salario <= 600){
        printf("Salario novo: R$%.2f", salario * 1.1);

      }
      else if (salario > 600){
        printf("Salario novo: R$%.2f", salario * 1.05);

      }
    
    }
    else if (opcao == '2'){
      printf("\nDigite o salario do funcionario: R$");
      scanf(" %f", &salario);

      printf("Valor a dar por suas ferias: R$%.2f", salario + salario / 3);

    }
    else if (opcao == '3'){
      printf("\nDigite o salario do funcionario: R$");
      scanf(" %f", &salario);
      printf("\nDigite o numero de meses trabalhados no ano: ");
      scanf(" %f", &meses);

      if (meses <= 12 && meses >= 1){
        printf("Decimo terceiro: R$%.2f", salario * meses / 12);

      }
      else{
        printf("Contagem invalida");

      }
    }
    else if (opcao == '4'){
      break;

    }
    else{
      printf("\nOpcao invalida");

    }
  }

  return (0);

  }
