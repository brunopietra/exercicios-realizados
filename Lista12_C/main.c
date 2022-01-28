#include <stdio.h>
#include <stdlib.h>
#include <string.h>

 typedef struct Empregado{
    int matricula;
    char nome[100];
    float salario;
 }Empregado;

int numeroEmpregados = 0;
void lerEmpregadosArquivo(Empregado VetorEmpregados[]);
void ListaCompleta(Empregado VetorEmpregados[]);
void strSplit(char *strTOsplit,char *strArr[], char *strSeparet,int nArr);
int main()
{
    Empregado VetorEmpregados[1000];
    lerEmpregadosArquivo(VetorEmpregados);
    ListaCompleta(VetorEmpregados);
    printf("Fim do programa!\n");
    return 0;
}
void strSplit(char *strTOsplit,char *strArr[], char *strSeparet,int nArr)
        {
            int i = 0;
            char * pch;

            pch = strtok (strTOsplit,strSeparet);
            for(i = 0;i < nArr;i++)
            {
                //printf ("%s\n",pch);

                strArr[i] = pch;
                pch = strtok (NULL,strSeparet);
            }
        }
void  lerEmpregadosArquivo(Empregado VetorEmpregados[])
        {

            FILE *arquivo;
            arquivo = fopen("empregados.txt", "r");
            char linha[100];
            char *result;
            char * informacoes_linha[3];
            int i =0;
            while (!feof(arquivo))  // Enquando não chegar no fim do arquivo..
            {
                result = *fgets (linha, 100, arquivo);//Leitura de uma linha do arquivo...
                strSplit(linha, informacoes_linha, ";",3); //Separa os campos e os armazena no vetor de 3 posições chamado informacoes_linha
                //Cada posição do vetor VetorEmpregados guarda não so uma mas tres informações.
                 VetorEmpregados[i].matricula = atoi(informacoes_linha[0]);
                strcpy(VetorEmpregados[i].nome, (const char*)(informacoes_linha[1]) );
                VetorEmpregados[i].salario = atof(informacoes_linha[2]);
                i++;
            }
            numeroEmpregados = i;
        }


 void ListaCompleta(Empregado VetorEmpregados[])
        {
	   int i;
            for (i = 0; i < numeroEmpregados; i++)
            {
                printf(" %s : %d : %.2f \n", VetorEmpregados[i].nome, VetorEmpregados[i].matricula,VetorEmpregados[i].salario);
            }
        }
