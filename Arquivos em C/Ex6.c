#include <stdio.h>
int main(){
    FILE *arq = fopen("arq6.txt", "w");
    char text[50];

    printf("Digite uma frase (max: 50 caracteres):\n");
    scanf("%[^\n]s", &text);

    fputs(text, arq);
    
    fclose(arq);

    return(0);
}
