#include <stdio.h>
#include <math.h>

int main (void){
    float cont, idade, faixa1, faixa2, faixa3, faixa4, faixa5, total;

    faixa1 = 0;
    faixa2 = 0;
    faixa3 = 0;
    faixa4 = 0;
    faixa5 = 0;
    
    for(cont = 1; cont <= 5; cont ++){
        printf("Digite a idade da pessoa %g: ", cont);
        scanf("%f", &idade);

        if (idade <= 15 && idade >0){
            faixa1 ++;

        }else if (idade > 15 && idade <= 30){
            faixa2 ++;

        }else if (idade > 30 && idade <= 45){
            faixa3 ++;

        }else if (idade > 45 && idade <= 60){
            faixa4 ++;

        }else if (idade > 60){
            faixa5 ++;

        }else{
            printf("Idade inválida");

        }
    }

    total = faixa1+ faixa2 + faixa3 + faixa4 + faixa5;

    printf("Faixa 1: %g \nFaixa 2: %g \nFaixa 3: %g \nFaixa 4: %g \nFaixa 5: %g", faixa1, faixa2, faixa3, faixa4, faixa5);
    printf("\nA porcentagem de pessoas na faixa 1, com relacao ao total, e %g por cento", faixa1 * 100/ total);
    printf("\nA porcentagem de pessoas na faixa 5, com relacao ao total, e %g por cento", faixa5 * 100/ total);

    
    return (0);
}
