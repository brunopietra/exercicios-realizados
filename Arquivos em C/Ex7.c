#include <stdio.h>
int main(){
    FILE *arq;
    int cont = 0;
    char var;

    arq = fopen("arq6.txt", "r");
    
    var = fgetc(arq);
    while (var!=EOF){
		if (var=='a' || var=='A'){
            cont++;
        }
        var = fgetc(arq);
	}
    
    printf("Numero de caracteres 'a' encontrados: %d", cont);
    
    fclose(arq);

    return(0);
}
