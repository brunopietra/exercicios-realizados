#include <stdio.h>
int main(){
    FILE *arq;
    int cont = 1;

    arq = fopen("arq5.txt", "w");
    
    while (cont < 11){
        fprintf(arq, "%i",cont);
        fputc('\n', arq);
        cont++;
    }
    fclose(arq);

    return(0);
}
