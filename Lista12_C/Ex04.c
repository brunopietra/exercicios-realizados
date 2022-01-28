#include <stdio.h>

#define hab 3

struct habitantes
{
    char sexo[2];
    float altura;
    int idade;
    char cOlhos;

};

int main(){
    struct habitantes p[hab];
    float mediaM160 = 0, x = 0, percHomens;
    int menorIdade = 0, pDelta = 0;

    for(int c = 0; c < hab; c++){
        print("Digite o sexo da pessoa %d [M/F]: ", c+1);
        scanf(" %s", &p[c].sexo);

        print("Digite a altura da pessoa %d [m]: ", c+1);
        scanf(" %g", &p[c].altura);

        print("Digite a idade da pessoa %d: ", c+1);
        scanf(" %d", &p[c].idade);

        print("Digite a cor dos olhos da pessoa %d [Verde = V | Castanho = C | Azul = A]: ", c+1);
        scanf(" %s", &p[c].cOlhos);

        if(p[c].altura > 1.6 && p[c].cOlhos == 'C'){
            mediaM160 += p[c].idade;
            x++;

        }

        if(p[c].idade > menorIdade){
            menorIdade = p[c].idade;
            
        }

        if((p[c].sexo == 'F' && p[c].idade >= 20 && p[c].idade <= 45) || (p[c].cOlhos == 'V' && p[c].altura < 1.7)){
            pDelta++;

        }

        if(p[c].sexo == 'M'){
            percHomens++;

        }

    }

    mediaM160 = mediaM160 / x;

    percHomens = percHomens * (100 / hab);

    printf("Resposta da letra A: %g", mediaM160);
    printf("Resposta da letra B: %d", menorIdade);
    printf("Resposta da letra C: %d", pDelta);
    printf("Resposta da letra D: %g", percHomens);

}