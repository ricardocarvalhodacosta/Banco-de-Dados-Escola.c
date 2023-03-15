#include <stdio.h>
#include <stdlib.h>

struct notas
{
    char nome[40];
    int matricula;
    char nota[40];
};

typedef struct notas notas;

int main (void) {

    notas dados;
    int menu;
    int i, A, B, C;
    FILE *salas;
    
    printf("Olá, qual classe você gostaria de acessar?\n");
    printf("1. Classe A, 2. Classe B ou 3. Classe C?\n\n");
    scanf("Digite a Letra da Classe = %d\n\n", &i);


    if (i==A) {
        printf("Olá, o que você gostaria de fazer?\n");
        printf("1. Adicionar um novo aluno?;\n");
        printf("2. Verificar os alunos cadastrados?;\n");
        scanf("%d", &menu);

        if (menu == 1)
        {
             salas = fopen ("classeA.txt", "a");
            printf("Digite o nome do Aluno: \n");
            fgets(dados.nome, 40, stdin);
            fprintf(salas, "Aluno: %s\n", dados.nome);
            printf("Agora digite a matricula do Aluno: \n");
            scanf("%d", &dados.matricula);
            fprintf(salas, "Número da Matricula: %d\n", dados.matricula);
            printf("Qual a matéria e nota gostaria de adicionar? \n");
            fgets(dados.nota, 40, stdin);
            fprintf(salas, "Materia e Nota: %s", dados.nota);
            printf("Os dados são!\n");
            printf("Nome: %s, Número Matricula: %d e Materia/Nota: %s.\n", dados.nome, dados.matricula, dados.nota);
            printf("Dados salvos com sucesso! Obrigado.\n\n");
            fclose(salas);
        } else {
            char dados_str[100];
            salas = fopen ("classeA.txt", "r");
            printf("Carregando os dados...\n\n");
            printf("Os dados são: \n\n");
            while (fgets(dados_str, 100, salas) != NULL)
            {
                printf("%s", dados_str);
            }
            fclose(salas);
        }    
    } else {
        printf("Olá, o que você gostaria de fazer?\n");
        printf("1. Adicionar um novo aluno?;\n");
        printf("2. Verificar os alunos cadastrados?;\n");
        scanf("%d", &menu);

        if (menu == 1)
        {
            salas = fopen ("classeB.txt", "w");
            printf("Digite o nome do Aluno: \n");
            fgets(dados.nome, 40, stdin);
            fprintf(salas, "Aluno: %s\n", dados.nome);
            printf("Agora digite a matricula do Aluno: \n");
            scanf("%d", &dados.matricula);
            fprintf(salas, "Número da Matricula: %d\n", dados.matricula);
            printf("Qual a matéria e nota gostaria de adicionar? \n");
            fgets(dados.nota, 40, stdin);
            fprintf(salas, "Materia e Nota: %s", dados.nota);
            printf("Os dados são!\n");
            printf("Nome: %s, Número Matricula: %d e Materia/Nota: %s.\n", dados.nome, dados.matricula, dados.nota);
            printf("Dados salvos com sucesso! Obrigado.\n\n");
            fclose(salas);
        } else {
            char dados_str[100];
            salas = fopen ("classeB.txt", "r");
            printf("Carregando os dados...\n\n");
            printf("Os dados são: \n\n");
            while (fgets(dados_str, 100, salas) != NULL)
            {
                printf("%s", dados_str);
            }
            fclose(salas);
        }    
    }
    
    if (i == C)
    {
        printf("Olá, o que você gostaria de fazer?\n");
        printf("1. Adicionar um novo aluno?;\n");
        printf("2. Verificar os alunos cadastrados?;\n");
        scanf("%d", &menu);

        if (menu == 1)
        {
            salas = fopen ("classeC.txt", "w");
            printf("Digite o nome do Aluno: \n");
            fgets(dados.nome, 40, stdin);
            fprintf(salas, "Aluno: %s\n", dados.nome);
            printf("Agora digite a matricula do Aluno: \n");
            scanf("%d", &dados.matricula);
            fprintf(salas, "Número da Matricula: %d\n", dados.matricula);
            printf("Qual a matéria e nota gostaria de adicionar? \n");
            fgets(dados.nota, 40, stdin);
            fprintf(salas, "Materia e Nota: %s", dados.nota);
            printf("Os dados são!\n");
            printf("Nome: %s, Número Matricula: %d e Materia/Nota: %s.\n", dados.nome, dados.matricula, dados.nota);
            printf("Dados salvos com sucesso! Obrigado.\n\n");
            fclose(salas);
        } else {
            char dados_str[100];
            salas = fopen ("classeC.txt", "r");
            printf("Carregando os dados...\n\n");
            printf("Os dados são: \n\n");
            while (fgets(dados_str, 100, salas) != NULL)
            {
                printf("%s", dados_str);
            }
            fclose(salas);
        }    
    }

    return (0);
}
