#include <stdio.h>

int main (void){
  float cont, idade, altura, peso, idade18, idadestime1, idadestime2, alturastotais, peso80;

  for(cont = 1; cont <= 11; cont ++){
    printf("Digite a idade, a altura (m) e o peso (kg) do jogador %g do time 1:\n", cont);
    scanf(" %f %f %f", &idade, &altura, &peso);

    
    if (idade < 18){
      idade18 ++;

    }

    idadestime1 = idadestime1 + idade;

    alturastotais = alturastotais + altura;

    if (peso > 80){
      peso80 ++;

    }
        
  }

  for(cont = 1; cont <= 11; cont ++){
    printf("Digite a idade, a altura (m) e o peso (kg) do jogador %g do time 2:\n", cont);
    scanf(" %f %f %f", &idade, &altura, &peso);

    
    if (idade < 18){
      idade18 ++;

    }

    idadestime2 = idadestime2 + idade;

    alturastotais = alturastotais + altura;

    if (peso > 80){
      peso80 ++;

    }
        
  }
    
  printf("\nJogadores com menos de 18 anos: %.2g", idade18);
  
  printf("\nMedia das idades dos jogadores do time 1 e 2, respectivamente: %.2g e %.2g", idadestime1 / 11, idadestime2 / 11);
  
  printf("\nMedia da altura de todos os jogadores: %.2g", alturastotais / 22);
  
  printf("\nPorcentagem de jogadores com mais de 80 kg no campeonato: %.2g por cento", peso80 * 100 / 22);
    
    
    return (0);
}
