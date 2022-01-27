#include <stdio.h>

int main (void){
  float cont, idade, altura, peso, idadestotais, peso90, altura150, idade1030, altura190;
    
    /*idadestotais = total das idades
    
    peso90 = pessoas com mais de 90 kg
    
    altura150 = pessoas com menos de 1.50 m

    idade1030 = pessoas entre 10 e 30 anos

    altura190 = pessoas com mais de 1.90 m*/

    
  for(cont = 1; cont <= 10; cont ++){
    printf("Digite a idade, a altura (m) e o peso (kg) da pessoa %g:\n", cont);
    scanf(" %f %f %f", &idade, &altura, &peso);

    idadestotais = idadestotais + idade;

    if (peso > 90){
      peso90 ++;

    }

    if (altura < 1.5){
      altura150 ++;

    }

    if (idade >= 10 && idade <= 30){
      idade1030 ++;
      if (altura > 1.9){
        altura190 ++;

      }
    }
        
  }
    
  printf("\nMedia das idades: %.2g", idadestotais / 10);
  
  printf("\nPessoas com mais de 90 kg: %g", peso90);
  
  printf("\nPessoas com menos de 1.50 m: %g", altura150);
  
  printf("\nPorcentagem de pessoas com mais de 1.9 m,dentre as que tem entre 10 e 30 anos: %g por cento", altura190 * 100 / idade1030);
    
    
    return (0);
}

