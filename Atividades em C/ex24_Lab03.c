#include <stdio.h>
#include <ctype.h>

int main (void){
  char sexo, olho, cabelo, continuar;
  float masc = 0, fem = 0;
  float idade = 0, idadet = 0, mediaidade = 0; 
  float loiroverde = 0; 
  float altura = 0, alttotal = 0, mediaaltura = 0;
  float peso = 0, pesototal = 0, mediapeso = 0;
  
  for(int i = 1; i >= 0; i ++){
    printf("\nSexo (M/F): ");
    scanf(" %c", &sexo);
    sexo = toupper(sexo);
    
    if (sexo == 'M'){
      masc ++;

    }else if(sexo == 'F'){
      fem ++;

    }else{
      printf("Sexo invalido");
      
    } 
    printf("\nCor dos olhos (A/V/C): ");
    scanf(" %c", &olho);
    olho = toupper(olho);
    
    
    printf("\nCor dos cabelos (L/C/P): ");
    scanf(" %c", &cabelo);
    cabelo = toupper(cabelo);
     
    if (olho == 'V' && cabelo == 'L'){
      loiroverde ++;

    }
    
    printf("\nIdade: ");
    scanf("%f", &idade);
    idadet += idade;
    mediaidade = idadet / i;
   
  

    printf("\nAltura (m): ");
    scanf("%f", &altura);
    alttotal += altura;
    mediaaltura = alttotal / i;
   
    
    printf("\nPeso (kg): ");
    scanf("%f", &peso);
    pesototal += peso;
    mediapeso = pesototal / i;

    printf("\nContinuar (S/N):");
    scanf(" %c", &continuar);
    continuar = toupper(continuar);

    if(continuar == 'N'){
      break;
      
    }
  }
   

  printf("Porcentagem de homens e de mulheres: %.2f%% e %.2f%%\n", masc * 100 / (masc + fem), fem * 100 / (masc + fem));
  printf("Pessoas que tem cabelo loiro e olhos verdes: %g\n", loiroverde);
  printf("A media das idades sao: %g\n", mediaidade);
  printf("A media das alturas sao: %g m\n", mediaaltura);
  printf("A media dos pesos sao: %g kg\n", mediapeso);
  
  return (0);

}


