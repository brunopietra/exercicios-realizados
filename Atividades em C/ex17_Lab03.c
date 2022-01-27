#include <stdio.h>

int main (void){
  int cont, zero;
  float canal = 0, pessoas = 0, totalpessoas = 0, pescanal4 = 0, pescanal5 = 0, pescanal7 = 0, pescanal12 = 0;

  for(cont = 1; cont >= 0; cont ++){
    printf("\nDigite o canal que estava sendo assistido e o numero de pessoas que o assistiam na residencia %d:\n", cont);
    scanf(" %f %f", &canal, &pessoas);

    if (canal == 4 ||canal == 5 ||canal == 7 ||canal == 12){

      totalpessoas = totalpessoas + pessoas;

      if (canal == 4){
        pescanal4 = pescanal4 + pessoas;

      }else if (canal == 5){
        pescanal5 = pescanal5 + pessoas;
      
      }else if (canal == 7){
        pescanal7 = pescanal7 + pessoas;
      
      }else if (canal == 12){
        pescanal12 = pescanal12 + pessoas;
      
      }
    
      }else{
        printf("\nCanal invalido");

      }

      printf("\nDigite 0 para encerrar a entrada de dados, ou (1) para continuar a contagem: ");
      scanf("%d", &zero);

      if(zero == 0){
        break;
      }

  }

  printf("\nPorcentagem de pessoas que assistem ao canal 4: %.2f por cento", pescanal4 * 100 / totalpessoas);

  printf("\nPorcentagem de pessoas que assistem ao canal 5: %.2f por cento", pescanal5 * 100 / totalpessoas);

  printf("\nPorcentagem de pessoas que assistem ao canal 7: %.2f por cento", pescanal7 * 100 / totalpessoas);

  printf("\nPorcentagem de pessoas que assistem ao canal 12: %.2f por cento", pescanal12 * 100 / totalpessoas);

  return (0);
}