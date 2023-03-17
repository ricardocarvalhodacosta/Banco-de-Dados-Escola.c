#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


typedef struct notas notas;

int main (void) {
    
    FILE *arquivo;
    char nome[40];
    double nota;

    arquivo = fopen ("Classe.txt", "w");
    printf("Arquivo aberto com sucesso!\n");
    printf("Adicione o nome e a nota do aluno:\n");
    fgets(nome, 40, stdin);
    printf("Agora a nota do aluno:\n");
    scanf("%d", &nota);
    printf("Armazenando os dados computados...\n");
    printf("...\n");
    printf("..\n");
    printf(".\n");
    printf("Dados armazenados com sucesso!");
    fprintf(arquivo, "Nome: %s\n", nome);
    fprintf(arquivo, "Nota: %d\n\n", nota);
    fclose(arquivo);

    return (0);
}
