#include <stdio.h>
#include <math.h>

int main (void){
  int num, cont, numprimo;
  
  numprimo = 0;

  for(cont = 1; cont <= 10; cont ++){
    printf("Digite o valor do numero %d:\n", cont);
    scanf(" %d", &num);

    if (num == 2 || num == 3){
      numprimo ++;
    }
    
    if (num > 3 && num <= 9){
      if (num % 2 != 0 && num % 3 != 0){
        numprimo ++;
      }

    }

    if (num > 9){
      if (num % 2 != 0 && num % 3 != 0 && num % 4 != 0 && num % 5 != 0 && num % 6 != 0 && num % 7 != 0 && num % 8 != 0 && num % 9 != 0){
        numprimo ++;
      }
        
    }
  }
  
  printf("Numeros primos: %d", numprimo);
        
    
    return (0);
}
