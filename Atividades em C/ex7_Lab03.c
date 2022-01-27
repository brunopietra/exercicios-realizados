#include <stdio.h>

int main (void){
    float cont, idade, altura, peso, idade50, altura1020, contaltura1020, peso40;
    
    /*idade50 = pessoas com mais de 50 anos
    
    altura1020 e contaltura1020: ajudam a calcular a media da altura das pessoas entre 10 e 20 anos
    
    peso40: ajuda a calcular a porcentagem das pessoas com menos de 40 anos*/

    
    for(cont = 1; cont <= 5; cont ++){
        printf("Digite a idade, a altura (m) e o peso (kg) da pessoa %g:\n", cont);
        scanf(" %f %f %f", &idade, &altura, &peso);

        if (idade > 50){
          idade50 ++;
          
        }

        if (idade >=10 && idade <= 20){
          altura1020 = altura1020 + altura;
          contaltura1020 ++;

        }

        if (peso < 40){
          peso40 ++;
        }
    }
    printf("\nPessoas com mais de 50 anos: %g", idade50);
    printf("\nMedia das alturas de pessoas entre 10 e 20 anos: %.2f", altura1020 / contaltura1020);
    printf("\nPorcentagem de pessoas com menos de 40 kg: %g por cento", peso40 * 100 / 5);
    
    
    return (0);
}
