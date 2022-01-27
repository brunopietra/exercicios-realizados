#include <stdio.h>

int main (void){
  int cont;
  float idade, peso, mfaixaetaria1, mfaixaetaria2, mfaixaetaria3, mfaixaetaria4;

  mfaixaetaria1 = 0;
  mfaixaetaria2 = 0;
  mfaixaetaria3 = 0;
  mfaixaetaria4 = 0;

  for(cont = 1; cont <= 15; cont ++){
    printf("Digite a idade e o peso da pessoa %d:\n", cont);
    scanf(" %f %f", &idade, &peso);

    if (idade >=1 && idade <= 10){
      mfaixaetaria1 = mfaixaetaria1 + peso;

    }else if (idade >=11 && idade <= 20){
      mfaixaetaria2 = mfaixaetaria2 + peso;
      
    }else if (idade >=21 && idade <= 30){
      mfaixaetaria3 = mfaixaetaria3 + peso;
      
    }else if (idade >= 31){
      mfaixaetaria4 = mfaixaetaria4 + peso;
      
    }else{
      printf("Idade invalida\n");
    }

    if (peso <= 0){
      printf("Peso invalido\n");

    }

    
  }
  
  printf("\nPeso medio da faixa etaria de 1 a 10 anos: %.2g", mfaixaetaria1 / 15);

  printf("\nPeso medio da faixa etaria de 11 a 20 anos: %.2g", mfaixaetaria2 / 15);

  printf("\nPeso medio da faixa etaria de 21 a 30 anos: %.2g", mfaixaetaria3 / 15);

  printf("\nPeso medio da faixa etaria acima de 31 anos: %.2g", mfaixaetaria4 / 15);
        
    
    return (0);
}
