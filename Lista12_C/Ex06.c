#include <stdio.h>

struct paciente
{
    int COD_PACIENTE[8];
    char NOME[20]; 
    char ENDERECO[50]; 
    int TELEFONE;
};

int main(){
    struct paciente p1;

    FILE *file;

    printf("Digite o código do paciente [8 digitos]: ");
    scanf("%d", p1.COD_PACIENTE);
    printf("Digite o nome do paciente: ");
    scanf("%d", p1.NOME);
    printf("Digite o endereco do paciente: ");
    scanf("%d", p1.ENDERECO);
    printf("Digite o telefone do paciente: ");
    scanf("%d", p1.TELEFONE);

    file = fopen("cliente.txt", "w");
    fprintf(file, "Código de cliente: %d", p1.COD_PACIENTE);
    fprintf(file, "Nome do cliente: %d", p1.NOME);
    fprintf(file, "Endereco: %d", p1.ENDERECO);
    fprintf(file, "Telefone: %d", p1.TELEFONE);
    fclose(file);

    return(0);
}